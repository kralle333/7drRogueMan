#ifndef INCLUDED_states_HighScoresState
#define INCLUDED_states_HighScoresState

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
HX_DECLARE_CLASS2(flixel,ui,FlxButton)
HX_DECLARE_CLASS2(flixel,ui,FlxTypedButton)
HX_DECLARE_CLASS1(states,HighScoresState)
namespace states{


class HXCPP_CLASS_ATTRIBUTES  HighScoresState_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef HighScoresState_obj OBJ_;
		HighScoresState_obj();
		Void __construct(Dynamic MaxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< HighScoresState_obj > __new(Dynamic MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HighScoresState_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("HighScoresState"); }

		::flixel::text::FlxText scoresText;
		::flixel::text::FlxText exitText;
		::flixel::ui::FlxButton goBackButton;
		::flixel::ui::FlxButton clearScoresButton;
		virtual Void create( );

		virtual Void goBack( );
		Dynamic goBack_dyn();

		virtual Void clearScores( );
		Dynamic clearScores_dyn();

		virtual Void update( );

};

} // end namespace states

#endif /* INCLUDED_states_HighScoresState */ 
