package gameobjects.items;
import states.*;


class Heart extends Item
{
	
	public function new() 
	{
		super("assets/images/items/heart.png");
		name = "Heart";
		description = "Get an extra life";
		cost = 10;
	}
	
	
	override public function use() 
	{
		super.use();
		PlayState.player.addLife();
	}
	
}