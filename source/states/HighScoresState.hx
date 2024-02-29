package states;
import flixel.FlxG;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;


class HighScoresState extends FlxState
{
	private var scoresText:FlxText;
	private var exitText:FlxText;
	
	private var goBackButton:FlxButton;
	private var clearScoresButton:FlxButton;
	override public function create():Void
	{
		super.create();
		add(new FlxText(10, 10, 0, "High Scores:", 30));
		scoresText = new FlxText(10, 96,0,"No highscores yet",12);
		if (HighScoreIO.getScores().length > 0)
		{
			scoresText.text = "";
		}
		for (i in 0...HighScoreIO.getScores().length)
		{
			scoresText.text += (i + 1) + ": " + HighScoreIO.getScores()[i].description + " - Score: " + HighScoreIO.getScores()[i].score+"\n";
		}
		add(scoresText);
		
		exitText = new FlxText(10, 300, 0, "Press (Escape) to exit - (C) to clear scores");
		#if desktop
		add(exitText);
		#end
		#if android
		goBackButton = new FlxButton(FlxG.height - 50, 20, "Main menu", goBack);
		clearScoresButton = new FlxButton(FlxG.height - 50, FlxG.width - 120, "Clear Scores", clearScores);
		add(goBackButton);
		add(clearScoresButton);
		#end
		
	}
	
	private function goBack()
	{
		FlxG.switchState(new MenuState());
	}
	private function clearScores()
	{
		HighScoreIO.clearScores();
		scoresText.text = "Cleared!";
	}
	
	override public function update():Void 
	{
		super.update();
		if (FlxG.keys.justPressed.ESCAPE)
		{
			goBack();
		}
		else if (FlxG.keys.justPressed.C)
		{
			clearScores();
		}
	}
	
	
}