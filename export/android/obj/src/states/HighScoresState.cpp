#include <hxcpp.h>

#ifndef INCLUDED_DescriptionScoreMap
#include <DescriptionScoreMap.h>
#endif
#ifndef INCLUDED_HighScoreIO
#include <HighScoreIO.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_states_HighScoresState
#include <states/HighScoresState.h>
#endif
#ifndef INCLUDED_states_MenuState
#include <states/MenuState.h>
#endif
namespace states{

Void HighScoresState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("states.HighScoresState","new",0x23db7bd4,"states.HighScoresState.new","states/HighScoresState.hx",8,0x8814ee5d)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(8)
	super::__construct(MaxSize);
}
;
	return null();
}

//HighScoresState_obj::~HighScoresState_obj() { }

Dynamic HighScoresState_obj::__CreateEmpty() { return  new HighScoresState_obj; }
hx::ObjectPtr< HighScoresState_obj > HighScoresState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< HighScoresState_obj > result = new HighScoresState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic HighScoresState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HighScoresState_obj > result = new HighScoresState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void HighScoresState_obj::create( ){
{
		HX_STACK_FRAME("states.HighScoresState","create",0x5b115c08,"states.HighScoresState.create","states/HighScoresState.hx",16,0x8814ee5d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(17)
		this->super::create();
		HX_STACK_LINE(18)
		::flixel::text::FlxText _g = ::flixel::text::FlxText_obj::__new((int)10,(int)10,(int)0,HX_CSTRING("High Scores:"),(int)30,null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(18)
		this->add(_g);
		HX_STACK_LINE(19)
		::flixel::text::FlxText _g1 = ::flixel::text::FlxText_obj::__new((int)10,(int)96,(int)0,HX_CSTRING("No highscores yet"),(int)12,null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(19)
		this->scoresText = _g1;
		HX_STACK_LINE(20)
		if (((::HighScoreIO_obj::getScores()->length > (int)0))){
			HX_STACK_LINE(22)
			this->scoresText->set_text(HX_CSTRING(""));
		}
		HX_STACK_LINE(24)
		{
			HX_STACK_LINE(24)
			int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(24)
			int _g2 = ::HighScoreIO_obj::getScores()->length;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(24)
			while((true)){
				HX_STACK_LINE(24)
				if ((!(((_g11 < _g2))))){
					HX_STACK_LINE(24)
					break;
				}
				HX_STACK_LINE(24)
				int i = (_g11)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(26)
				{
					HX_STACK_LINE(26)
					::flixel::text::FlxText _g21 = this->scoresText;		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(26)
					::String _g22 = _g21->get_text();		HX_STACK_VAR(_g22,"_g22");
					HX_STACK_LINE(26)
					::String _g3 = (_g22 + (((((((i + (int)1) + HX_CSTRING(": ")) + ::HighScoreIO_obj::getScores()->__get(i).StaticCast< ::DescriptionScoreMap >()->description) + HX_CSTRING(" - Score: ")) + ::HighScoreIO_obj::getScores()->__get(i).StaticCast< ::DescriptionScoreMap >()->score) + HX_CSTRING("\n"))));		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(26)
					_g21->set_text(_g3);
				}
			}
		}
		HX_STACK_LINE(28)
		this->add(this->scoresText);
		HX_STACK_LINE(30)
		::flixel::text::FlxText _g4 = ::flixel::text::FlxText_obj::__new((int)10,(int)300,(int)0,HX_CSTRING("Press (Escape) to exit - (C) to clear scores"),null(),null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(30)
		this->exitText = _g4;
		HX_STACK_LINE(35)
		::flixel::ui::FlxButton _g5 = ::flixel::ui::FlxButton_obj::__new((::flixel::FlxG_obj::height - (int)50),(int)20,HX_CSTRING("Main menu"),this->goBack_dyn());		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(35)
		this->goBackButton = _g5;
		HX_STACK_LINE(36)
		::flixel::ui::FlxButton _g6 = ::flixel::ui::FlxButton_obj::__new((::flixel::FlxG_obj::height - (int)50),(::flixel::FlxG_obj::width - (int)120),HX_CSTRING("Clear Scores"),this->clearScores_dyn());		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(36)
		this->clearScoresButton = _g6;
		HX_STACK_LINE(37)
		this->add(this->goBackButton);
		HX_STACK_LINE(38)
		this->add(this->clearScoresButton);
	}
return null();
}


Void HighScoresState_obj::goBack( ){
{
		HX_STACK_FRAME("states.HighScoresState","goBack",0x2328897b,"states.HighScoresState.goBack","states/HighScoresState.hx",45,0x8814ee5d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(45)
		::flixel::FlxState State = ::states::MenuState_obj::__new(null());		HX_STACK_VAR(State,"State");
		HX_STACK_LINE(45)
		::flixel::FlxG_obj::game->_requestedState = State;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(HighScoresState_obj,goBack,(void))

Void HighScoresState_obj::clearScores( ){
{
		HX_STACK_FRAME("states.HighScoresState","clearScores",0x3266c1c2,"states.HighScoresState.clearScores","states/HighScoresState.hx",48,0x8814ee5d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(49)
		::HighScoreIO_obj::clearScores();
		HX_STACK_LINE(50)
		this->scoresText->set_text(HX_CSTRING("Cleared!"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(HighScoresState_obj,clearScores,(void))

Void HighScoresState_obj::update( ){
{
		HX_STACK_FRAME("states.HighScoresState","update",0x66077b15,"states.HighScoresState.update","states/HighScoresState.hx",54,0x8814ee5d)
		HX_STACK_THIS(this)
		HX_STACK_LINE(55)
		this->super::update();
		HX_STACK_LINE(56)
		if ((::flixel::FlxG_obj::keys->checkStatus((int)27,::flixel::FlxG_obj::keys->justPressed->checkStatus))){
			HX_STACK_LINE(58)
			this->goBack();
		}
		else{
			HX_STACK_LINE(60)
			if ((::flixel::FlxG_obj::keys->checkStatus((int)67,::flixel::FlxG_obj::keys->justPressed->checkStatus))){
				HX_STACK_LINE(62)
				this->clearScores();
			}
		}
	}
return null();
}



HighScoresState_obj::HighScoresState_obj()
{
}

void HighScoresState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HighScoresState);
	HX_MARK_MEMBER_NAME(scoresText,"scoresText");
	HX_MARK_MEMBER_NAME(exitText,"exitText");
	HX_MARK_MEMBER_NAME(goBackButton,"goBackButton");
	HX_MARK_MEMBER_NAME(clearScoresButton,"clearScoresButton");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HighScoresState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(scoresText,"scoresText");
	HX_VISIT_MEMBER_NAME(exitText,"exitText");
	HX_VISIT_MEMBER_NAME(goBackButton,"goBackButton");
	HX_VISIT_MEMBER_NAME(clearScoresButton,"clearScoresButton");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic HighScoresState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"goBack") ) { return goBack_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"exitText") ) { return exitText; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scoresText") ) { return scoresText; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"clearScores") ) { return clearScores_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"goBackButton") ) { return goBackButton; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"clearScoresButton") ) { return clearScoresButton; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HighScoresState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"exitText") ) { exitText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scoresText") ) { scoresText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"goBackButton") ) { goBackButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"clearScoresButton") ) { clearScoresButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HighScoresState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("scoresText"));
	outFields->push(HX_CSTRING("exitText"));
	outFields->push(HX_CSTRING("goBackButton"));
	outFields->push(HX_CSTRING("clearScoresButton"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(HighScoresState_obj,scoresText),HX_CSTRING("scoresText")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(HighScoresState_obj,exitText),HX_CSTRING("exitText")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(HighScoresState_obj,goBackButton),HX_CSTRING("goBackButton")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(HighScoresState_obj,clearScoresButton),HX_CSTRING("clearScoresButton")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("scoresText"),
	HX_CSTRING("exitText"),
	HX_CSTRING("goBackButton"),
	HX_CSTRING("clearScoresButton"),
	HX_CSTRING("create"),
	HX_CSTRING("goBack"),
	HX_CSTRING("clearScores"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HighScoresState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HighScoresState_obj::__mClass,"__mClass");
};

#endif

Class HighScoresState_obj::__mClass;

void HighScoresState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("states.HighScoresState"), hx::TCanCast< HighScoresState_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void HighScoresState_obj::__boot()
{
}

} // end namespace states
