package states;

import flixel.effects.FlxSpriteFilter;
import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.tile.FlxTilemap;
import flixel.ui.FlxButton;
import flixel.util.FlxMath;
import flixel.util.FlxRandom;
import openfl.filters.GlowFilter;
import states.HighScoresState;
import states.PlayState;


class MenuState extends FlxState
{
	
	private var playButton:FlxButton;
	private var exitButton:FlxButton;
	private var buttons:Array<FlxButton>;
	private var selectedButton:FlxSprite;
	private var selectedButtonIndex:Int = 0;
	
	
	private var moveRight:Bool = true;
	private var isPlayerChased:Bool = true;
	private var player:FlxSprite;
	private var slimes:Array<FlxSprite>;
	private var movementSpeed:Float = 3.2;
	
	private var filter:FlxSpriteFilter;
	private var glowFilter:GlowFilter;
	
	private var creator:FlxText;
	
	override public function create():Void
	{
		super.create();
		FlxG.mouse.visible = false;
		player = new FlxSprite( -20, FlxRandom.intRanged(16, FlxG.height - 16), "assets/images/player.png");
		add(player);
		filter = new FlxSpriteFilter(player, 0, 0);
		
		slimes = new Array<FlxSprite>();
		for (s in 0...5)
		{
			slimes[s] = new FlxSprite(-40+-20*s, player.y, "assets/images/enemies/slime.png");
			add(slimes[s]);
		}
		add(new FlxText(FlxG.width / 2-90, FlxG.height / 10, FlxG.width, "RogueMan", 30, true));
		buttons = new Array<FlxButton>();
		buttons[0] = new FlxButton(FlxG.width / 2-40, FlxG.height / 2, "Play",changeToPlay);
		buttons[1] = new FlxButton(FlxG.width / 2 - 40, buttons[0].y + FlxG.height / 10, "High Scores",changeToHighscore);
		buttons[2] = new FlxButton(FlxG.width / 2-40, buttons[1].y+FlxG.height/10, "How to play",changeToHowTo);
		selectedButton = new FlxSprite(buttons[0].x - 24, buttons[0].y, "assets/images/selectedbutton.png");
		
		#if desktop
		add(selectedButton);
		#end
		
		for (i in 0...buttons.length)
		{
			add(buttons[i]);
		}
		
		add(new FlxText(10, 290, 0, "Created by Kristian Pilegaard Jensen for the 7drl challenge 2015"));
		add(new FlxText(10, 305,0,"Find more of my games here: www.kristianpilegaard.dk"));

	}
	
	
	override public function destroy():Void
	{
		super.destroy();
	}
	
	private function changeToPlay()
	{
		FlxG.switchState(new PlayState());
	}
	private function changeToHighscore()
	{
		FlxG.switchState(new HighScoresState());
	}
	private function changeToHowTo()
	{
		FlxG.switchState(new HowToPlayState());
	}
	override public function update():Void
	{
		super.update();
		#if desktop
		desktopInput();
		#end

		moveBackgroundSprites();
		
	}	
	
	private function desktopInput()
	{
		if (FlxG.keys.pressed.ENTER)
		{
			switch(selectedButtonIndex)
			{
				case 0:FlxG.switchState(new PlayState());
				case 1:FlxG.switchState(new HighScoresState());
				case 2:FlxG.switchState(new HowToPlayState());
			}
		}
		else if (FlxG.keys.justPressed.DOWN)
		{
			if (selectedButtonIndex < buttons.length - 1)
			{
				selectedButtonIndex++;
				selectedButton.setPosition(selectedButton.x,buttons[selectedButtonIndex].y);
			}
		}
		else if (FlxG.keys.justPressed.UP)
		{
			if (selectedButtonIndex > 0)
			{
				selectedButtonIndex--;
				selectedButton.setPosition(selectedButton.x,buttons[selectedButtonIndex].y);
			}
		}
	}

	private function moveBackgroundSprites()
	{
		var changedDirection:Bool = false;
		if (moveRight)
		{
			player.x += movementSpeed;
			for (i in 0...5)
			{
				slimes[i].x += movementSpeed;
			}
			if ((isPlayerChased && slimes[4].x > FlxG.width+40))
			{
				if (FlxRandom.chanceRoll(25))
				{
					isPlayerChased = false;
					glowFilter = new GlowFilter(0xFFFF0000,1,4,4,6);
					filter.addFilter(glowFilter);
				}
				else
				{
					player.x = FlxG.width + 20;
				}
				moveRight = false;
				changedDirection = true;
			}
			else if ((!isPlayerChased && player.x > FlxG.width + 20))
			{
				filter.removeAllFilters();
				isPlayerChased = true;
				moveRight = false;
				changedDirection = true;
			}
		}
		else
		{
			player.x -= movementSpeed;
			for (i in 0...5)
			{
				slimes[i].x -= movementSpeed;
			}
			if ((isPlayerChased && slimes[0].x <= -40))
			{
				if (FlxRandom.chanceRoll(25))
				{
					isPlayerChased = false;
					glowFilter = new GlowFilter(0xFFFF0000,1,4,4,6);
					filter.addFilter(glowFilter);
				}
				else
				{
					player.x = -20;
				}
				moveRight = true;
				changedDirection = true;
			}
			else if ((!isPlayerChased && player.x <=-20))
			{
				filter.removeAllFilters();
				isPlayerChased = true;
				moveRight = true;
				changedDirection = true;
			}
		}
		
		if (changedDirection)
		{
			var randY:Int = FlxRandom.intRanged(16, FlxG.height - 16);
			
			player.y = randY;
			for (i in 0...slimes.length)
			{
				slimes[i].y = randY;
			}
		}
		
		if (FlxG.keys.pressed.CONTROL && FlxG.keys.pressed.C && FlxG.keys.pressed.H)
		{
			HighScoreIO.clearScores();
		}
	}
}