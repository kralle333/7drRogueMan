package gameobjects.enemies;
import flixel.FlxSprite;
import flixel.tweens.FlxTween;
import flixel.util.FlxPoint;
import flixel.util.FlxRandom;
import flixel.util.FlxSpriteUtil;
import flixel.util.FlxTimer;
import states.*;

	enum MovementDirection 
	{
		Left; Right; Up; Down;
	}
class Enemy extends FlxSprite
{
	
	private var movementSpeed:Dynamic;	
	private var currentDirection:MovementDirection;
	private var fadeInTime:Float = 1;
	private var fadeInTimer:FlxTimer;
	public var isFading:Bool = false;

	private var destination:FlxPoint;
	private var pathIndex:Int = 0;
	private var currentGoal:FlxPoint;
	private var currentPath:Array<FlxPoint>;
	public var canKill:Bool = true;
	public var pointsWorth:Int = 0;
	public var usesCollision:Bool = true;
	
	public function new(pointsWorth:Int, texture:String)
	{
		this.pointsWorth = pointsWorth;
		super(x, y, texture);
		currentDirection = MovementDirection.Left;
		fadeInTimer = new FlxTimer();
	}
	
	public function moveInDirection():Void
	{
		switch(currentDirection)
		{
			case Up:y -= movementSpeed; 
			case Down:y += movementSpeed;
			case Left:x -= movementSpeed;
			case Right:x += movementSpeed;
		}
		FlxSpriteUtil.screenWrap(this, true, true, true, true);
	}
	override public function update():Void 
	{
		super.update();
		if (!fadeInTimer.finished)
		{
			this.alpha += 1 / 24;
		}
	}
	private function getRandomDirection():MovementDirection
	{
		switch(FlxRandom.intRanged(0, 3))
		{
			case 0:return MovementDirection.Down;
			case 1:return MovementDirection.Left;
			case 2:return MovementDirection.Right;
			case 3:return MovementDirection.Up;
		}
		return null;
	}
	public function onWallCollide()
	{
		
	}

	private function moveTowardsNewGoal()
	{
		
		currentGoal = currentPath[pathIndex];

		//trace(currentGoal + " and " + (x+8),(y+8));
		//trace("Moving to " + ((currentGoal.x - 8) / 16), ((currentGoal.y - 8) / 16));
		if (currentGoal.x > x+8)
		{
			currentDirection = MovementDirection.Right;
		}
		else if (currentGoal.x < x+8)
		{
			currentDirection = MovementDirection.Left;
		}
		else if (currentGoal.y > y+8)
		{
			currentDirection = MovementDirection.Down;
		}
		else if (currentGoal.y < y+8)
		{
			currentDirection = MovementDirection.Up;
		}
		pathIndex ++;
		if (pathIndex > currentPath.length - 1)
		{
			currentPath = null;
			pathIndex = 0;
		}
	}
	
	public function killedPlayer()
	{
		
	}

	private function activate(timer:FlxTimer)
	{
		this.alpha = 1;
		isFading = false;
	}
	public function fadeIn()
	{
		currentGoal = null;
		destination = null;
		alpha = 0;
		fadeInTimer.start(1, activate);
		isFading = true;
	}
}