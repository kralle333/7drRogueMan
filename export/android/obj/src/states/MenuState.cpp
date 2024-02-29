#include <hxcpp.h>

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
#ifndef INCLUDED_flixel_effects_FlxSpriteFilter
#include <flixel/effects/FlxSpriteFilter.h>
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
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxInput
#include <flixel/interfaces/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
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
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
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
#ifndef INCLUDED_openfl__v2_filters_BitmapFilter
#include <openfl/_v2/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl__v2_filters_GlowFilter
#include <openfl/_v2/filters/GlowFilter.h>
#endif
#ifndef INCLUDED_states_HighScoresState
#include <states/HighScoresState.h>
#endif
#ifndef INCLUDED_states_HowToPlayState
#include <states/HowToPlayState.h>
#endif
#ifndef INCLUDED_states_MenuState
#include <states/MenuState.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
namespace states{

Void MenuState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("states.MenuState","new",0xfb0d7598,"states.MenuState.new","states/MenuState.hx",18,0x6393c259)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(32)
	this->movementSpeed = 3.2;
	HX_STACK_LINE(29)
	this->isPlayerChased = true;
	HX_STACK_LINE(28)
	this->moveRight = true;
	HX_STACK_LINE(25)
	this->selectedButtonIndex = (int)0;
	HX_STACK_LINE(18)
	super::__construct(MaxSize);
}
;
	return null();
}

//MenuState_obj::~MenuState_obj() { }

