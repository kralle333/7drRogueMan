#ifndef INCLUDED_AmuletRoom
#define INCLUDED_AmuletRoom

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/tile/FlxTilemap.h>
HX_DECLARE_CLASS0(AmuletRoom)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemap)
HX_DECLARE_CLASS2(gameobjects,items,Item)


class HXCPP_CLASS_ATTRIBUTES  AmuletRoom_obj : public ::flixel::tile::FlxTilemap_obj{
	public:
		typedef ::flixel::tile::FlxTilemap_obj super;
		typedef AmuletRoom_obj OBJ_;
		AmuletRoom_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< AmuletRoom_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~AmuletRoom_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("AmuletRoom"); }

		::gameobjects::items::Item yendor;
		Array< int > amuletRoom;
		::flixel::text::FlxText yendorText;
		bool playerHasYendor;
		bool playerLeft;
		::flixel::text::FlxText highScoreText;
		::String initials;
		bool pressInitials;
		virtual Void show( );
		Dynamic show_dyn();

		virtual Void update( );

};


#endif /* INCLUDED_AmuletRoom */ 
