package states;

import flash.display.Sprite;
import flixel.*;
import flixel.FlxState;
import flixel.group.FlxGroup;
import flixel.text.FlxText;
import flixel.tile.*;
import flixel.util.FlxColor;
import flixel.util.FlxMath;
import flixel.util.FlxPoint;
import flixel.util.FlxRandom;
import flixel.util.FlxRect;
import flixel.util.FlxSpriteUtil;
import flixel.util.FlxStringUtil;
import flixel.util.FlxTimer;
import gameobjects.*;
import gameobjects.enemies.Enemy;
import gameobjects.enemies.Ghost;
import gameobjects.enemies.Poison;
import gameobjects.enemies.PoisonSlime;
import gameobjects.enemies.Slime;
import gameobjects.enemies.Soldier;
import gameobjects.enemies.Thief;
import gameobjects.items.Item;

class PlayState extends FlxState
{
	private var mapGenerator:MapGenerator;
	public static var currentMap:Map;
	public static var player:Player;
	public static var stairway:FlxSprite;
	private var shop:Shop;
	private var amuletRoom:AmuletRoom;
	
	
	//Enemies
	public var enemyGroups:Array<FlxGroup>;
	public var chanceOfSpawning:Array<Int>;
	public var slimes:FlxGroup;
	public var thieves:FlxGroup;
	public var soldiers:FlxGroup;
	public var poisonSlimes:FlxGroup;
	public var poisons:List<Poison>;
	public var ghosts:FlxGroup;
	public var aliveEnemies:List<Enemy>;
	
	private var minEnemyCount:Int = 5;
	private var maxEnemyCount:Int = 10;
	private var enemyCount:Int = 0;
	private var enemyTimer:Float;
	

	//Stats
	private static var scoreText:FlxText;
	public static var score:Int = 0;
	private var itemsText:FlxText;
	private var depth:Int = 1;
	private var depthText:FlxText;
	
	private var highScoreText:FlxText;
	private var initials:String = "";
	private var pressInitials:Bool = false;
	
	private var isGameOver:Bool = false;
	public var gameOverText:FlxText;
	
	public function new():Void
	{
		super();
		score = 0;
	}
	
	override public function create():Void
	{
		super.create();
		stairway = new FlxSprite(0, 0, "assets/images/map/stairway.png");
		FlxG.worldBounds.set(0, 0, 336, 336);
		MapGenerator.init();
		
		//Map
		player = new Player();
		currentMap = new Map();
		currentMap.populate(depth);
		add(currentMap);
		add(currentMap.coins);
		add(currentMap.sacks);
		shop = new Shop();
		add(shop);
		add(stairway);
		
		//Amulet
		amuletRoom = new AmuletRoom();
		add(amuletRoom);
		add(amuletRoom.yendor);
		add(amuletRoom.yendorText);
		add(amuletRoom.highScoreText);
		add(player);
		
		slimes = new FlxGroup();	
		thieves = new FlxGroup();
		soldiers = new FlxGroup();
		poisonSlimes = new FlxGroup();
		poisons = new List<Poison>();
		ghosts = new FlxGroup();
		enemyGroups = new Array<FlxGroup>();
		aliveEnemies = new List<Enemy>();
		for (i in 0...20)
		{
			var newBlob:Slime = new Slime(0, 0);
			newBlob.kill();
			slimes.add(newBlob);
			
			var newThief:Thief = new Thief();
			newThief.kill();
			thieves.add(newThief);
			
			var newSoldier:Soldier = new Soldier();
			newSoldier.kill();
			soldiers.add(newSoldier);
			
			var newPoisonSlime:PoisonSlime = new PoisonSlime();
			newPoisonSlime.kill();
			poisonSlimes.add(newPoisonSlime);
			for (splat in newPoisonSlime.poisons)
			{
				add(splat);
				poisons.add(splat);
			}
			
			var newGhost:Ghost = new Ghost();
			newGhost.kill();
			ghosts.add(newGhost);
		}
		enemyGroups = [slimes, thieves, soldiers,poisonSlimes, ghosts];
		chanceOfSpawning = [50, 20, 40,30, 50];
		
		add(poisonSlimes);
		add(ghosts);
		add(slimes);
		add(soldiers);
		add(thieves);
		
		enemyTimer = 0;
		addEnemies();
		
		//GUI
		add(player.heart);
		add(player.healthTxt);
		add(player.coin);
		add(player.coinText);
		depthText = new FlxText(322, 30, 0, "Depth: "+depth);
		add(depthText);
		scoreText = new FlxText(322, 10, 0, "Score:0", 8);
		add(scoreText);
		
		shop.visible = false;
		shop.active = false;
		add(shop.itemDescText);
		add(shop.noSpace);
		
		highScoreText = new FlxText(16, 64, 0, "New Highscore!\n\nEnter your initials:\n",16);
		add(highScoreText);
		highScoreText.visible = false;
		
		gameOverText = new FlxText(16, 64, 0, "Game over\nPress (R) to play again\nPress (ESC) to exit", 16);
		gameOverText.color = FlxColor.WHITE;
		add(gameOverText);
		gameOverText.visible = false;
		
		itemsText = new FlxText(322, 90, 0, "Items:\n1:\n2:\n3:\n",16);
		add(itemsText);
		
		add(new FlxText(322, 250, 0, "Exit:\n(Ctrl)+(Q)"));
	}
	
