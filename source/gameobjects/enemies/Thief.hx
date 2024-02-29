package gameobjects.enemies;
import flixel.FlxSprite;
import flixel.util.FlxPoint;
import gameobjects.enemies.Enemy;
import states.*;

class Thief extends Enemy
{
	
	private var coinToPickUp:FlxSprite;

	public function new() 
	{
		super(10, "assets/images/enemies/thief.png");
		currentGoal = null;
		destination = null;
		movementSpeed = 1;
	}
	
	
	override public function update():Void 
	{
		super.update();
		if (destination == null)
		{
			setNewDestination();
		}
		if (currentGoal != null && currentGoal.distanceTo(FlxPoint.get(x+8,y+8))<1)
		{
			x = currentGoal.x - 8;
			y = currentGoal.y - 8;
			if(currentGoal.x == destination.x && currentGoal.y == destination.y)
			{
				if (coinToPickUp != null && coinToPickUp.alive)
				{
					coinToPickUp.kill();
					coinToPickUp = null;
				}
				setNewDestination();
			}
			else if (destination!= null)
			{
				moveTowardsNewGoal();
			}
		}
		if (PlayState.player.moved)
		{
			moveInDirection();
		}
	}
	
	
	private function setNewDestination()
	{
		if ((coinToPickUp = PlayState.currentMap.getRandomCoin()) != null)
			{
				destination = FlxPoint.get(coinToPickUp.x + 8, coinToPickUp.y + 8);
				x = Math.round(x / 16) * 16;
				y = Math.round(y / 16) * 16;
				currentPath = PlayState.currentMap.findPath(FlxPoint.get(x+8,y+8), FlxPoint.get(destination.x,destination.y));
				currentPath.splice(0, 1);
				pathIndex = 0;
				if (currentPath.length > 0)
				{
					moveTowardsNewGoal();
				}
			}
	}
	
	override public function fadeIn() 
	{
		super.fadeIn();
		pathIndex = 0;
		currentPath = null;
		coinToPickUp = null;
	}
	
	override public function onWallCollide() 
	{
		super.onWallCollide();
		if (destination == null)
		{
			currentDirection = getRandomDirection();
		}
	}
	
}