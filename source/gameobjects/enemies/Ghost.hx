package gameobjects.enemies;
import flixel.FlxG;
import flixel.util.FlxAngle;
import flixel.util.FlxPoint;
import flixel.util.FlxRandom;
import flixel.util.FlxVelocity;
import gameobjects.enemies.Enemy;
import states.*;

class Ghost extends Enemy
{

	var standStillTimer:Float = 0;
	var moveX:Float;
	var moveY:Float;
	
	public function new() 
	{
		super(50, "assets/images/enemies/ghost.png");
		movementSpeed = 2.5;
		standStillTimer = FlxRandom.intRanged(1, 3);
		usesCollision = false;
	}
	
	
	
	override public function update():Void 
	{
		super.update();
		if (PlayState.player.moved)
		{
			if (standStillTimer > 0)
			{
				standStillTimer -= FlxG.elapsed;
			}
			else
			{
				if (destination == null)
				{
					canKill = false;
					alpha = 0.3;
					destination = PlayState.currentMap.getRandomEmptyTileNear(FlxPoint.get(PlayState.player.x/16, PlayState.player.y/16));			
					destination.x = destination.x * 16 + 8;
					destination.y = destination.y * 16 + 8;
					var a:Float = FlxAngle.angleBetweenPoint(this, destination);

					moveX = Math.cos(a) * movementSpeed;
					moveY = Math.sin(a) * movementSpeed;
					
				}
				x += moveX;
				y += moveY;
				
				if (destination.distanceTo(FlxPoint.get(x+8, y+8)) <=8)
				{
					canKill = true;
					x = destination.x-8;
					y = destination.y-8;
					alpha = 1;
					destination = null;
					standStillTimer = FlxRandom.intRanged(1,3);
				}
			}
		}
	}
}