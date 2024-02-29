package gameobjects.items;
import states.*;


class Wand extends Item
{

	public function new() 
	{
		super("assets/images/items/wand.png");
		name = "Wand";
		description = "Kills all enemies on screen on use";
		cost = 20;
		isUseOnce = true;
	}
	
	override public function use() 
	{
		PlayState.player.justUsedStaff = true;
	}
	
}