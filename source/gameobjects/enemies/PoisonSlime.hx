package gameobjects.enemies;
import flixel.util.FlxPoint;
import flixel.util.FlxRandom;
import gameobjects.enemies.Enemy;
import states.*;

class PoisonSlime extends Enemy
{

	public var poisons:Array<Poison>;
	private var poisonIndex = 0;
	public var haveMoved:Int = 0;
	
	public function new() 
	{
		super(30, "assets/images/enemies/poisonSlime.png");
		poisons = [new Poison(), new Poison(), new Poison()];
		movementSpeed = 1;
	}
	
	override public function update():Void 
	{
		super.update();
		if (PlayState.player.moved)
		{
			moveInDirection();
			haveMoved += movementSpeed;
			if (haveMoved >= 64)
			{
				changeDirection();
				haveMoved = 0;
				if (poisonIndex < poisons.length - 1 && 
					FlxPoint.get(PlayState.stairway.x, PlayState.stairway.y).distanceTo(FlxPoint.get(x, y)) > 32)
				{
					poisons[poisonIndex].release((x/16)*16,(y/16)*16);
					poisonIndex++;
				}
			}
		}
	}
	override public function kill():Void 
	{
		super.kill();
		
		for (i in 0...3)
		{
			if (poisons[i] != null && poisons[i].alive)
			{
				poisons[i].kill();
			}
		}
		poisonIndex = 0;
	}

	
	public function changeDirection()
	{
		if (currentDirection == MovementDirection.Up || 
			currentDirection == MovementDirection.Down)
		{
			if (FlxRandom.chanceRoll(50) )
			{
				currentDirection = MovementDirection.Left;
			}
			else
			{
				currentDirection = MovementDirection.Right;
			}
		}
		else if (currentDirection == MovementDirection.Left ||
			currentDirection == MovementDirection.Right)
		{
			if (FlxRandom.chanceRoll(50) )
			{
				currentDirection = MovementDirection.Up;
			}
			else
			{
				currentDirection = MovementDirection.Down;
			}
		}
	}
	override public function onWallCollide() 
	{
		super.onWallCollide();
		changeDirection();
		haveMoved = 0;
	}
	
}