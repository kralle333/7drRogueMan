package;
import flixel.util.FlxSave;

class DescriptionScoreMap
    {
        public var score:Int;
        public var description:String;

        public function new(score:Int, description:String) 
        {
            this.score = score;
			this.description = description;
        }
    }
class HighScoreIO
{
	
	
	private static var scores:Array<DescriptionScoreMap>;
    private static  var maxScores:Int = 10;
	private static var isInitialized:Bool = false;
	private static var gameSave:FlxSave;
	
	public function new() 
	{
		
	}
	public static function getScores():Array<DescriptionScoreMap>
	{
		if (!isInitialized)
		{
			initialize();
		}
		return scores;
	}
	public static function initialize()
	{
		if (!isInitialized)
		{
			gameSave = new FlxSave();
			gameSave.bind("highscores");
			scores = new Array<DescriptionScoreMap>();
			if (gameSave.data.scoresDesc == null)
			{
				gameSave.data.scoresDesc = new Array<String>();
				gameSave.data.scoresVal = new Array<Int>();
			}
			else
			{
				for (i in 0...gameSave.data.scoresDesc.length)
				{
					scores.push(new DescriptionScoreMap(gameSave.data.scoresVal[i], gameSave.data.scoresDesc[i]));
				}
			}
			
			isInitialized = true;
        }
    }
	
    public static function clearScores()
    {
        initialize();
        gameSave.data.scoresDesc = null;
		gameSave.data.scoresVal = null;	
		gameSave.flush();
        isInitialized = false;
        initialize();
    }
	public static function isHighScore(score:Int):Bool
	{
		if (!isInitialized)
		{
			initialize();
		}
		if (scores.length < maxScores)
		{
			return true;
		}
		for (i in 0...maxScores)
		{
			if (score > scores[i].score)
			{
				return true;
			}
		}
		return false;
	}
	
	public static function putScore(initials:String, depth:Int, score:Int)
	{
		if (!isInitialized)
		{
			initialize();
		}
		var scoreToPut:DescriptionScoreMap = new DescriptionScoreMap(score,"");
		if (depth <= 11)
		{
			scoreToPut.description = initials+" was killed on depth "+depth;
		}
		else
		{
			scoreToPut.description = initials+" got the amulet of yendor!";
		}
		scoreToPut.score = score;
		for (i in 0...maxScores)
		{
			if (i>=scores.length)
			{
				scores[i] = scoreToPut;
				gameSave.data.scoresDesc[i] = scoreToPut.description;
				gameSave.data.scoresVal[i] = scoreToPut.score;
				break;
			}
			else if (scoreToPut.score > scores[i].score)
            {
                var temp:DescriptionScoreMap = scores[i];
                scores[i] = scoreToPut;
                scoreToPut = temp;
				gameSave.data.scoresDesc[i] = scoreToPut.description;
				gameSave.data.scoresVal[i] = scoreToPut.score;
            }
        }
        gameSave.flush();

	}
}