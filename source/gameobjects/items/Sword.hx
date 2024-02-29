package gameobjects.items;
import states.*;


class Sword extends Item
{
	public var uses:Int = 3;
	public function new() 
	{
		super("assets/images/items/sword.png");
		name = "Sword";
		description = "Can kill 3 enemies while having the weapon in the inventory";
		cost = 20;
	}
	
}