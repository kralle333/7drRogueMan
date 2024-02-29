package gameobjects;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.group.FlxGroup;
import flixel.group.FlxSpriteGroup;
import flixel.tile.FlxTilemap;
import flixel.util.FlxPoint;
import flixel.util.FlxRandom;
import states.*;


class Map extends FlxTilemap
{
	
	public var coins:FlxGroup;
	public var sacks:FlxGroup;
	public var stairway:FlxSprite;
	private var depth:Int = 0;
	public var hasSacks:Bool = false;
	
	public function new() 
	{
		super();
		coins = new FlxGroup();
		sacks = new FlxGroup();
		for (i in 0...30)
		{
			var coin:FlxSprite = new FlxSprite(0, 0, "assets/images/map/coin.png");
			coin.kill();
			coins.add(coin);
		}
		for (i in 0...3)
		{
			var sack:FlxSprite = new FlxSprite(0, 0, "assets/images/map/sack.png");
			sack.kill();
			sacks.add(sack);
		}
	}
	
	public function populate(depth:Int)
	{
		this.depth = depth;
		active = true;
		visible = true;
		hasSacks = false;
		var usedBlocks:String;
		if (depth > 5 && depth<11)
		{
			usedBlocks = "assets/images/map/blocksForest.png";
		}
		else if (depth == 11)
		{
			usedBlocks = "assets/images/map/blocksLast.png";
		}
		else
		{
			usedBlocks = "assets/images/map/blocksCastle.png";
		}
		loadMap(MapGenerator.generateMap(depth), usedBlocks , 16, 16, 0, 1, 0, 1);
		setTileProperties(0);
		setTileProperties(2, FlxObject.NONE);
		setTileProperties(1, FlxObject.ANY);
		
		addCoinsAndSacks();
		
		if (depth < 11)
		{
			var randPos:FlxPoint = getRandomEmptyTileNear(FlxPoint.get(18,18));
			PlayState.stairway.setPosition(randPos.x * 16, randPos.y * 16);
		}
		else
		{
			PlayState.stairway.visible = false;
		}
		
	}
	public function hide()
	{
		active = false;
		visible = false;
		while(true)
		{
			if (coins.getFirstAlive() != null)
			{
				coins.getFirstAlive().kill();
			}
			else if (sacks.getFirstAlive() != null)
			{
				sacks.getFirstAlive().kill();
			}
			else
			{
				break;
			}
		}
	}

	public function killCoinOrSack(x:Float, y:Float)
	{
		for (coin in coins)
		{
			var coin:FlxSprite = cast(coin, FlxSprite);
			if (coin.x == x && coin.y == y)
			{
				coin.kill();
				break;
			}
		}
		killSack(x, y);
	}
	public function killSack(x:Float, y:Float)
	{
		hasSacks = false;
		for (sack in sacks)
		{
			var sack:FlxSprite = cast(sack, FlxSprite);
			if (sack.alive)
			{
				if (sack.x == x && sack.y == y)
				{
					sack.kill();
				}
				else 
				{
					hasSacks = true;
				}
			}
		}
	}
	public function addCoinsAndSacks()
	{
		var numOfCoins:Int = FlxRandom.intRanged(15, 30);
		
		for (i in 0...numOfCoins)
		{
			var randPos:FlxPoint = getRandomEmptyTile();
			var coin:FlxSprite = cast(coins.getFirstDead(), FlxSprite);
			coin.reset(randPos.x * 16, randPos.y * 16);
		}
		
		for (i in 0...sacks.length)
		{
			if (FlxRandom.chanceRoll(Math.min(100, depth * 10)))
			{
				var randPos:FlxPoint = null;
				if (FlxRandom.chanceRoll())
				{
					randPos = getRandomEmptyTileNear(FlxPoint.get(10,18));
				}
				else
				{
					randPos = getRandomEmptyTileNear(FlxPoint.get(18,10));
				}
				var sack:FlxSprite = cast(sacks.getFirstDead(), FlxSprite);
				sack.reset(randPos.x * 16, randPos.y * 16);
				
				hasSacks = true;
			}
		}
	}
	
	public function getRandomCoin():FlxSprite
	{
		if (coins.getFirstAlive() != null)
		{
			return  cast(coins.getFirstAlive(), FlxSprite);
		}
		
		return null;
	}

	public function getRandomEmptyTileNear(point:FlxPoint)
	{
		while (true)
		{
			var randTile:FlxPoint = getRandomEmptyTile();
			if (randTile.distanceTo(point) < 3)
			{
				return randTile;
			}
		}
	}
	public function getTileNearSack():FlxPoint
	{
		while (true)
		{
			
			var randSack:FlxSprite = cast(sacks.getRandom(), FlxSprite);
			if (randSack.alive)
			{
				return getRandomEmptyTileNear(new FlxPoint(randSack.x/16, randSack.y/16));
			}
		}
	}
	
	public function getRandomEmptyTile():FlxPoint
	{
		while (true)
		{
			var xRand:Int = FlxRandom.intRanged(1, this.widthInTiles - 1);
			var yRand:Int = FlxRandom.intRanged(1, this.heightInTiles - 1);
			
			if (this.getTile(xRand, yRand) == 2 && !hasCoinOrSack(xRand, yRand) && !hasItem(xRand, yRand))
			{
				if (getTile(xRand - 1, yRand) == 2 || getTile(xRand + 1, yRand) == 2 || 
					getTile(xRand, yRand-1) == 2 || getTile(xRand, yRand+1) == 2)
				{
					return new FlxPoint(xRand, yRand);
				}
			}

		}
	}
	
	
	private function hasCoinOrSack(x:Int, y:Int):Bool
	{
		for (i in coins)
		{
			var coin:FlxSprite = cast(i, FlxSprite);
			if (coin.alive && x * 16 == coin.x && y * 16 == coin.y)
			{
				return true;
			}
		}
		for (s in sacks)
		{
			var sack:FlxSprite = cast(s, FlxSprite);
			if (sack.alive && x * 16 == sack.x && y * 16 == sack.y)
			{
				return true;
			}
		}
		return false;
	}
	private function hasItem(x:Int, y:Int):Bool
	{
		return false;
	}
}