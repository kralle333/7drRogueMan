#ifndef INCLUDED_states_MenuState
#define INCLUDED_states_MenuState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxState.h>
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,effects,FlxSpriteFilter)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,ui,FlxButton)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton)
HX_DECLARE_CLASS3(openfl,_v2,filters,BitmapFilter)
HX_DECLARE_CLASS3(openfl,_v2,filters,GlowFilter)
HX_DECLARE_CLASS1(states,MenuState)
namespace states{


class HXCPP_CLASS_ATTRIBUTES  MenuState_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef MenuState_obj OBJ_;
		MenuState_obj();
		Void __construct(Dynamic MaxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< MenuState_obj > __new(Dynamic MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MenuState_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("MenuState"); }

		::flixel::ui::FlxButton playButton;
		::flixel::ui::FlxButton exitButton;
		Array< ::Dynamic > buttons;
		::flixel::FlxSprite selectedButton;
		int selectedButtonIndex;
		bool moveRight;
		bool isPlayerChased;
		::flixel::FlxSprite player;
		Array< ::Dynamic > slimes;
		Float movementSpeed;
		::flixel::effects::FlxSpriteFilter filter;
		::openfl::_v2::filters::GlowFilter glowFilter;
		::flixel::text::FlxText creator;
		virtual Void create( );

		virtual Void destroy( );

		virtual Void changeToPlay( );
		Dynamic changeToPlay_dyn();

		virtual Void changeToHighscore( );
		Dynamic changeToHighscore_dyn();

		virtual Void changeToHowTo( );
		Dynamic changeToHowTo_dyn();

		virtual Void update( );

		virtual Void desktopInput( );
		Dynamic desktopInput_dyn();

		virtual Void moveBackgroundSprites( );
		Dynamic moveBackgroundSprites_dyn();

};

} // end namespace states

#endif /* INCLUDED_states_MenuState */ 
