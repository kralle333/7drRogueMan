package gameobjects.items;
import states.*;


class MovePotion extends Item
{

	public function new() 
	{
		super("assets/images/items/movePotion.png");
		description = "Become super fast for a short period of time";
		cost = 10;
		isUseOnce = true;
	}
	
	override public function use() 
	{
		PlayState.player.setMovementSpeed(5, 3.2);
	}
}