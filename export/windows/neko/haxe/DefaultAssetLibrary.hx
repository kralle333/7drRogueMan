package;


import haxe.Timer;
import haxe.Unserializer;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.MovieClip;
import openfl.events.Event;
import openfl.text.Font;
import openfl.media.Sound;
import openfl.net.URLRequest;
import openfl.utils.ByteArray;
import openfl.Assets;

#if (flash || js)
import openfl.display.Loader;
import openfl.events.Event;
import openfl.net.URLLoader;
#end

#if sys
import sys.FileSystem;
#end

#if ios
import openfl._v2.utils.SystemPath;
#end


@:access(openfl.media.Sound)
class DefaultAssetLibrary extends AssetLibrary {
	
	
	public var className (default, null) = new Map <String, Dynamic> ();
	public var path (default, null) = new Map <String, String> ();
	public var type (default, null) = new Map <String, AssetType> ();
	
	private var lastModified:Float;
	private var timer:Timer;
	
	
	public function new () {
		
		super ();
		
		#if flash
		
		path.set ("assets/images/enemies/ghost.png", "assets/images/enemies/ghost.png");
		type.set ("assets/images/enemies/ghost.png", AssetType.IMAGE);
		path.set ("assets/images/enemies/poison.png", "assets/images/enemies/poison.png");
		type.set ("assets/images/enemies/poison.png", AssetType.IMAGE);
		path.set ("assets/images/enemies/poisonSlime.png", "assets/images/enemies/poisonSlime.png");
		type.set ("assets/images/enemies/poisonSlime.png", AssetType.IMAGE);
		path.set ("assets/images/enemies/slime.png", "assets/images/enemies/slime.png");
		type.set ("assets/images/enemies/slime.png", AssetType.IMAGE);
		path.set ("assets/images/enemies/soldier.png", "assets/images/enemies/soldier.png");
		type.set ("assets/images/enemies/soldier.png", AssetType.IMAGE);
		path.set ("assets/images/enemies/thief.png", "assets/images/enemies/thief.png");
		type.set ("assets/images/enemies/thief.png", AssetType.IMAGE);
		path.set ("assets/images/items/heart.png", "assets/images/items/heart.png");
		type.set ("assets/images/items/heart.png", AssetType.IMAGE);
		path.set ("assets/images/items/killPotion.png", "assets/images/items/killPotion.png");
		type.set ("assets/images/items/killPotion.png", AssetType.IMAGE);
		path.set ("assets/images/items/movePotion.png", "assets/images/items/movePotion.png");
		type.set ("assets/images/items/movePotion.png", AssetType.IMAGE);
		path.set ("assets/images/items/shoes.png", "assets/images/items/shoes.png");
		type.set ("assets/images/items/shoes.png", AssetType.IMAGE);
		path.set ("assets/images/items/sword.png", "assets/images/items/sword.png");
		type.set ("assets/images/items/sword.png", AssetType.IMAGE);
		path.set ("assets/images/items/wand.png", "assets/images/items/wand.png");
		type.set ("assets/images/items/wand.png", AssetType.IMAGE);
		path.set ("assets/images/items/yendor.png", "assets/images/items/yendor.png");
		type.set ("assets/images/items/yendor.png", AssetType.IMAGE);
		path.set ("assets/images/map/amuletRoom.png", "assets/images/map/amuletRoom.png");
		type.set ("assets/images/map/amuletRoom.png", AssetType.IMAGE);
		path.set ("assets/images/map/blocksCastle.png", "assets/images/map/blocksCastle.png");
		type.set ("assets/images/map/blocksCastle.png", AssetType.IMAGE);
		path.set ("assets/images/map/blocksForest.png", "assets/images/map/blocksForest.png");
		type.set ("assets/images/map/blocksForest.png", AssetType.IMAGE);
		path.set ("assets/images/map/blocksLast.png", "assets/images/map/blocksLast.png");
		type.set ("assets/images/map/blocksLast.png", AssetType.IMAGE);
		path.set ("assets/images/map/coin.png", "assets/images/map/coin.png");
		type.set ("assets/images/map/coin.png", AssetType.IMAGE);
		path.set ("assets/images/map/sack.png", "assets/images/map/sack.png");
		type.set ("assets/images/map/sack.png", AssetType.IMAGE);
		path.set ("assets/images/map/stairway.png", "assets/images/map/stairway.png");
		type.set ("assets/images/map/stairway.png", AssetType.IMAGE);
		path.set ("assets/images/player.png", "assets/images/player.png");
		type.set ("assets/images/player.png", AssetType.IMAGE);
		path.set ("assets/images/selectedbutton.png", "assets/images/selectedbutton.png");
		type.set ("assets/images/selectedbutton.png", AssetType.IMAGE);
		path.set ("assets/images/shoes.ase", "assets/images/shoes.ase");
		type.set ("assets/images/shoes.ase", AssetType.BINARY);
		path.set ("assets/images/tombstone.png", "assets/images/tombstone.png");
		type.set ("assets/images/tombstone.png", AssetType.IMAGE);
		path.set ("assets/music/music-goes-here.txt", "assets/music/music-goes-here.txt");
		type.set ("assets/music/music-goes-here.txt", AssetType.TEXT);
		path.set ("assets/sounds/buy.wav", "assets/sounds/buy.wav");
		type.set ("assets/sounds/buy.wav", AssetType.SOUND);
		path.set ("assets/sounds/coin.wav", "assets/sounds/coin.wav");
		type.set ("assets/sounds/coin.wav", AssetType.SOUND);
		path.set ("assets/sounds/dead.wav", "assets/sounds/dead.wav");
		type.set ("assets/sounds/dead.wav", AssetType.SOUND);
		path.set ("assets/sounds/itemUse.wav", "assets/sounds/itemUse.wav");
		type.set ("assets/sounds/itemUse.wav", AssetType.SOUND);
		path.set ("assets/sounds/kill.wav", "assets/sounds/kill.wav");
		type.set ("assets/sounds/kill.wav", AssetType.SOUND);
		path.set ("assets/sounds/sack.wav", "assets/sounds/sack.wav");
		type.set ("assets/sounds/sack.wav", AssetType.SOUND);
		path.set ("assets/sounds/step1.aup", "assets/sounds/step1.aup");
		type.set ("assets/sounds/step1.aup", AssetType.TEXT);
		path.set ("assets/sounds/step1.wav", "assets/sounds/step1.wav");
		type.set ("assets/sounds/step1.wav", AssetType.SOUND);
		path.set ("assets/sounds/step1_data/e00/d00/e000000f.au", "assets/sounds/step1_data/e00/d00/e000000f.au");
		type.set ("assets/sounds/step1_data/e00/d00/e000000f.au", AssetType.BINARY);
		path.set ("assets/sounds/step1_data/e00/d00/e000005e.au", "assets/sounds/step1_data/e00/d00/e000005e.au");
		type.set ("assets/sounds/step1_data/e00/d00/e000005e.au", AssetType.BINARY);
		path.set ("assets/sounds/step1_data/e00/d00/e0000094.au", "assets/sounds/step1_data/e00/d00/e0000094.au");
		type.set ("assets/sounds/step1_data/e00/d00/e0000094.au", AssetType.BINARY);
		path.set ("assets/sounds/step1_data/e00/d00/e00000c5.au", "assets/sounds/step1_data/e00/d00/e00000c5.au");
		type.set ("assets/sounds/step1_data/e00/d00/e00000c5.au", AssetType.BINARY);
		path.set ("assets/sounds/step1_data/e00/d00/e0000261.au", "assets/sounds/step1_data/e00/d00/e0000261.au");
		type.set ("assets/sounds/step1_data/e00/d00/e0000261.au", AssetType.BINARY);
		path.set ("assets/sounds/step1_data/e00/d00/e0000652.au", "assets/sounds/step1_data/e00/d00/e0000652.au");
		type.set ("assets/sounds/step1_data/e00/d00/e0000652.au", AssetType.BINARY);
		path.set ("assets/sounds/step1_data/e00/d00/e000087c.au", "assets/sounds/step1_data/e00/d00/e000087c.au");
		type.set ("assets/sounds/step1_data/e00/d00/e000087c.au", AssetType.BINARY);
		path.set ("assets/sounds/step1_data/e00/d00/e0000a63.au", "assets/sounds/step1_data/e00/d00/e0000a63.au");
		type.set ("assets/sounds/step1_data/e00/d00/e0000a63.au", AssetType.BINARY);
		path.set ("assets/sounds/step1_data/e00/d00/e0000b60.au", "assets/sounds/step1_data/e00/d00/e0000b60.au");
		type.set ("assets/sounds/step1_data/e00/d00/e0000b60.au", AssetType.BINARY);
		path.set ("assets/sounds/step1_data/e00/d00/e0000b9d.au", "assets/sounds/step1_data/e00/d00/e0000b9d.au");
		type.set ("assets/sounds/step1_data/e00/d00/e0000b9d.au", AssetType.BINARY);
		path.set ("assets/sounds/step1_data/e00/d00/e0000c3f.au", "assets/sounds/step1_data/e00/d00/e0000c3f.au");
		type.set ("assets/sounds/step1_data/e00/d00/e0000c3f.au", AssetType.BINARY);
		path.set ("assets/sounds/step1_data/e00/d00/e0000d1a.au", "assets/sounds/step1_data/e00/d00/e0000d1a.au");
		type.set ("assets/sounds/step1_data/e00/d00/e0000d1a.au", AssetType.BINARY);
		path.set ("assets/sounds/step1_data/e00/d00/e0000d51.au", "assets/sounds/step1_data/e00/d00/e0000d51.au");
		type.set ("assets/sounds/step1_data/e00/d00/e0000d51.au", AssetType.BINARY);
		path.set ("assets/sounds/step2.wav", "assets/sounds/step2.wav");
		type.set ("assets/sounds/step2.wav", AssetType.SOUND);
		path.set ("assets/sounds/step3.wav", "assets/sounds/step3.wav");
		type.set ("assets/sounds/step3.wav", AssetType.SOUND);
		path.set ("assets/sounds/step4.wav", "assets/sounds/step4.wav");
		type.set ("assets/sounds/step4.wav", AssetType.SOUND);
		path.set ("assets/sounds/steps.aup", "assets/sounds/steps.aup");
		type.set ("assets/sounds/steps.aup", AssetType.TEXT);
		path.set ("assets/sounds/steps.wav", "assets/sounds/steps.wav");
		type.set ("assets/sounds/steps.wav", AssetType.SOUND);
		path.set ("assets/sounds/steps_data/e00/d00/e0000011.au", "assets/sounds/steps_data/e00/d00/e0000011.au");
		type.set ("assets/sounds/steps_data/e00/d00/e0000011.au", AssetType.BINARY);
		path.set ("assets/sounds/yendor.wav", "assets/sounds/yendor.wav");
		type.set ("assets/sounds/yendor.wav", AssetType.SOUND);
		path.set ("assets/sounds/beep.ogg", "assets/sounds/beep.ogg");
		type.set ("assets/sounds/beep.ogg", AssetType.SOUND);
		path.set ("assets/sounds/flixel.ogg", "assets/sounds/flixel.ogg");
		type.set ("assets/sounds/flixel.ogg", AssetType.SOUND);
		
		
		#elseif html5
		
		var id;
		id = "assets/images/enemies/ghost.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/enemies/poison.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/enemies/poisonSlime.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/enemies/slime.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/enemies/soldier.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/enemies/thief.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/items/heart.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/items/killPotion.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/items/movePotion.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/items/shoes.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/items/sword.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/items/wand.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/items/yendor.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/map/amuletRoom.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/map/blocksCastle.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/map/blocksForest.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/map/blocksLast.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/map/coin.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/map/sack.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/map/stairway.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/player.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/selectedbutton.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/images/shoes.ase";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/images/tombstone.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/music/music-goes-here.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/sounds/buy.wav";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/coin.wav";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/dead.wav";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/itemUse.wav";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/kill.wav";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/sack.wav";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/step1.aup";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/sounds/step1.wav";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/step1_data/e00/d00/e000000f.au";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/sounds/step1_data/e00/d00/e000005e.au";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/sounds/step1_data/e00/d00/e0000094.au";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/sounds/step1_data/e00/d00/e00000c5.au";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/sounds/step1_data/e00/d00/e0000261.au";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/sounds/step1_data/e00/d00/e0000652.au";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/sounds/step1_data/e00/d00/e000087c.au";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/sounds/step1_data/e00/d00/e0000a63.au";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/sounds/step1_data/e00/d00/e0000b60.au";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/sounds/step1_data/e00/d00/e0000b9d.au";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/sounds/step1_data/e00/d00/e0000c3f.au";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/sounds/step1_data/e00/d00/e0000d1a.au";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/sounds/step1_data/e00/d00/e0000d51.au";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/sounds/step2.wav";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/step3.wav";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/step4.wav";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/steps.aup";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/sounds/steps.wav";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/steps_data/e00/d00/e0000011.au";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/sounds/yendor.wav";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/beep.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		id = "assets/sounds/flixel.ogg";
		path.set (id, id);
		type.set (id, AssetType.SOUND);
		
		
		#else
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		#if (windows || mac || linux)
		
		var useManifest = false;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		
		
		if (useManifest) {
			
			loadManifest ();
			
			if (Sys.args ().indexOf ("-livereload") > -1) {
				
				var path = FileSystem.fullPath ("manifest");
				lastModified = FileSystem.stat (path).mtime.getTime ();
				
				timer = new Timer (2000);
				timer.run = function () {
					
					var modified = FileSystem.stat (path).mtime.getTime ();
					
					if (modified > lastModified) {
						
						lastModified = modified;
						loadManifest ();
						
						if (eventCallback != null) {
							
							eventCallback (this, "change");
							
						}
						
					}
					
				}
				
			}
			
		}
		
		#else
		
		loadManifest ();
		
		#end
		#end
		
	}
	
	
	public override function exists (id:String, type:AssetType):Bool {
		
		var assetType = this.type.get (id);
		
		#if pixi
		
		if (assetType == IMAGE) {
			
			return true;
			
		} else {
			
			return false;
			
		}
		
		#end
		
		if (assetType != null) {
			
			if (assetType == type || ((type == SOUND || type == MUSIC) && (assetType == MUSIC || assetType == SOUND))) {
				
				return true;
				
			}
			
			#if flash
			
			if ((assetType == BINARY || assetType == TEXT) && type == BINARY) {
				
				return true;
				
			} else if (path.exists (id)) {
				
				return true;
				
			}
			
			#else
			
			if (type == BINARY || type == null || (assetType == BINARY && type == TEXT)) {
				
				return true;
				
			}
			
			#end
			
		}
		
		return false;
		
	}
	
	
	public override function getBitmapData (id:String):BitmapData {
		
		#if pixi
		
		return BitmapData.fromImage (path.get (id));
		
		#elseif (flash)
		
		return cast (Type.createInstance (className.get (id), []), BitmapData);
		
		#elseif openfl_html5
		
		return BitmapData.fromImage (ApplicationMain.images.get (path.get (id)));
		
		#elseif js
		
		return cast (ApplicationMain.loaders.get (path.get (id)).contentLoaderInfo.content, Bitmap).bitmapData;
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), BitmapData);
		else return BitmapData.load (path.get (id));
		
		#end
		
	}
	
	
	public override function getBytes (id:String):ByteArray {
		
		#if (flash)
		
		return cast (Type.createInstance (className.get (id), []), ByteArray);

		#elseif (js || openfl_html5 || pixi)
		
		var bytes:ByteArray = null;
		var data = ApplicationMain.urlLoaders.get (path.get (id)).data;
		
		if (Std.is (data, String)) {
			
			bytes = new ByteArray ();
			bytes.writeUTFBytes (data);
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}

		if (bytes != null) {
			
			bytes.position = 0;
			return bytes;
			
		} else {
			
			return null;
		}
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), ByteArray);
		else return ByteArray.readFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getFont (id:String):Font {
		
		#if pixi
		
		return null;
		
		#elseif (flash || js)
		
		return cast (Type.createInstance (className.get (id), []), Font);
		
		#else
		
		if (className.exists(id)) {
			var fontClass = className.get(id);
			Font.registerFont(fontClass);
			return cast (Type.createInstance (fontClass, []), Font);
		} else return new Font (path.get (id));
		
		#end
		
	}
	
	
	public override function getMusic (id:String):Sound {
		
		#if pixi
		
		return null;
		
		#elseif (flash)
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif openfl_html5
		
		var sound = new Sound ();
		sound.__buffer = true;
		sound.load (new URLRequest (path.get (id)));
		return sound; 
		
		#elseif js
		
		return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		else return new Sound (new URLRequest (path.get (id)), null, true);
		
		#end
		
	}
	
	
	public override function getPath (id:String):String {
		
		#if ios
		
		return SystemPath.applicationDirectory + "/assets/" + path.get (id);
		
		#else
		
		return path.get (id);
		
		#end
		
	}
	
	
	public override function getSound (id:String):Sound {
		
		#if pixi
		
		return null;
		
		#elseif (flash)
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif js
		
		return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		else return new Sound (new URLRequest (path.get (id)), null, type.get (id) == MUSIC);
		
		#end
		
	}
	
	
	public override function getText (id:String):String {
		
		#if js
		
		var bytes:ByteArray = null;
		var data = ApplicationMain.urlLoaders.get (path.get (id)).data;
		
		if (Std.is (data, String)) {
			
			return cast data;
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}
		
		if (bytes != null) {
			
			bytes.position = 0;
			return bytes.readUTFBytes (bytes.length);
			
		} else {
			
			return null;
		}
		
		#else
		
		var bytes = getBytes (id);
		
		if (bytes == null) {
			
			return null;
			
		} else {
			
			return bytes.readUTFBytes (bytes.length);
			
		}
		
		#end
		
	}
	
	
	public override function isLocal (id:String, type:AssetType):Bool {
		
		#if flash
		
		if (type != AssetType.MUSIC && type != AssetType.SOUND) {
			
			return className.exists (id);
			
		}
		
		#end
		
		return true;
		
	}
	
	
	public override function list (type:AssetType):Array<String> {
		
		var items = [];
		
		for (id in this.type.keys ()) {
			
			if (type == null || exists (id, type)) {
				
				items.push (id);
				
			}
			
		}
		
		return items;
		
	}
	
	
	public override function loadBitmapData (id:String, handler:BitmapData -> Void):Void {
		
		#if pixi
		
		handler (getBitmapData (id));
		
		#elseif (flash || js)
		
		if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event:Event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getBitmapData (id));
			
		}
		
		#else
		
		handler (getBitmapData (id));
		
		#end
		
	}
	
	
	public override function loadBytes (id:String, handler:ByteArray -> Void):Void {
		
		#if pixi
		
		handler (getBytes (id));
		
		#elseif (flash || js)
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bytes = new ByteArray ();
				bytes.writeUTFBytes (event.currentTarget.data);
				bytes.position = 0;
				
				handler (bytes);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getBytes (id));
			
		}
		
		#else
		
		handler (getBytes (id));
		
		#end
		
	}
	
	
	public override function loadFont (id:String, handler:Font -> Void):Void {
		
		#if (flash || js)
		
		/*if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {*/
			
			handler (getFont (id));
			
		//}
		
		#else
		
		handler (getFont (id));
		
		#end
		
	}
	
	
	#if (!flash && !html5)
	private function loadManifest ():Void {
		
		try {
			
			#if blackberry
			var bytes = ByteArray.readFile ("app/native/manifest");
			#elseif tizen
			var bytes = ByteArray.readFile ("../res/manifest");
			#elseif emscripten
			var bytes = ByteArray.readFile ("assets/manifest");
			#else
			var bytes = ByteArray.readFile ("manifest");
			#end
			
			if (bytes != null) {
				
				bytes.position = 0;
				
				if (bytes.length > 0) {
					
					var data = bytes.readUTFBytes (bytes.length);
					
					if (data != null && data.length > 0) {
						
						var manifest:Array<Dynamic> = Unserializer.run (data);
						
						for (asset in manifest) {
							
							if (!className.exists (asset.id)) {
								
								path.set (asset.id, asset.path);
								type.set (asset.id, Type.createEnum (AssetType, asset.type));
								
							}
							
						}
						
					}
					
				}
				
			} else {
				
				trace ("Warning: Could not load asset manifest (bytes was null)");
				
			}
		
		} catch (e:Dynamic) {
			
			trace ('Warning: Could not load asset manifest (${e})');
			
		}
		
	}
	#end
	
	
	public override function loadMusic (id:String, handler:Sound -> Void):Void {
		
		#if (flash || js)
		
		/*if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {*/
			
			handler (getMusic (id));
			
		//}
		
		#else
		
		handler (getMusic (id));
		
		#end
		
	}
	
	
	public override function loadSound (id:String, handler:Sound -> Void):Void {
		
		#if (flash || js)
		
		/*if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {*/
			
			handler (getSound (id));
			
		//}
		
		#else
		
		handler (getSound (id));
		
		#end
		
	}
	
	
	public override function loadText (id:String, handler:String -> Void):Void {
		
		#if js
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				handler (event.currentTarget.data);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getText (id));
			
		}
		
		#else
		
		var callback = function (bytes:ByteArray):Void {
			
			if (bytes == null) {
				
				handler (null);
				
			} else {
				
				handler (bytes.readUTFBytes (bytes.length));
				
			}
			
		}
		
		loadBytes (id, callback);
		
		#end
		
	}
	
	
}


#if pixi
#elseif flash


























































#elseif html5


























































#else

#if (windows || mac || linux)







#else




#end

#end
