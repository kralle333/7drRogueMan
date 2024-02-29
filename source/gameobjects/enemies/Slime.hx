package gameobjects.enemies;
import flixel.util.FlxRandom;
import gameobjects.enemies.Enemy;
import gameobjects.enemies.Enemy.MovementDirection;
import states.*;


class Slime extends Enemy
{

	private var haveMoved:Int = 0;
	public function new(x:Int,y:Int) 
	{
		super(10,"assets/images/enemies/slime.png");
		movementSpeed = 0.8;
		currentDirection = getRandomDirection();
		this.x =x;
		this.y = y;
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
			}
		}
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