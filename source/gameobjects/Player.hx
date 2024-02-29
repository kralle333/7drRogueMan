package gameobjects;
import flixel.effects.FlxSpriteFilter;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.text.FlxText;
import flixel.ui.FlxBar;
import flixel.util.FlxPoint;
import flixel.util.FlxSpriteUtil;
import flixel.util.FlxTimer;
import gameobjects.items.Item;
import gameobjects.items.Sword;
import openfl.filters.GlowFilter;
import states.*;


class Player extends FlxSprite
{
	public var movementSpeed = 1.6;
	public var heart:FlxSprite;
	public var healthTxt:FlxText;
	public var coin:FlxSprite;
	public var coinCount:Int = 0 ;
	public var coinText:FlxText;
	
	public var isVulnerable:Bool = false;
	private var blinkTimer:Float = 0;
	private var blinkInterval:Float = 0.1;
	private var blink:Bool = false;
	public var canKill:Bool = false;
	public var hasSword:Bool = false;
	
	public var isEffectInPlace:Bool = false;
	private var effectTimer:Float;
	private var filter:FlxSpriteFilter;
	private var glowFilter:GlowFilter;
	
	private var items:Array<Item>;
	public var heldItemCount = 0;
	public var moved:Bool = false;
	
	public var justUsedStaff:Bool = false;

	public function new() 
	{
		super(16, 16, "assets/images/player.png");
		health = 3;
		heart = new FlxSprite(368, 50, "assets/images/items/heart.png");
		healthTxt = new FlxText(384, 50, 0, "x3", 8);
		coinCount = 0;
		coin = new FlxSprite(320, 48, "assets/images/map/coin.png");
		coinText = new FlxText(336, 50, 0, "x0", 8);
		effectTimer = 0;
		filter = new FlxSpriteFilter(this, 0, 0);
		
		items = new Array<Item>();
		for (i in 0...3)
		{
			items[i] = null;
		}
		filter.removeAllFilters();
		setInvulnerable(1);
		
		
	}
	
	public function restart()
	{
		loadGraphic("assets/images/player.png");
		filter = new FlxSpriteFilter(this, 0, 0);
		health = 3;
		healthTxt.text = "x" + health;
		coinCount = 0;
		coinText.text = "x0";
		resetStats();
		heldItemCount = 0;
		for (i in 0...3)
		{
			if (items[i] != null)
			{
				items[i].kill();
				items[i] = null;
			}
		}
		setInvulnerable(1);
	}
	
	public function resetStats()
	{
		movementSpeed = 1.6;
		effectTimer = 0;
		visible = true;
		isEffectInPlace = false;
		canKill = false;
		if (filter.filters.length >0)
		{
			filter.removeAllFilters();
		}
		
		isVulnerable = true;
		blink = false;
		blinkTimer = 0;
		
		for (i in 0...items.length)
		{
			if (items[i] != null)
			{
				if (items[i].name == "Sword")
				{
					hasSword = true;
				}
				else if (items[i].name == "Shoes")
				{
					movementSpeed += 0.6;
				}
			}
		}
	}
	
	public function setMovementSpeed(time:Float, value:Float)
	{
		isEffectInPlace = true;
		effectTimer = time;
		movementSpeed = value;
		glowFilter = new GlowFilter(0xFF00FF00,1,4,4,6);
		filter.addFilter(glowFilter);
	}
	
	public function setInvulnerable(time:Float)
	{
		isVulnerable = false;
		isEffectInPlace = true;
		effectTimer = time;
		glowFilter = new GlowFilter(0xFFFFFF00,1,4,4,6);
		filter.addFilter(glowFilter);
	}
	
	public function setAllKilling(time:Float)
	{
		isEffectInPlace = true;
		effectTimer = time;
		canKill = true;
		glowFilter = new GlowFilter(0xFFFF0000,1,4,4,6);
		filter.addFilter(glowFilter);
	}
	
	public function killedEnemy()
	{
		var usedSword:Bool = false;
		for (i in 0...items.length)
		{
			if (items[i] != null && items[i].name == "Sword")
			{

				if (!usedSword)
				{
					var sword:Sword = cast(items[i], Sword);
					sword.uses--;
					if (sword.uses <= 0)
					{
						items[i].use();
						items[i].kill();
						items[i] = null;
						usedSword = true;
						hasSword = false;
						heldItemCount--;
					}
				}
				else
				{
					hasSword = true;
				}
			}
		}
	}

