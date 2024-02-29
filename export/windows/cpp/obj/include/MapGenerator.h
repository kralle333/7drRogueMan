#ifndef INCLUDED_MapGenerator
#define INCLUDED_MapGenerator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(MapGenerator)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)


class HXCPP_CLASS_ATTRIBUTES  MapGenerator_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef MapGenerator_obj OBJ_;
		MapGenerator_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< MapGenerator_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MapGenerator_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("MapGenerator"); }

		static Array< ::Dynamic > threeHor;
		static Array< ::Dynamic > threeVer;
		static Array< ::Dynamic > LSouthWest;
		static Array< ::Dynamic > LSouthEast;
		static Array< ::Dynamic > LNorthWest;
		static Array< ::Dynamic > LNorthEast;
		static Array< ::Dynamic > fourBlock;
		static Array< ::Dynamic > point;
		static Array< ::Dynamic > blockTypes;
		static int gridWidth;
		static int gridHeight;
		static Array< ::Dynamic > grid;
		static int blockName;
		static Void init( );
		static Dynamic init_dyn();

		static ::String generateMap( int depth);
		static Dynamic generateMap_dyn();

		static ::flixel::util::FlxPoint getRandomEmptyPos( );
		static Dynamic getRandomEmptyPos_dyn();

		static bool isGridFull( );
		static Dynamic isGridFull_dyn();

		static bool printGrid( );
		static Dynamic printGrid_dyn();

		static bool placeIfFit( ::flixel::util::FlxPoint position,Array< ::Dynamic > type);
		static Dynamic placeIfFit_dyn();

};


#endif /* INCLUDED_MapGenerator */ 
