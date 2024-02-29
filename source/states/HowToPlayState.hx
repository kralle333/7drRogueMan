package states;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.group.FlxGroup;
import flixel.text.FlxText;
import flixel.tile.FlxTilemap;
import flixel.util.FlxColor;
import flixel.util.FlxStringUtil;
import gameobjects.Player;


class HowToPlayState extends FlxState
{
	private var continueText:FlxText;
	private var pages:Array<FlxGroup>;
	private var correct:FlxText;
	private var stairway:FlxSprite;
	
	
	//Page1
	private var player1:Player;
	private var exampleTileMap:FlxTilemap;
	private var exampleTiles = [1, 1, 1, 1, 1, 1, 1, 1, 1,
								1, 2, 2, 2, 2, 2, 2, 2, 1,
								1, 2, 2, 2, 2, 2, 2, 2, 1,
								1, 2, 2, 2, 2, 2, 2, 2, 1,
								1, 2, 2, 2, 2, 2, 2, 2, 1,
								1, 1, 1, 1, 1, 1, 1, 1, 1];
								
	private var pageIndex:Int = 0;
	
	override public function create():Void 
	{
		super.create();
		pages = new Array<FlxGroup>();
		add(new FlxText(10, 10, 0, "How to play", 30));
		continueText = new FlxText(10, 300, 0, "Press (Enter) to continue");
		correct = new FlxText(0, 0, 0, "Correct", 16);
		correct.color = FlxColor.GREEN;
		correct.visible = false;
		
		#if desktop
		add(continueText);
		#end
		#if android
		
		#end
		
		createPage1();
		createPage2();
		pages[0].visible = true;
	}
	
	private function createPage1()
	{
		pages[0] = new FlxGroup();
		
		pages[0].add(new FlxText(10, 50, 0, "Rogueman is a semi-turnbased(Enemies move when you move) roguelike \ninspired by both traditional roguelikes and old arcade games"));
		#if desktop
		pages[0].add(new FlxText(160, 100, 0, "Move the character with the arrow keys \nand get to the next floor by pressing (Space)\nwhile standing close to the stairway\nto get to the next floor"));
		#end 
		#if android
		pages[0].add(new FlxText(160, 100, 0, "Move the character by touching the sides of the screen \nand get to the next floor by pressing (Space)\nwhile standing close to the stairway\nto get to the next floor"));
		#end
		player1 = new Player();
		
		exampleTileMap = new FlxTilemap();
		exampleTileMap.loadMap(FlxStringUtil.arrayToCSV(exampleTiles, 9), "assets/images/map/blocksCastle.png", 16, 16, 0, 1, 0);
		exampleTileMap.setTileProperties(2, FlxObject.NONE);
		exampleTileMap.x = 16;
		exampleTileMap.y = 96;
		player1.x = exampleTileMap.x + 16;
		player1.y = exampleTileMap.y + 32;
		player1.resetStats();
		pages[0].add(exampleTileMap);
		stairway = new FlxSprite(exampleTileMap.x + 48, exampleTileMap.y + 16, "assets/images/map/stairway.png");
		pages[0].add(stairway);
		pages[0].add(player1);
		pages[0].add(new FlxText(10, 200, 0, "Win the game by retrieving the amulet of yendor found on the 11th floor"));
		pages[0].add(correct);
		add(pages[0]);
		
		pages[0].visible = false;
	}
	
	
	private function createPage2()
	{
		pages[1] = new FlxGroup();
		
		pages[1].add(new FlxText(10, 50, 0, "Each floor is inhabited by enemies that kill you on touch\nAnalyze their move pattern to get past them"));
		pages[1].add(new FlxSprite(10, 80, "assets/images/enemies/slime.png"));
		pages[1].add(new FlxSprite(36, 80, "assets/images/enemies/thief.png"));
		pages[1].add(new FlxText(10, 100, 0, "Every floor also contains coins, which can be used to buy \nitems in the shops found between floors"));
		pages[1].add(new FlxSprite(10, 130, "assets/images/map/coin.png"));
		pages[1].add(new FlxSprite(36, 130, "assets/images/map/sack.png"));
		pages[1].add(new FlxText(10, 150, 0, "Shops offer a random selection of items that ranges from \none time use items to equipped items\nTo get a new selection of items in the next encounted shop, \nitems must be either deleted using (Delete) or bought using (Space)"));
		pages[1].add(new FlxSprite(10, 200, "assets/images/items/wand.png"));
		pages[1].add(new FlxSprite(36, 200, "assets/images/items/movePotion.png"));
		pages[1].add(new FlxSprite(62, 200, "assets/images/items/sword.png"));
		pages[1].add(new FlxText(10,220,0,"Use items using (1),(2) or (3) - Remove an item with (Ctrl)+(1),(2) or (3)"));
		pages[1].visible = false;
		add(pages[1]);
	}
	

	
	override public function update():Void 
	{
		super.update();
		if (pageIndex == 0)
		{
			FlxG.collide(player1, exampleTileMap);
			if (FlxG.keys.justReleased.SPACE && FlxG.overlap(player1,stairway))
			{
				correct.visible = true;
				correct.x = 160;
				correct.y = 150;
			}
		}
		
		if (FlxG.keys.justReleased.ENTER)
		{
			pages[pageIndex].visible = false;
			pageIndex++;
			if (pageIndex < pages.length)
			{
				pages[pageIndex].visible = true;
				if (pageIndex == pages.length - 1)
				{
					continueText.text = "Press (Enter) to exit";
				}
			}
			else
			{
				FlxG.switchState(new MenuState());
			}
		}
	}
	
}