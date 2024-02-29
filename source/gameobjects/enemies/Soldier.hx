package gameobjects.enemies;
import flixel.util.FlxMath;
import flixel.util.FlxPoint;
import states.*;

class Soldier extends Enemy
{
	
	private var moved:Float = 0;
	
	public function new() 
	{
		super(20,"assets/images/enemies/soldier.png");
		currentGoal = null;
		destination = null;
		movementSpeed = 1;
	}
	
	override public function update():Void 
	{
		super.update();
		if (PlayState.player.health>0)
		{
			if (destination == null)
			{
				moved = 0;
				setNewDestination();
			}
			if (currentGoal != null && currentGoal.distanceTo(FlxPoint.get(x+8,y+8))<1)
			{
				x = currentGoal.x-8;
				y = currentGoal.y - 8;
				if(currentGoal.x == destination.x && currentGoal.y == destination.y || (PlayState.player != null && FlxMath.distanceToPoint(PlayState.player,destination)>64))
				{
					x = Math.round(x / 16) * 16;
					y = Math.round(y / 16) * 16;
					setNewDestination();
				}
				else if (destination!= null)
				{
					moveTowardsNewGoal();
				}
				
			}
			if (PlayState.player.moved)
			{
				moved += movementSpeed;
				moveInDirection();
			}
		}
	}		
	override public function killedPlayer() 
	{
		super.killedPlayer();
		kill();
	}
		private function setNewDestination()
		{
			destination = FlxPoint.get((PlayState.player.x / 16) * 16 + 8, (PlayState.player.y / 16) * 16 + 8);
			if (destination.x > 0 && destination.y > 0 && destination.x<320 && destination.y <320 && FlxMath.distanceBetween(this,PlayState.player)>16)
			{
				currentPath = PlayState.currentMap.findPath(FlxPoint.get(x + 8, y + 8), destination);
				currentPath.splice(0, 1);
				pathIndex = 0;
				if (currentPath.length > 0)
				{
					moveTowardsNewGoal();
				}
				else
				{
					destination = null;
				}
				
			}
			else
			{
				destination = null;
			}
		}
}