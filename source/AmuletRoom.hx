package;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.text.FlxText;
import flixel.tile.FlxTilemap;
import flixel.util.FlxMath;
import flixel.util.FlxStringUtil;
import gameobjects.items.Item;
import states.*;


class AmuletRoom extends FlxTilemap
{
	public var yendor:Item;
	private var amuletRoom = [	1, 1, 1, 1, 1,
								1, 2, 2, 2, 1,
								1, 2, 3, 2, 1,
								1, 2, 2, 2, 1,
								1, 1, 1, 2, 1];
								
	public var yendorText:FlxText;
	private var playerHasYendor:Bool = false;
	private var playerLeft:Bool = false;
	
	public var highScoreText:FlxText;
	private var initials:String = "";
	private var pressInitials:Bool = false;
	
	public function new() 
	{
		super();
		loadMap(FlxStringUtil.arrayToCSV(amuletRoom, 5), "assets/images/map/amuletRoom.png", 16, 16, 0, 1, 0);
		setTileProperties(2, FlxObject.NONE);
		yendor = new Item("assets/images/items/yendor.png");
		yendorText = new FlxText(10, 32, 0, "Press (Space) to pick up \nthe amulet of yendor",16);
		
		visible = false;
		active = false;
		yendor.visible = false;
		yendorText.visible = false;
		
		highScoreText = new FlxText(16, 64, 0, "New Highscore!\n\nEnter your initials:\n",16);
		highScoreText.visible = false;
	}
	
	
	
	public function show()
	{
		visible = true;
		active = true;
		yendor.visible = true;
		
		x = Math.round(PlayState.player.x/16)*16 - 48;
		y = 96;
		PlayState.player.y = y + 48;
		playerLeft = false;
		yendor.x = x + 32;
		yendor.y = y + 32;
	}
	override public function update():Void 
	{
		super.update();
		FlxG.collide(PlayState.player, this);
		if (!playerHasYendor)
		{
			if (FlxMath.distanceBetween(yendor, PlayState.player) < 20)
			{
				yendorText.visible = true;
				if (FlxG.keys.justPressed.SPACE)
				{
					yendor.setPosition(330, 200);
					playerHasYendor = true;
					yendorText.visible = false;
					FlxG.sound.play("assets/sounds/yendor.wav",0.5);
				}
			}
			if (PlayState.player.y > y+48)
			{
				PlayState.player.y = y + 48;
			}
		}
		else if(!playerLeft && playerHasYendor)
		{
			trace("waiting for player");
			if (PlayState.player.y > y + 64 )
			{
				playerLeft = true;
				visible =false;
				yendor.visible = true;
				PlayState.player.kill();
				PlayState.addToScore(3000);
				PlayState.addToScore(PlayState.player.coinCount * 10);
				yendorText.visible = true;
				yendorText.text = "Congratulations! \nYou won the game!\nPress (Enter) to continue";
			}
			else
			{
				FlxG.camera.shake(0.02);
			}
		}
		else if (playerLeft && !pressInitials)
		{
			if (FlxG.keys.justPressed.ENTER)
			{
				yendorText.visible = false;
				if (HighScoreIO.isHighScore(PlayState.score))
				{
					pressInitials = true;
					highScoreText.visible = true;
				}
				else
				{
					FlxG.switchState(new HighScoresState());
				}
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
				HighScoreIO.putScore(initials, 12, PlayState.score);
				highScoreText.visible = false;
				FlxG.switchState(new HighScoresState());
			}
		}

	}
	
}