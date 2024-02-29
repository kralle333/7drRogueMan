#ifndef INCLUDED_Shop
#define INCLUDED_Shop

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/tile/FlxTilemap.h>
HX_DECLARE_CLASS0(Shop)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemap)
HX_DECLARE_CLASS2(gameobjects,items,Item)


class HXCPP_CLASS_ATTRIBUTES  Shop_obj : public ::flixel::tile::FlxTilemap_obj{
	public:
		typedef ::flixel::tile::FlxTilemap_obj super;
		typedef Shop_obj OBJ_;
		Shop_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Shop_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Shop_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Shop"); }

		Array< int > layout;
		Array< ::Dynamic > items;
		::gameobjects::items::Item selectedItem;
		::flixel::text::FlxText itemDescText;
		::flixel::text::FlxText noSpace;
		virtual Void restock( int depth);
		Dynamic restock_dyn();

		virtual ::gameobjects::items::Item getRandomItem( int depth);
		Dynamic getRandomItem_dyn();

		virtual Void hide( );
		Dynamic hide_dyn();

		bool showItemDesc;
		virtual Void update( );

};


#endif /* INCLUDED_Shop */ 
