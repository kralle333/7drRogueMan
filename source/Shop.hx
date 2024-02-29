package;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.group.FlxGroup;
import flixel.text.FlxText;
import flixel.tile.FlxTilemap;
import flixel.util.FlxMath;
import flixel.util.FlxRandom;
import flixel.util.FlxStringUtil;
import gameobjects.items.*;
import states.*;


class Shop extends FlxTilemap
{
	
	private var layout = 	[	1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
								1, 1, 1, 1, 1, 2, 3, 2, 2, 3, 2, 2, 3, 2, 1, 1, 1, 1, 1,
								1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 1,
								1, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 1,
								1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1];
	
	public var items:Array<Item>;
	
	private var selectedItem:Item;
	public var itemDescText:FlxText;
	public var noSpace:FlxText;
	public function new() 
	{
		super();
		loadMap(FlxStringUtil.arrayToCSV(layout, 19), "assets/images/map/blocksCastle.png", 16, 16, 0, 1);
		this.setTileProperties(2, FlxObject.NONE);
		x = 0;
		y = 160;
		itemDescText = new FlxText(8, 64);
		itemDescText.visible = false;
		items = new Array<Item>();
		noSpace = new FlxText(8, 128, 0, "Inventory full - Remove with (CTRL)+(NUM)");
		noSpace.visible = false;
		
	}
	public function restock(depth:Int)
	{
		for (i in 0...3)
		{
			if (items[i] == null)
			{	
				items[i] = getRandomItem(depth);
				items[i].setPosition(x + 96 + (i * 48), y + 16);
				items[i].depthAdded = depth;
			}
			else
			{
				items[i].revive();
			}
		}
		itemDescText.visible = true;
		PlayState.stairway.setPosition(x + 272, y + 48);
	}
	
	private function getRandomItem(depth:Int):Item
	{
		var randIndex:Int = FlxRandom.intRanged(0, 5);
		switch(randIndex)
		{
			case 0:return new KillPotion();
			case 1:return new MovePotion();
			case 2:return new Heart();
			case 3:return new Sword();
			case 4:return new Shoes();
			case 5:return new Wand();
		}
		return null;
	}
	public function hide()
	{
		for (i in 0...items.length)
		{
			if (items[i] != null)
			{	
				items[i].kill();
			}
		}
		noSpace.visible = false;
		itemDescText.visible = false;
		visible = false;
	}
	
	
	private var showItemDesc:Bool = false;
	override public function update():Void 
	{
		super.update();
		showItemDesc = false;
		if (noSpace.visible && PlayState.player.heldItemCount<3)
		{
			noSpace.visible = false;
		}
		for (i in 0...items.length)
		{
			if (items[i] != null && FlxMath.distanceBetween(items[i], PlayState.player) < 20)
			{
				if (selectedItem != items[i] )
				{
					itemDescText.text = "Desc: "+items[i].description + "\nCost: " + items[i].cost +"\n\n(Space) to Buy\n(Delete) to remove the item from the shop\nto make space for a new item";
					selectedItem = items[i];
				}
				showItemDesc = true;
				break;				
			}
		}
		
		
		
		if (!showItemDesc)
		{
			selectedItem = null;
			itemDescText.text = "";
		}
		
		if (selectedItem != null && FlxG.keys.justPressed.SPACE && PlayState.player.coinCount>=selectedItem.cost)
		{
			for (i in 0...items.length)
			{
				if (items[i] == selectedItem)
				{
					if (selectedItem.name == "Heart" || PlayState.player.heldItemCount<3)
					{
						FlxG.sound.play("assets/sounds/buy.wav");
						PlayState.player.addItem(items[i]);
						items[i] = null;	
						selectedItem = null;
						trace(PlayState.player.heldItemCount);
					}
					else
					{
						noSpace.visible = true;
					}
					break;
				}
			}
			
			selectedItem = null;
		}
		else if (selectedItem != null && FlxG.keys.justPressed.DELETE)
		{
			for (i in 0...items.length)
			{
				if (items[i] == selectedItem)
				{
					items[i].kill();
					items[i] = null;					
					break;
				}
			}
		}
	}
	
}