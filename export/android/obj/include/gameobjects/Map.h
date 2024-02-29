#ifndef INCLUDED_gameobjects_Map
#define INCLUDED_gameobjects_Map

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/tile/FlxTilemap.h>
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemap)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)
HX_DECLARE_CLASS1(gameobjects,Map)
namespace gameobjects{


class HXCPP_CLASS_ATTRIBUTES  Map_obj : public ::flixel::tile::FlxTilemap_obj{
	public:
		typedef ::flixel::tile::FlxTilemap_obj super;
		typedef Map_obj OBJ_;
		Map_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Map_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Map_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Map"); }

		::flixel::group::FlxGroup coins;
		::flixel::group::FlxGroup sacks;
		::flixel::FlxSprite stairway;
		int depth;
		bool hasSacks;
		virtual Void populate( int depth);
		Dynamic populate_dyn();

		virtual Void hide( );
		Dynamic hide_dyn();

		virtual Void killCoinOrSack( Float x,Float y);
		Dynamic killCoinOrSack_dyn();

		virtual Void killSack( Float x,Float y);
		Dynamic killSack_dyn();

		virtual Void addCoinsAndSacks( );
		Dynamic addCoinsAndSacks_dyn();

		virtual ::flixel::FlxSprite getRandomCoin( );
		Dynamic getRandomCoin_dyn();

		virtual ::flixel::util::FlxPoint getRandomEmptyTileNear( ::flixel::util::FlxPoint point);
		Dynamic getRandomEmptyTileNear_dyn();

		virtual ::flixel::util::FlxPoint getTileNearSack( );
		Dynamic getTileNearSack_dyn();

		virtual ::flixel::util::FlxPoint getRandomEmptyTile( );
		Dynamic getRandomEmptyTile_dyn();

		virtual bool hasCoinOrSack( int x,int y);
		Dynamic hasCoinOrSack_dyn();

		virtual bool hasItem( int x,int y);
		Dynamic hasItem_dyn();

};

} // end namespace gameobjects

#endif /* INCLUDED_gameobjects_Map */ 