Dynamic MenuState_obj::__CreateEmpty() { return  new MenuState_obj; }
hx::ObjectPtr< MenuState_obj > MenuState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< MenuState_obj > result = new MenuState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic MenuState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MenuState_obj > result = new MenuState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void MenuState_obj::create( ){
{
		HX_STACK_FRAME("states.MenuState","create",0x702ed4c4,"states.MenuState.create","states/MenuState.hx",40,0x6393c259)
		HX_STACK_THIS(this)
		HX_STACK_LINE(41)
		this->super::create();
		HX_STACK_LINE(42)
		::flixel::FlxG_obj::mouse->set_visible(false);
		HX_STACK_LINE(43)
		int _g = ::flixel::util::FlxRandom_obj::intRanged((int)16,(::flixel::FlxG_obj::height - (int)16),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(43)
		::flixel::FlxSprite _g1 = ::flixel::FlxSprite_obj::__new((int)-20,_g,HX_CSTRING("assets/images/player.png"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(43)
		this->player = _g1;
		HX_STACK_LINE(44)
		this->add(this->player);
		HX_STACK_LINE(45)
		::flixel::effects::FlxSpriteFilter _g2 = ::flixel::effects::FlxSpriteFilter_obj::__new(this->player,(int)0,(int)0);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(45)
		this->filter = _g2;
		HX_STACK_LINE(47)
		Array< ::Dynamic > _g3 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(47)
		this->slimes = _g3;
		HX_STACK_LINE(48)
		{
			HX_STACK_LINE(48)
			int _g4 = (int)0;		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(48)
			while((true)){
				HX_STACK_LINE(48)
				if ((!(((_g4 < (int)5))))){
					HX_STACK_LINE(48)
					break;
				}
				HX_STACK_LINE(48)
				int s = (_g4)++;		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(50)
				this->slimes[s] = ::flixel::FlxSprite_obj::__new(((int)-40 + ((int)-20 * s)),this->player->y,HX_CSTRING("assets/images/enemies/slime.png"));
				HX_STACK_LINE(51)
				this->add(this->slimes->__get(s).StaticCast< ::flixel::FlxSprite >());
			}
		}
		HX_STACK_LINE(53)
		::flixel::text::FlxText _g4 = ::flixel::text::FlxText_obj::__new(((Float(::flixel::FlxG_obj::width) / Float((int)2)) - (int)90),(Float(::flixel::FlxG_obj::height) / Float((int)10)),::flixel::FlxG_obj::width,HX_CSTRING("RogueMan"),(int)30,true);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(53)
		this->add(_g4);
		HX_STACK_LINE(54)
		Array< ::Dynamic > _g5 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(54)
		this->buttons = _g5;
		HX_STACK_LINE(55)
		this->buttons[(int)0] = ::flixel::ui::FlxButton_obj::__new(((Float(::flixel::FlxG_obj::width) / Float((int)2)) - (int)40),(Float(::flixel::FlxG_obj::height) / Float((int)2)),HX_CSTRING("Play"),this->changeToPlay_dyn());
		HX_STACK_LINE(56)
		this->buttons[(int)1] = ::flixel::ui::FlxButton_obj::__new(((Float(::flixel::FlxG_obj::width) / Float((int)2)) - (int)40),(this->buttons->__get((int)0).StaticCast< ::flixel::ui::FlxButton >()->y + (Float(::flixel::FlxG_obj::height) / Float((int)10))),HX_CSTRING("High Scores"),this->changeToHighscore_dyn());
		HX_STACK_LINE(57)
		this->buttons[(int)2] = ::flixel::ui::FlxButton_obj::__new(((Float(::flixel::FlxG_obj::width) / Float((int)2)) - (int)40),(this->buttons->__get((int)1).StaticCast< ::flixel::ui::FlxButton >()->y + (Float(::flixel::FlxG_obj::height) / Float((int)10))),HX_CSTRING("How to play"),this->changeToHowTo_dyn());
		HX_STACK_LINE(58)
		::flixel::FlxSprite _g6 = ::flixel::FlxSprite_obj::__new((this->buttons->__get((int)0).StaticCast< ::flixel::ui::FlxButton >()->x - (int)24),this->buttons->__get((int)0).StaticCast< ::flixel::ui::FlxButton >()->y,HX_CSTRING("assets/images/selectedbutton.png"));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(58)
		this->selectedButton = _g6;
		HX_STACK_LINE(64)
		{
			HX_STACK_LINE(64)
			int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(64)
			int _g7 = this->buttons->length;		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(64)
			while((true)){
				HX_STACK_LINE(64)
				if ((!(((_g11 < _g7))))){
					HX_STACK_LINE(64)
					break;
				}
				HX_STACK_LINE(64)
				int i = (_g11)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(66)
				this->add(this->buttons->__get(i).StaticCast< ::flixel::ui::FlxButton >());
			}
		}
		HX_STACK_LINE(69)
		::flixel::text::FlxText _g7 = ::flixel::text::FlxText_obj::__new((int)10,(int)290,(int)0,HX_CSTRING("Created by Kristian Pilegaard Jensen for the 7drl challenge 2015"),null(),null());		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(69)
		this->add(_g7);
		HX_STACK_LINE(70)
		::flixel::text::FlxText _g8 = ::flixel::text::FlxText_obj::__new((int)10,(int)305,(int)0,HX_CSTRING("Find more of my games here: www.kristianpilegaard.dk"),null(),null());		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(70)
		this->add(_g8);
	}
return null();
}


Void MenuState_obj::destroy( ){
{
		HX_STACK_FRAME("states.MenuState","destroy",0xcbe6ce32,"states.MenuState.destroy","states/MenuState.hx",77,0x6393c259)
		HX_STACK_THIS(this)
		HX_STACK_LINE(77)
		this->super::destroy();
	}
return null();
}


Void MenuState_obj::changeToPlay( ){
{
		HX_STACK_FRAME("states.MenuState","changeToPlay",0xdcf54667,"states.MenuState.changeToPlay","states/MenuState.hx",82,0x6393c259)
		HX_STACK_THIS(this)
		HX_STACK_LINE(82)
		::flixel::FlxState State = ::states::PlayState_obj::__new();		HX_STACK_VAR(State,"State");
		HX_STACK_LINE(82)
		::flixel::FlxG_obj::game->_requestedState = State;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,changeToPlay,(void))

Void MenuState_obj::changeToHighscore( ){
{
		HX_STACK_FRAME("states.MenuState","changeToHighscore",0x98159f5d,"states.MenuState.changeToHighscore","states/MenuState.hx",86,0x6393c259)
		HX_STACK_THIS(this)
		HX_STACK_LINE(86)
		::flixel::FlxState State = ::states::HighScoresState_obj::__new(null());		HX_STACK_VAR(State,"State");
		HX_STACK_LINE(86)
		::flixel::FlxG_obj::game->_requestedState = State;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,changeToHighscore,(void))

Void MenuState_obj::changeToHowTo( ){
{
		HX_STACK_FRAME("states.MenuState","changeToHowTo",0xe07fe558,"states.MenuState.changeToHowTo","states/MenuState.hx",90,0x6393c259)
		HX_STACK_THIS(this)
		HX_STACK_LINE(90)
		::flixel::FlxState State = ::states::HowToPlayState_obj::__new(null());		HX_STACK_VAR(State,"State");
		HX_STACK_LINE(90)
		::flixel::FlxG_obj::game->_requestedState = State;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,changeToHowTo,(void))

Void MenuState_obj::update( ){
{
		HX_STACK_FRAME("states.MenuState","update",0x7b24f3d1,"states.MenuState.update","states/MenuState.hx",93,0x6393c259)
		HX_STACK_THIS(this)
		HX_STACK_LINE(94)
		this->super::update();
		HX_STACK_LINE(99)
		this->moveBackgroundSprites();
	}
return null();
}


Void MenuState_obj::desktopInput( ){
{
		HX_STACK_FRAME("states.MenuState","desktopInput",0x9483a456,"states.MenuState.desktopInput","states/MenuState.hx",105,0x6393c259)
		HX_STACK_THIS(this)
		HX_STACK_LINE(105)
		if ((::flixel::FlxG_obj::keys->checkStatus((int)13,::flixel::FlxG_obj::keys->pressed->checkStatus))){
			HX_STACK_LINE(107)
			int _g = this->selectedButtonIndex;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(107)
			switch( (int)(_g)){
				case (int)0: {
					HX_STACK_LINE(109)
					::flixel::FlxState State = ::states::PlayState_obj::__new();		HX_STACK_VAR(State,"State");
					HX_STACK_LINE(109)
					::flixel::FlxG_obj::game->_requestedState = State;
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(110)
					::flixel::FlxState State = ::states::HighScoresState_obj::__new(null());		HX_STACK_VAR(State,"State");
					HX_STACK_LINE(110)
					::flixel::FlxG_obj::game->_requestedState = State;
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(111)
					::flixel::FlxState State = ::states::HowToPlayState_obj::__new(null());		HX_STACK_VAR(State,"State");
					HX_STACK_LINE(111)
					::flixel::FlxG_obj::game->_requestedState = State;
				}
				;break;
			}
		}
		else{
			HX_STACK_LINE(114)
			if ((::flixel::FlxG_obj::keys->checkStatus((int)40,::flixel::FlxG_obj::keys->justPressed->checkStatus))){
				HX_STACK_LINE(116)
				if (((this->selectedButtonIndex < (this->buttons->length - (int)1)))){
					HX_STACK_LINE(118)
					(this->selectedButtonIndex)++;
					HX_STACK_LINE(119)
					this->selectedButton->setPosition(this->selectedButton->x,this->buttons->__get(this->selectedButtonIndex).StaticCast< ::flixel::ui::FlxButton >()->y);
				}
			}
			else{
				HX_STACK_LINE(122)
				if ((::flixel::FlxG_obj::keys->checkStatus((int)38,::flixel::FlxG_obj::keys->justPressed->checkStatus))){
					HX_STACK_LINE(124)
					if (((this->selectedButtonIndex > (int)0))){
						HX_STACK_LINE(126)
						(this->selectedButtonIndex)--;
						HX_STACK_LINE(127)
						this->selectedButton->setPosition(this->selectedButton->x,this->buttons->__get(this->selectedButtonIndex).StaticCast< ::flixel::ui::FlxButton >()->y);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,desktopInput,(void))

Void MenuState_obj::moveBackgroundSprites( ){
{
		HX_STACK_FRAME("states.MenuState","moveBackgroundSprites",0x41486367,"states.MenuState.moveBackgroundSprites","states/MenuState.hx",133,0x6393c259)
		HX_STACK_THIS(this)
		HX_STACK_LINE(134)
		bool changedDirection = false;		HX_STACK_VAR(changedDirection,"changedDirection");
		HX_STACK_LINE(135)
		if ((this->moveRight)){
			HX_STACK_LINE(137)
			{
				HX_STACK_LINE(137)
				::flixel::FlxSprite _g = this->player;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(137)
				_g->set_x((_g->x + this->movementSpeed));
			}
			HX_STACK_LINE(138)
			{
				HX_STACK_LINE(138)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(138)
				while((true)){
					HX_STACK_LINE(138)
					if ((!(((_g < (int)5))))){
						HX_STACK_LINE(138)
						break;
					}
					HX_STACK_LINE(138)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(140)
					{
						HX_STACK_LINE(140)
						::flixel::FlxSprite _g1 = this->slimes->__get(i).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(140)
						_g1->set_x((_g1->x + this->movementSpeed));
					}
				}
			}
			HX_STACK_LINE(142)
			if (((bool(this->isPlayerChased) && bool((this->slimes->__get((int)4).StaticCast< ::flixel::FlxSprite >()->x > (::flixel::FlxG_obj::width + (int)40)))))){
				HX_STACK_LINE(144)
				Float _g = ::flixel::util::FlxRandom_obj::floatRanged((int)0,(int)100,null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(144)
				if (((_g < (int)25))){
					HX_STACK_LINE(146)
					this->isPlayerChased = false;
					HX_STACK_LINE(147)
					::openfl::_v2::filters::GlowFilter _g1 = ::openfl::_v2::filters::GlowFilter_obj::__new((int)-65536,(int)1,(int)4,(int)4,(int)6,null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(147)
					this->glowFilter = _g1;
					HX_STACK_LINE(148)
					this->filter->addFilter(this->glowFilter,null());
				}
				else{
					HX_STACK_LINE(152)
					this->player->set_x((::flixel::FlxG_obj::width + (int)20));
				}
				HX_STACK_LINE(154)
				this->moveRight = false;
				HX_STACK_LINE(155)
				changedDirection = true;
			}
			else{
				HX_STACK_LINE(157)
				if (((bool(!(this->isPlayerChased)) && bool((this->player->x > (::flixel::FlxG_obj::width + (int)20)))))){
					HX_STACK_LINE(159)
					this->filter->removeAllFilters(null());
					HX_STACK_LINE(160)
					this->isPlayerChased = true;
					HX_STACK_LINE(161)
					this->moveRight = false;
					HX_STACK_LINE(162)
					changedDirection = true;
				}
			}
		}
		else{
			HX_STACK_LINE(167)
			{
				HX_STACK_LINE(167)
				::flixel::FlxSprite _g = this->player;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(167)
				_g->set_x((_g->x - this->movementSpeed));
			}
			HX_STACK_LINE(168)
			{
				HX_STACK_LINE(168)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(168)
				while((true)){
					HX_STACK_LINE(168)
					if ((!(((_g < (int)5))))){
						HX_STACK_LINE(168)
						break;
					}
					HX_STACK_LINE(168)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(170)
					{
						HX_STACK_LINE(170)
						::flixel::FlxSprite _g1 = this->slimes->__get(i).StaticCast< ::flixel::FlxSprite >();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(170)
						_g1->set_x((_g1->x - this->movementSpeed));
					}
				}
			}
			HX_STACK_LINE(172)
			if (((bool(this->isPlayerChased) && bool((this->slimes->__get((int)0).StaticCast< ::flixel::FlxSprite >()->x <= (int)-40))))){
				HX_STACK_LINE(174)
				Float _g2 = ::flixel::util::FlxRandom_obj::floatRanged((int)0,(int)100,null());		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(174)
				if (((_g2 < (int)25))){
					HX_STACK_LINE(176)
					this->isPlayerChased = false;
					HX_STACK_LINE(177)
					::openfl::_v2::filters::GlowFilter _g3 = ::openfl::_v2::filters::GlowFilter_obj::__new((int)-65536,(int)1,(int)4,(int)4,(int)6,null(),null(),null());		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(177)
					this->glowFilter = _g3;
					HX_STACK_LINE(178)
					this->filter->addFilter(this->glowFilter,null());
				}
				else{
					HX_STACK_LINE(182)
					this->player->set_x((int)-20);
				}
				HX_STACK_LINE(184)
				this->moveRight = true;
				HX_STACK_LINE(185)
				changedDirection = true;
			}
			else{
				HX_STACK_LINE(187)
				if (((bool(!(this->isPlayerChased)) && bool((this->player->x <= (int)-20))))){
					HX_STACK_LINE(189)
					this->filter->removeAllFilters(null());
					HX_STACK_LINE(190)
					this->isPlayerChased = true;
					HX_STACK_LINE(191)
					this->moveRight = true;
					HX_STACK_LINE(192)
					changedDirection = true;
				}
			}
		}
		HX_STACK_LINE(196)
		if ((changedDirection)){
			HX_STACK_LINE(198)
			int randY = ::flixel::util::FlxRandom_obj::intRanged((int)16,(::flixel::FlxG_obj::height - (int)16),null());		HX_STACK_VAR(randY,"randY");
			HX_STACK_LINE(200)
			this->player->set_y(randY);
			HX_STACK_LINE(201)
			{
				HX_STACK_LINE(201)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(201)
				int _g = this->slimes->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(201)
				while((true)){
					HX_STACK_LINE(201)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(201)
						break;
					}
					HX_STACK_LINE(201)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(203)
					this->slimes->__get(i).StaticCast< ::flixel::FlxSprite >()->set_y(randY);
				}
			}
		}
		HX_STACK_LINE(207)
		if (((  (((  ((::flixel::FlxG_obj::keys->checkStatus((int)17,::flixel::FlxG_obj::keys->pressed->checkStatus))) ? bool(::flixel::FlxG_obj::keys->checkStatus((int)67,::flixel::FlxG_obj::keys->pressed->checkStatus)) : bool(false) ))) ? bool(::flixel::FlxG_obj::keys->checkStatus((int)72,::flixel::FlxG_obj::keys->pressed->checkStatus)) : bool(false) ))){
			HX_STACK_LINE(209)
			::HighScoreIO_obj::clearScores();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,moveBackgroundSprites,(void))


MenuState_obj::MenuState_obj()
{
}

void MenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuState);
	HX_MARK_MEMBER_NAME(playButton,"playButton");
	HX_MARK_MEMBER_NAME(exitButton,"exitButton");
	HX_MARK_MEMBER_NAME(buttons,"buttons");
	HX_MARK_MEMBER_NAME(selectedButton,"selectedButton");
	HX_MARK_MEMBER_NAME(selectedButtonIndex,"selectedButtonIndex");
	HX_MARK_MEMBER_NAME(moveRight,"moveRight");
	HX_MARK_MEMBER_NAME(isPlayerChased,"isPlayerChased");
	HX_MARK_MEMBER_NAME(player,"player");
	HX_MARK_MEMBER_NAME(slimes,"slimes");
	HX_MARK_MEMBER_NAME(movementSpeed,"movementSpeed");
	HX_MARK_MEMBER_NAME(filter,"filter");
	HX_MARK_MEMBER_NAME(glowFilter,"glowFilter");
	HX_MARK_MEMBER_NAME(creator,"creator");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(playButton,"playButton");
	HX_VISIT_MEMBER_NAME(exitButton,"exitButton");
	HX_VISIT_MEMBER_NAME(buttons,"buttons");
	HX_VISIT_MEMBER_NAME(selectedButton,"selectedButton");
	HX_VISIT_MEMBER_NAME(selectedButtonIndex,"selectedButtonIndex");
	HX_VISIT_MEMBER_NAME(moveRight,"moveRight");
	HX_VISIT_MEMBER_NAME(isPlayerChased,"isPlayerChased");
	HX_VISIT_MEMBER_NAME(player,"player");
	HX_VISIT_MEMBER_NAME(slimes,"slimes");
	HX_VISIT_MEMBER_NAME(movementSpeed,"movementSpeed");
	HX_VISIT_MEMBER_NAME(filter,"filter");
	HX_VISIT_MEMBER_NAME(glowFilter,"glowFilter");
	HX_VISIT_MEMBER_NAME(creator,"creator");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MenuState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { return player; }
		if (HX_FIELD_EQ(inName,"slimes") ) { return slimes; }
		if (HX_FIELD_EQ(inName,"filter") ) { return filter; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buttons") ) { return buttons; }
		if (HX_FIELD_EQ(inName,"creator") ) { return creator; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"moveRight") ) { return moveRight; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"playButton") ) { return playButton; }
		if (HX_FIELD_EQ(inName,"exitButton") ) { return exitButton; }
		if (HX_FIELD_EQ(inName,"glowFilter") ) { return glowFilter; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"changeToPlay") ) { return changeToPlay_dyn(); }
		if (HX_FIELD_EQ(inName,"desktopInput") ) { return desktopInput_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"movementSpeed") ) { return movementSpeed; }
		if (HX_FIELD_EQ(inName,"changeToHowTo") ) { return changeToHowTo_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"selectedButton") ) { return selectedButton; }
		if (HX_FIELD_EQ(inName,"isPlayerChased") ) { return isPlayerChased; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"changeToHighscore") ) { return changeToHighscore_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"selectedButtonIndex") ) { return selectedButtonIndex; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"moveBackgroundSprites") ) { return moveBackgroundSprites_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MenuState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"slimes") ) { slimes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"filter") ) { filter=inValue.Cast< ::flixel::effects::FlxSpriteFilter >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"buttons") ) { buttons=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"creator") ) { creator=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"moveRight") ) { moveRight=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"playButton") ) { playButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"exitButton") ) { exitButton=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"glowFilter") ) { glowFilter=inValue.Cast< ::openfl::_v2::filters::GlowFilter >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"movementSpeed") ) { movementSpeed=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"selectedButton") ) { selectedButton=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isPlayerChased") ) { isPlayerChased=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"selectedButtonIndex") ) { selectedButtonIndex=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("playButton"));
	outFields->push(HX_CSTRING("exitButton"));
	outFields->push(HX_CSTRING("buttons"));
	outFields->push(HX_CSTRING("selectedButton"));
	outFields->push(HX_CSTRING("selectedButtonIndex"));
	outFields->push(HX_CSTRING("moveRight"));
	outFields->push(HX_CSTRING("isPlayerChased"));
	outFields->push(HX_CSTRING("player"));
	outFields->push(HX_CSTRING("slimes"));
	outFields->push(HX_CSTRING("movementSpeed"));
	outFields->push(HX_CSTRING("filter"));
	outFields->push(HX_CSTRING("glowFilter"));
	outFields->push(HX_CSTRING("creator"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(MenuState_obj,playButton),HX_CSTRING("playButton")},
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(MenuState_obj,exitButton),HX_CSTRING("exitButton")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(MenuState_obj,buttons),HX_CSTRING("buttons")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(MenuState_obj,selectedButton),HX_CSTRING("selectedButton")},
	{hx::fsInt,(int)offsetof(MenuState_obj,selectedButtonIndex),HX_CSTRING("selectedButtonIndex")},
	{hx::fsBool,(int)offsetof(MenuState_obj,moveRight),HX_CSTRING("moveRight")},
	{hx::fsBool,(int)offsetof(MenuState_obj,isPlayerChased),HX_CSTRING("isPlayerChased")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(MenuState_obj,player),HX_CSTRING("player")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(MenuState_obj,slimes),HX_CSTRING("slimes")},
	{hx::fsFloat,(int)offsetof(MenuState_obj,movementSpeed),HX_CSTRING("movementSpeed")},
	{hx::fsObject /*::flixel::effects::FlxSpriteFilter*/ ,(int)offsetof(MenuState_obj,filter),HX_CSTRING("filter")},
	{hx::fsObject /*::openfl::_v2::filters::GlowFilter*/ ,(int)offsetof(MenuState_obj,glowFilter),HX_CSTRING("glowFilter")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(MenuState_obj,creator),HX_CSTRING("creator")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("playButton"),
	HX_CSTRING("exitButton"),
	HX_CSTRING("buttons"),
	HX_CSTRING("selectedButton"),
	HX_CSTRING("selectedButtonIndex"),
	HX_CSTRING("moveRight"),
	HX_CSTRING("isPlayerChased"),
	HX_CSTRING("player"),
	HX_CSTRING("slimes"),
	HX_CSTRING("movementSpeed"),
	HX_CSTRING("filter"),
	HX_CSTRING("glowFilter"),
	HX_CSTRING("creator"),
	HX_CSTRING("create"),
	HX_CSTRING("destroy"),
	HX_CSTRING("changeToPlay"),
	HX_CSTRING("changeToHighscore"),
	HX_CSTRING("changeToHowTo"),
	HX_CSTRING("update"),
	HX_CSTRING("desktopInput"),
	HX_CSTRING("moveBackgroundSprites"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

#endif

Class MenuState_obj::__mClass;

void MenuState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("states.MenuState"), hx::TCanCast< MenuState_obj> ,sStaticFields,sMemberFields,
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

void MenuState_obj::__boot()
{
}

} // end namespace states