	public function removeLife():Void
	{
		health--;
		healthTxt.text = "x" + health;
		if (health == 0)
		{
			loadGraphic("assets/images/tombstone.png");
			moved = true;
			resetStats();
			isVulnerable = false;
		}
		else
		{
			var randPos:FlxPoint = PlayState.currentMap.getRandomEmptyTileNear(FlxPoint.get(1, 1));
			setPosition(randPos.x * 16, randPos.y * 16);
			resetStats();
			setInvulnerable(1);
		}
	}
	public function addLife()
	{
		health++;
		healthTxt.text = "x" + health;
	}
	
	public function addCoin(value:Int)
	{
		coinCount += value;
		coinText.text = "x" + coinCount;
	}
	override public function update():Void
	{
		super.update();
		
		if (isEffectInPlace && effectTimer<=0)
		{
			resetStats();
		}
		else if(isEffectInPlace && effectTimer <=1 && !blink)
		{
			blink = true;
		}	
		if (canKill)
		{
			filter.applyFilters();
		}
		if (blink)
		{
			blinkTimer -= FlxG.elapsed; 
			if (blinkTimer <= 0) 
			{
				this.visible = !this.visible; 
				blinkTimer += blinkInterval;
			}
		}
		
		if (health > 0)
		{
			
			var movedX:Bool = false;
			var movedY:Bool = false;
			
			var touchX:Float = FlxG.touches.getFirst() != null? FlxG.touches.getFirst().x:FlxG.width/2;
			var touchY:Float = FlxG.touches.getFirst() != null? FlxG.touches.getFirst().y:FlxG.height/2;
			
			
			if (FlxG.keys.pressed.LEFT || (touchX<=touchY && touchX<FlxG.width/4))
			{
				x -= movementSpeed;
				movedX = true;
			}
			if (FlxG.keys.pressed.RIGHT|| (touchX>touchY && touchX>FlxG.width-(FlxG.width/4)))
			{
				x += movementSpeed;
				movedX = true;
			}
			if (FlxG.keys.pressed.UP|| (touchY<=touchX && touchY<FlxG.height/4))
			{
				y -= movementSpeed;
				movedY = true;
			}
			if (FlxG.keys.pressed.DOWN|| (touchY>touchX && touchY>FlxG.height-(FlxG.height/4)))
			{
				y += movementSpeed;
				movedY = true;
			}

			if (!movedX)
			{
				if (Math.abs(x/16-Math.round(x/16)) < 0.33)
				{
					x = Math.round(x / 16) * 16;
				}

			}
			if (!movedY)
			{
							
				if (Math.abs(y / 16 - Math.round(y / 16))< 0.33)
				{
					y = Math.round(y / 16) * 16;
				}
			}
			moved = movedY || movedX;
			
			if (FlxG.keys.justPressed.ONE)
			{
				if (FlxG.keys.pressed.CONTROL)
				{
					tryRemoveItem(0);
				}
				else
				{
					tryUseItem(0);
				}
			}
			else if (FlxG.keys.justPressed.TWO)
			{if (FlxG.keys.pressed.CONTROL)
				{
					tryRemoveItem(1);
				}
				else
				{
				tryUseItem(1);}
			}
			else if (FlxG.keys.justPressed.THREE)
			{if (FlxG.keys.pressed.CONTROL)
				{
					tryRemoveItem(2);
				}
				else
				{
				tryUseItem(2);}
			}
			
			if (effectTimer>0 && moved)
			{
				effectTimer -= FlxG.elapsed;
				
			}
		}
	}
	private function tryRemoveItem(index:Int)
	{
		if (items[index] != null)
		{
			items[index].kill();
			items[index] = null;
			heldItemCount--;
		}
	}
	private function tryUseItem(index:Int)
	{
		if (items[index] != null && items[index].isUseOnce && !isEffectInPlace)
		{
			items[index].use();
			items[index].kill();
			items[index] = null;
			heldItemCount--;
			FlxG.sound.play("assets/sounds/itemUse.wav");
		}
	}
	public function addItem(item:Item)
	{
		if (item.name == "Heart")
		{
			addLife();
			item.kill();
		}
		else
		{
			for (i in 0...3)
			{
				if (items[i] == null)
				{
					items[i] = item;
					items[i].setPosition(348, 112 + 20 * i);
					break;
				}
			}
			heldItemCount++;			
		}
		if (item.name == "Sword")
		{
			hasSword = true;
		}
		else if (item.name == "Shoes")
		{
			movementSpeed += 0.6;
		}
		coinCount -= item.cost;
		coinText.text = "x" + coinCount;
	}
}