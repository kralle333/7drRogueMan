package gameobjects.items;
import states.*;


class KillPotion extends Item
{

	public function new() 
	{
		super("assets/images/items/killPotion.png");
		description = "Kill enemies on touch for a short period of time";
		cost = 10;
		isUseOnce = true;
	}
	
	override public function use() 
	{
		PlayState.player.setAllKilling(3);
	}
}