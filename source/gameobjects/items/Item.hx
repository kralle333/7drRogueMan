package gameobjects.items;
import flixel.FlxSprite;
import openfl.display.Sprite;


class Item extends FlxSprite
{
	public var name:String = "";
	public var description:String = "";
	public var cost:Int;
	public var isUseOnce:Bool = false;
	public var depthAdded:Int = 0;
	public function new(path:String) 
	{
		super(0, 0, path);
	}
	
	public function use()
	{
		trace("OVERRIDE THIS");
	}
	
}