	private function showAmuletRoom()
	{
		FlxG.camera.fade(FlxColor.BLACK,.33, true);
		currentMap.hide();
		killAllEnemies();
		amuletRoom.show();
	}
	private function showShop()
	{
		FlxG.camera.fade(FlxColor.BLACK,.33, true);
		currentMap.hide();
		killAllEnemies();
		player.setPosition(shop.x+16, shop.y+48);
		shop.visible = true;
		shop.active = true;
		shop.restock(depth);
		for (i in 0...shop.items.length)
		{
			if (shop.items[i].depthAdded == depth)
			{
				add(shop.items[i]);
			}
		}
		addToScore(100 * depth);
	}
	private function createNewMap()
	{
		FlxG.camera.fade(FlxColor.BLACK, .33, true);
		enemyCount = 0;
		shop.hide();
		depth++;
		currentMap.populate(depth);
		var randPos:FlxPoint = PlayState.currentMap.getRandomEmptyTileNear(FlxPoint.get(1, 1));
		player.setPosition(randPos.x*16,randPos.y*16);
		depthText.text = "Depth: " + depth;
		addEnemies();
	}
	
	public function killAllEnemies()
	{
		for (enemy in aliveEnemies)
		{
			enemy.kill();
			enemy.setPosition(-402,-402);
		}
		enemyCount = 0;
		aliveEnemies.clear();
	}
	private function addEnemies():Void
	{
		if (currentMap.active && !isGameOver && enemyCount < maxEnemyCount)
		{
			var enemySpawnCnt:Int = FlxRandom.intRanged(1, 1+Std.int(Math.abs(minEnemyCount - enemyCount)-1));
			
			while (enemySpawnCnt > 0)
			{
				var enemy = getRandomEnemy();
				enemy.revive();
				enemy.fadeIn();
				var randPos:FlxPoint;
				do
				{
					randPos = currentMap.getRandomEmptyTile();
				}
				while (FlxMath.isDistanceToPointWithin(player,randPos,3));
				
				enemy.setPosition(randPos.x*16, randPos.y*16);
				enemyCount++;
				enemySpawnCnt--;
				aliveEnemies.add(enemy);
			}
		}
		if (minEnemyCount > enemyCount || depth == 11)
		{                                   
			enemyTimer = 1;
		}
		else
		{
			enemyTimer = 2;
		}				
	}
	
	private function getRandomEnemy():Enemy
	{
		while (true)
		{
			var randType:Int = FlxRandom.intRanged(0, 4);
			switch(randType)
			{
				case 0:
					if ((depth >= 1 && depth <= 5 && FlxRandom.chanceRoll(chanceOfSpawning[randType])) || depth==11)
					{
						return cast(slimes.getFirstDead(),Slime);
					}
				case 1:
					if ((depth >= 2 && depth <= 5 &&  FlxRandom.chanceRoll(chanceOfSpawning[randType])) || depth==11)
					{
						return cast(thieves.getFirstDead(),Thief);
					}
				case 2: 
					if ((depth >= 3 && depth <= 7 && FlxRandom.chanceRoll(chanceOfSpawning[randType]))|| depth==11)
					{
						return cast(soldiers.getFirstDead(),Soldier);
					}
				case 3:
					if ((depth >= 6 && depth <= 10 && FlxRandom.chanceRoll(chanceOfSpawning[randType]))|| depth==11)
					{
						return cast(poisonSlimes.getFirstDead(),PoisonSlime);
					}
				case 4:
					if ((depth >= 6 && depth <= 10 && FlxRandom.chanceRoll(chanceOfSpawning[randType]))|| depth==11)
					{
						return cast(ghosts.getFirstDead(),Ghost);
					}
			}
		}
	}
	
	override public function destroy():Void
	{
		super.destroy();
	}
	
