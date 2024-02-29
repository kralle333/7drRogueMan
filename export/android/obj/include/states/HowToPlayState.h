#ifndef INCLUDED_states_HowToPlayState
#define INCLUDED_states_HowToPlayState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxState.h>
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemap)
HX_DECLARE_CLASS1(gameobjects,Player)
HX_DECLARE_CLASS1(states,HowToPlayState)
namespace states{


class HXCPP_CLASS_ATTRIBUTES  HowToPlayState_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef HowToPlayState_obj OBJ_;
		HowToPlayState_obj();
		Void __construct(Dynamic MaxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< HowToPlayState_obj > __new(Dynamic MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HowToPlayState_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("HowToPlayState"); }

		::flixel::text::FlxText continueText;
		Array< ::Dynamic > pages;
		::flixel::text::FlxText correct;
		::flixel::FlxSprite stairway;
		::gameobjects::Player player1;
		::flixel::tile::FlxTilemap exampleTileMap;
		Array< int > exampleTiles;
		int pageIndex;
		virtual Void create( );

		virtual Void createPage1( );
		Dynamic createPage1_dyn();

		virtual Void createPage2( );
		Dynamic createPage2_dyn();

		virtual Void update( );

};

} // end namespace states

#endif /* INCLUDED_states_HowToPlayState */ 
