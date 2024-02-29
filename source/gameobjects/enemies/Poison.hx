package gameobjects.enemies;


class Poison extends Enemy
{

	private var isReleased:Bool = false;
	
	public function new() 
	{
		super(10,"assets/images/enemies/poison.png");
		kill();
	}
	
	override public function update():Void 
	{
		super.update();
		
	}
	public function release(x:Float, y:Float)
	{
		this.x = x;
		this.y = y;
		isReleased = true;
		revive();
	}
		
}