	override public function update():Void
	{
		super.update();
			if (currentMap.active)
			{
				if (player.justUsedStaff)
				{
					killAllEnemies();
					player.justUsedStaff = false;
				}
				if (!isGameOver && player.moved)
				{
					FlxG.collide(player, currentMap);
					FlxG.overlap(player, currentMap.coins, coinCollision);
					FlxG.overlap(player, currentMap.sacks, sackCollision);
					if (depth != 11)
					{
						FlxSpriteUtil.screenWrap(player, true, true, true, true);
					}
					else if(player.y<0)
					{
						showAmuletRoom();
					}
				}
				if (depth<11 && FlxG.overlap(player, PlayState.stairway) && FlxG.keys.pressed.SPACE)
				{
					FlxG.sound.play("assets/sounds/steps.wav",0.5);
					showShop();
				}	
				else if (player.moved)
				{
					FlxG.overlap(thieves, currentMap.coins, thiefCoinCollision);
					FlxG.overlap(thieves, currentMap.sacks, thiefCoinCollision);
								
				
					for (enemy in aliveEnemies)
					{
						
						FlxG.overlap(player, enemy, enemyCollision);
						if(enemy.usesCollision && FlxG.collide(enemy, currentMap))
						{
							enemy.onWallCollide();
						}
					}
					for (splat in poisons)
					{
						if (splat.alive)
						{
							FlxG.overlap(player, splat, enemyCollision);
						}
					}

					enemyTimer -= FlxG.elapsed;
					if (enemyTimer <= 0)
					{
						addEnemies();
					}
				}
			}
			else if (shop.active)
			{
				FlxG.collide(shop, player);
				if (FlxG.overlap(player, PlayState.stairway) && FlxG.keys.pressed.SPACE)
				{
					FlxG.sound.play("assets/sounds/steps.wav",0.5);
					createNewMap();
				}
			}
			
			if(isGameOver)
			{
				if (FlxG.keys.justPressed.R)
				{
					gameOverText.visible = false;
					isGameOver = false;
					depth = 0;
					score = 0;
					scoreText.text = "Score:" + score;
					player.restart();
					killAllEnemies();
					currentMap.hide();
					createNewMap();
				}
				else if (FlxG.keys.justPressed.ESCAPE)
				{
					FlxG.switchState(new MenuState());
				}
			}
			else if (pressInitials)
			{
				if (initials.length > 0 && FlxG.keys.justReleased.BACKSPACE)
				{
					initials = initials.substring(0, initials.length - 1);
					highScoreText.text = highScoreText.text.substring(0, highScoreText.text.length - 1);
				}
				else if(initials.length<3)
				{
					var abc = ~/[A-Z]/;
					var newInitial:String = FlxG.keys.firstJustReleased();
					if (newInitial.length == 1 && abc.match(newInitial))
					{
						initials += newInitial;
						highScoreText.text += newInitial;						
					}
				}
				else if (initials.length == 3 && FlxG.keys.justPressed.ENTER)
				{
					HighScoreIO.putScore(initials, depth, score);
					highScoreText.visible = false;
					isGameOver = true;
					gameOverText.visible = true;
				}
			}
			if (FlxG.keys.pressed.CONTROL && FlxG.keys.pressed.Q)
			{
				FlxG.switchState(new MenuState());
			}
	}	
	
	public static function addToScore(add:Int)
	{
		score+= add;
		scoreText.text = "Score:"+ score;
	}
	
	private function enemyCollision(player:Player, enemy:Enemy)
	{
		if ((player.canKill || player.hasSword) && enemy.canKill)
		{
			aliveEnemies.remove(enemy);
			enemy.kill();
			player.killedEnemy();
			enemyCount--;
			FlxG.sound.play("assets/sounds/kill.wav");
		}
		else if (!enemy.isFading && enemy.canKill && player.isVulnerable)
		{
			player.removeLife();
			FlxG.sound.play("assets/sounds/dead.wav");
			FlxG.camera.shake(0.02,0.2);
			if (player.health <= 0)
			{
				if (HighScoreIO.isHighScore(score))
				{
					pressInitials = true;
					highScoreText.visible = true;
				}
				else
				{
					isGameOver = true;
					gameOverText.visible = true;
				}
			}
			enemy.killedPlayer();
			if (!enemy.alive)
			{
				enemyCount--;
				aliveEnemies.remove(enemy);
			}
		}
	}
	private function coinCollision(p:FlxObject,coin:FlxObject):Void
	{
		FlxG.sound.play("assets/sounds/coin.wav");
		coin.kill();
		player.addCoin(1);
		addToScore(5);
	}
	private function sackCollision(p:FlxObject, sack:FlxSprite):Void
	{
		FlxG.sound.play("assets/sounds/sack.wav");
		currentMap.killSack(sack.x, sack.y);
		player.addCoin(10);
		addToScore(50);
	}
	private function thiefCoinCollision(p:Thief, coin:FlxSprite):Void
	{
		currentMap.killCoinOrSack(coin.x, coin.y);
	}
}