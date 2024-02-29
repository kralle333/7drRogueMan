package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/images/enemies/ghost.png", "assets/images/enemies/ghost.png");
			type.set ("assets/images/enemies/ghost.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/enemies/poison.png", "assets/images/enemies/poison.png");
			type.set ("assets/images/enemies/poison.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/enemies/poisonSlime.png", "assets/images/enemies/poisonSlime.png");
			type.set ("assets/images/enemies/poisonSlime.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/enemies/slime.png", "assets/images/enemies/slime.png");
			type.set ("assets/images/enemies/slime.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/enemies/soldier.png", "assets/images/enemies/soldier.png");
			type.set ("assets/images/enemies/soldier.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/enemies/thief.png", "assets/images/enemies/thief.png");
			type.set ("assets/images/enemies/thief.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/items/heart.png", "assets/images/items/heart.png");
			type.set ("assets/images/items/heart.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/items/killPotion.png", "assets/images/items/killPotion.png");
			type.set ("assets/images/items/killPotion.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/items/movePotion.png", "assets/images/items/movePotion.png");
			type.set ("assets/images/items/movePotion.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/items/shoes.png", "assets/images/items/shoes.png");
			type.set ("assets/images/items/shoes.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/items/sword.png", "assets/images/items/sword.png");
			type.set ("assets/images/items/sword.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/items/wand.png", "assets/images/items/wand.png");
			type.set ("assets/images/items/wand.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/items/yendor.png", "assets/images/items/yendor.png");
			type.set ("assets/images/items/yendor.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/map/amuletRoom.png", "assets/images/map/amuletRoom.png");
			type.set ("assets/images/map/amuletRoom.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/map/blocksCastle.png", "assets/images/map/blocksCastle.png");
			type.set ("assets/images/map/blocksCastle.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/map/blocksForest.png", "assets/images/map/blocksForest.png");
			type.set ("assets/images/map/blocksForest.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/map/blocksLast.png", "assets/images/map/blocksLast.png");
			type.set ("assets/images/map/blocksLast.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/map/coin.png", "assets/images/map/coin.png");
			type.set ("assets/images/map/coin.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/map/sack.png", "assets/images/map/sack.png");
			type.set ("assets/images/map/sack.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/map/stairway.png", "assets/images/map/stairway.png");
			type.set ("assets/images/map/stairway.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/player.png", "assets/images/player.png");
			type.set ("assets/images/player.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/selectedbutton.png", "assets/images/selectedbutton.png");
			type.set ("assets/images/selectedbutton.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/images/shoes.ase", "assets/images/shoes.ase");
			type.set ("assets/images/shoes.ase", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/images/tombstone.png", "assets/images/tombstone.png");
			type.set ("assets/images/tombstone.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/music/music-goes-here.txt", "assets/music/music-goes-here.txt");
			type.set ("assets/music/music-goes-here.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/sounds/buy.wav", "assets/sounds/buy.wav");
			type.set ("assets/sounds/buy.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/coin.wav", "assets/sounds/coin.wav");
			type.set ("assets/sounds/coin.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/dead.wav", "assets/sounds/dead.wav");
			type.set ("assets/sounds/dead.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/itemUse.wav", "assets/sounds/itemUse.wav");
			type.set ("assets/sounds/itemUse.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/kill.wav", "assets/sounds/kill.wav");
			type.set ("assets/sounds/kill.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/sack.wav", "assets/sounds/sack.wav");
			type.set ("assets/sounds/sack.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/step1.aup", "assets/sounds/step1.aup");
			type.set ("assets/sounds/step1.aup", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/sounds/step1.wav", "assets/sounds/step1.wav");
			type.set ("assets/sounds/step1.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/step1_data/e00/d00/e000000f.au", "assets/sounds/step1_data/e00/d00/e000000f.au");
			type.set ("assets/sounds/step1_data/e00/d00/e000000f.au", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/sounds/step1_data/e00/d00/e000005e.au", "assets/sounds/step1_data/e00/d00/e000005e.au");
			type.set ("assets/sounds/step1_data/e00/d00/e000005e.au", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/sounds/step1_data/e00/d00/e0000094.au", "assets/sounds/step1_data/e00/d00/e0000094.au");
			type.set ("assets/sounds/step1_data/e00/d00/e0000094.au", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/sounds/step1_data/e00/d00/e00000c5.au", "assets/sounds/step1_data/e00/d00/e00000c5.au");
			type.set ("assets/sounds/step1_data/e00/d00/e00000c5.au", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/sounds/step1_data/e00/d00/e0000261.au", "assets/sounds/step1_data/e00/d00/e0000261.au");
			type.set ("assets/sounds/step1_data/e00/d00/e0000261.au", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/sounds/step1_data/e00/d00/e0000652.au", "assets/sounds/step1_data/e00/d00/e0000652.au");
			type.set ("assets/sounds/step1_data/e00/d00/e0000652.au", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/sounds/step1_data/e00/d00/e000087c.au", "assets/sounds/step1_data/e00/d00/e000087c.au");
			type.set ("assets/sounds/step1_data/e00/d00/e000087c.au", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/sounds/step1_data/e00/d00/e0000a63.au", "assets/sounds/step1_data/e00/d00/e0000a63.au");
			type.set ("assets/sounds/step1_data/e00/d00/e0000a63.au", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/sounds/step1_data/e00/d00/e0000b60.au", "assets/sounds/step1_data/e00/d00/e0000b60.au");
			type.set ("assets/sounds/step1_data/e00/d00/e0000b60.au", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/sounds/step1_data/e00/d00/e0000b9d.au", "assets/sounds/step1_data/e00/d00/e0000b9d.au");
			type.set ("assets/sounds/step1_data/e00/d00/e0000b9d.au", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/sounds/step1_data/e00/d00/e0000c3f.au", "assets/sounds/step1_data/e00/d00/e0000c3f.au");
			type.set ("assets/sounds/step1_data/e00/d00/e0000c3f.au", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/sounds/step1_data/e00/d00/e0000d1a.au", "assets/sounds/step1_data/e00/d00/e0000d1a.au");
			type.set ("assets/sounds/step1_data/e00/d00/e0000d1a.au", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/sounds/step1_data/e00/d00/e0000d51.au", "assets/sounds/step1_data/e00/d00/e0000d51.au");
			type.set ("assets/sounds/step1_data/e00/d00/e0000d51.au", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/sounds/step2.wav", "assets/sounds/step2.wav");
			type.set ("assets/sounds/step2.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/step3.wav", "assets/sounds/step3.wav");
			type.set ("assets/sounds/step3.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/step4.wav", "assets/sounds/step4.wav");
			type.set ("assets/sounds/step4.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/steps.aup", "assets/sounds/steps.aup");
			type.set ("assets/sounds/steps.aup", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/sounds/steps.wav", "assets/sounds/steps.wav");
			type.set ("assets/sounds/steps.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/steps_data/e00/d00/e0000011.au", "assets/sounds/steps_data/e00/d00/e0000011.au");
			type.set ("assets/sounds/steps_data/e00/d00/e0000011.au", Reflect.field (AssetType, "binary".toUpperCase ()));
			path.set ("assets/sounds/yendor.wav", "assets/sounds/yendor.wav");
			type.set ("assets/sounds/yendor.wav", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/beep.ogg", "assets/sounds/beep.ogg");
			type.set ("assets/sounds/beep.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			path.set ("assets/sounds/flixel.ogg", "assets/sounds/flixel.ogg");
			type.set ("assets/sounds/flixel.ogg", Reflect.field (AssetType, "sound".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
