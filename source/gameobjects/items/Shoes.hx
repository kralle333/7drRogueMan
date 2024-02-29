package gameobjects.items;
import states.*;


class Shoes extends Item
{

	public function new() 
	{
		super("assets/images/items/shoes.png");
		name = "Shoes";
		description = "A bit faster while having the item in the inventory";
		cost = 25;
	}
	override public function use() 
	{
		
	}
	
}