#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_input_touch_FlxTouch
#include <flixel/input/touch/FlxTouch.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouchManager
#include <flixel/input/touch/FlxTouchManager.h>
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
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_FlxPoint
#include <flixel/util/FlxPool_flixel_util_FlxPoint.h>
#endif
#ifndef INCLUDED_gameobjects_Map
#include <gameobjects/Map.h>
#endif
#ifndef INCLUDED_gameobjects_Player
#include <gameobjects/Player.h>
#endif
#ifndef INCLUDED_gameobjects_items_Item
#include <gameobjects/items/Item.h>
#endif
#ifndef INCLUDED_gameobjects_items_Sword
#include <gameobjects/items/Sword.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_filters_BitmapFilter
#include <openfl/_v2/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl__v2_filters_GlowFilter
#include <openfl/_v2/filters/GlowFilter.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
namespace gameobjects{

Void Player_obj::__construct()
{
HX_STACK_FRAME("gameobjects.Player","new",0x62e1d2bf,"gameobjects.Player.new","gameobjects/Player.hx",16,0x4f158170)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(41)
	this->justUsedStaff = false;
	HX_STACK_LINE(39)
	this->moved = false;
	HX_STACK_LINE(38)
	this->heldItemCount = (int)0;
	HX_STACK_LINE(32)
	this->isEffectInPlace = false;
	HX_STACK_LINE(30)
	this->hasSword = false;
	HX_STACK_LINE(29)
	this->canKill = false;
	HX_STACK_LINE(28)
	this->blink = false;
	HX_STACK_LINE(27)
	this->blinkInterval = 0.1;
	HX_STACK_LINE(26)
	this->blinkTimer = (int)0;
	HX_STACK_LINE(25)
	this->isVulnerable = false;
	HX_STACK_LINE(22)
	this->coinCount = (int)0;
	HX_STACK_LINE(18)
	this->movementSpeed = 1.6;
	HX_STACK_LINE(45)
	super::__construct((int)16,(int)16,HX_CSTRING("assets/images/player.png"));
	HX_STACK_LINE(46)
	this->health = (int)3;
	HX_STACK_LINE(47)
	::flixel::FlxSprite _g = ::flixel::FlxSprite_obj::__new((int)368,(int)50,HX_CSTRING("assets/images/items/heart.png"));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(47)
	this->heart = _g;
	HX_STACK_LINE(48)
	::flixel::text::FlxText _g1 = ::flixel::text::FlxText_obj::__new((int)384,(int)50,(int)0,HX_CSTRING("x3"),(int)8,null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(48)
	this->healthTxt = _g1;
	HX_STACK_LINE(49)
	this->coinCount = (int)0;
	HX_STACK_LINE(50)
	::flixel::FlxSprite _g2 = ::flixel::FlxSprite_obj::__new((int)320,(int)48,HX_CSTRING("assets/images/map/coin.png"));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(50)
	this->coin = _g2;
	HX_STACK_LINE(51)
	::flixel::text::FlxText _g3 = ::flixel::text::FlxText_obj::__new((int)336,(int)50,(int)0,HX_CSTRING("x0"),(int)8,null());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(51)
	this->coinText = _g3;
	HX_STACK_LINE(52)
	this->effectTimer = (int)0;
	HX_STACK_LINE(53)
	::flixel::effects::FlxSpriteFilter _g4 = ::flixel::effects::FlxSpriteFilter_obj::__new(hx::ObjectPtr<OBJ_>(this),(int)0,(int)0);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(53)
	this->filter = _g4;
	HX_STACK_LINE(55)
	Array< ::Dynamic > _g5 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(55)
	this->items = _g5;
	HX_STACK_LINE(56)
	{
		HX_STACK_LINE(56)
		int _g6 = (int)0;		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(56)
		while((true)){
			HX_STACK_LINE(56)
			if ((!(((_g6 < (int)3))))){
				HX_STACK_LINE(56)
				break;
			}
			HX_STACK_LINE(56)
			int i = (_g6)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(58)
			this->items[i] = null();
		}
	}
	HX_STACK_LINE(60)
	this->filter->removeAllFilters(null());
	HX_STACK_LINE(61)
	this->setInvulnerable((int)1);
}
;
	return null();
}

//Player_obj::~Player_obj() { }

Dynamic Player_obj::__CreateEmpty() { return  new Player_obj; }
hx::ObjectPtr< Player_obj > Player_obj::__new()
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct();
	return result;}

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct();
	return result;}

Void Player_obj::restart( ){
{
		HX_STACK_FRAME("gameobjects.Player","restart",0xac6de5ae,"gameobjects.Player.restart","gameobjects/Player.hx",67,0x4f158170)
		HX_STACK_THIS(this)
		HX_STACK_LINE(68)
		this->loadGraphic(HX_CSTRING("assets/images/player.png"),null(),null(),null(),null(),null());
		HX_STACK_LINE(69)
		::flixel::effects::FlxSpriteFilter _g = ::flixel::effects::FlxSpriteFilter_obj::__new(hx::ObjectPtr<OBJ_>(this),(int)0,(int)0);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(69)
		this->filter = _g;
		HX_STACK_LINE(70)
		this->health = (int)3;
		HX_STACK_LINE(71)
		this->healthTxt->set_text((HX_CSTRING("x") + this->health));
		HX_STACK_LINE(72)
		this->coinCount = (int)0;
		HX_STACK_LINE(73)
		this->coinText->set_text(HX_CSTRING("x0"));
		HX_STACK_LINE(74)
		this->resetStats();
		HX_STACK_LINE(75)
		this->heldItemCount = (int)0;
		HX_STACK_LINE(76)
		{
			HX_STACK_LINE(76)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(76)
			while((true)){
				HX_STACK_LINE(76)
				if ((!(((_g1 < (int)3))))){
					HX_STACK_LINE(76)
					break;
				}
				HX_STACK_LINE(76)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(78)
				if (((this->items->__get(i).StaticCast< ::gameobjects::items::Item >() != null()))){
					HX_STACK_LINE(80)
					this->items->__get(i).StaticCast< ::gameobjects::items::Item >()->kill();
					HX_STACK_LINE(81)
					this->items[i] = null();
				}
			}
		}
		HX_STACK_LINE(84)
		this->setInvulnerable((int)1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,restart,(void))

Void Player_obj::resetStats( ){
{
		HX_STACK_FRAME("gameobjects.Player","resetStats",0x36764551,"gameobjects.Player.resetStats","gameobjects/Player.hx",88,0x4f158170)
		HX_STACK_THIS(this)
		HX_STACK_LINE(89)
		this->movementSpeed = 1.6;
		HX_STACK_LINE(90)
		this->effectTimer = (int)0;
		HX_STACK_LINE(91)
		this->set_visible(true);
		HX_STACK_LINE(92)
		this->isEffectInPlace = false;
		HX_STACK_LINE(93)
		this->canKill = false;
		HX_STACK_LINE(94)
		if (((this->filter->filters->length > (int)0))){
			HX_STACK_LINE(96)
			this->filter->removeAllFilters(null());
		}
		HX_STACK_LINE(99)
		this->isVulnerable = true;
		HX_STACK_LINE(100)
		this->blink = false;
		HX_STACK_LINE(101)
		this->blinkTimer = (int)0;
		HX_STACK_LINE(103)
		{
			HX_STACK_LINE(103)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(103)
			int _g = this->items->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(103)
			while((true)){
				HX_STACK_LINE(103)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(103)
					break;
				}
				HX_STACK_LINE(103)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(105)
				if (((this->items->__get(i).StaticCast< ::gameobjects::items::Item >() != null()))){
					HX_STACK_LINE(107)
					if (((this->items->__get(i).StaticCast< ::gameobjects::items::Item >()->name == HX_CSTRING("Sword")))){
						HX_STACK_LINE(109)
						this->hasSword = true;
					}
					else{
						HX_STACK_LINE(111)
						if (((this->items->__get(i).StaticCast< ::gameobjects::items::Item >()->name == HX_CSTRING("Shoes")))){
							HX_STACK_LINE(113)
							hx::AddEq(this->movementSpeed,0.6);
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,resetStats,(void))

Void Player_obj::setMovementSpeed( Float time,Float value){
{
		HX_STACK_FRAME("gameobjects.Player","setMovementSpeed",0x24d09d17,"gameobjects.Player.setMovementSpeed","gameobjects/Player.hx",120,0x4f158170)
		HX_STACK_THIS(this)
		HX_STACK_ARG(time,"time")
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(121)
		this->isEffectInPlace = true;
		HX_STACK_LINE(122)
		this->effectTimer = time;
		HX_STACK_LINE(123)
		this->movementSpeed = value;
		HX_STACK_LINE(124)
		::openfl::_v2::filters::GlowFilter _g = ::openfl::_v2::filters::GlowFilter_obj::__new((int)-16711936,(int)1,(int)4,(int)4,(int)6,null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(124)
		this->glowFilter = _g;
		HX_STACK_LINE(125)
		this->filter->addFilter(this->glowFilter,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Player_obj,setMovementSpeed,(void))

Void Player_obj::setInvulnerable( Float time){
{
		HX_STACK_FRAME("gameobjects.Player","setInvulnerable",0x290ede8e,"gameobjects.Player.setInvulnerable","gameobjects/Player.hx",129,0x4f158170)
		HX_STACK_THIS(this)
		HX_STACK_ARG(time,"time")
		HX_STACK_LINE(130)
		this->isVulnerable = false;
		HX_STACK_LINE(131)
		this->isEffectInPlace = true;
		HX_STACK_LINE(132)
		this->effectTimer = time;
		HX_STACK_LINE(133)
		::openfl::_v2::filters::GlowFilter _g = ::openfl::_v2::filters::GlowFilter_obj::__new((int)-256,(int)1,(int)4,(int)4,(int)6,null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(133)
		this->glowFilter = _g;
		HX_STACK_LINE(134)
		this->filter->addFilter(this->glowFilter,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,setInvulnerable,(void))

Void Player_obj::setAllKilling( Float time){
{
		HX_STACK_FRAME("gameobjects.Player","setAllKilling",0x2d7ad644,"gameobjects.Player.setAllKilling","gameobjects/Player.hx",138,0x4f158170)
		HX_STACK_THIS(this)
		HX_STACK_ARG(time,"time")
		HX_STACK_LINE(139)
		this->isEffectInPlace = true;
		HX_STACK_LINE(140)
		this->effectTimer = time;
		HX_STACK_LINE(141)
		this->canKill = true;
		HX_STACK_LINE(142)
		::openfl::_v2::filters::GlowFilter _g = ::openfl::_v2::filters::GlowFilter_obj::__new((int)-65536,(int)1,(int)4,(int)4,(int)6,null(),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(142)
		this->glowFilter = _g;
		HX_STACK_LINE(143)
		this->filter->addFilter(this->glowFilter,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,setAllKilling,(void))

Void Player_obj::killedEnemy( ){
{
		HX_STACK_FRAME("gameobjects.Player","killedEnemy",0x0ce8daea,"gameobjects.Player.killedEnemy","gameobjects/Player.hx",147,0x4f158170)
		HX_STACK_THIS(this)
		HX_STACK_LINE(148)
		bool usedSword = false;		HX_STACK_VAR(usedSword,"usedSword");
		HX_STACK_LINE(149)
		{
			HX_STACK_LINE(149)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(149)
			int _g = this->items->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(149)
			while((true)){
				HX_STACK_LINE(149)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(149)
					break;
				}
				HX_STACK_LINE(149)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(151)
				if (((bool((this->items->__get(i).StaticCast< ::gameobjects::items::Item >() != null())) && bool((this->items->__get(i).StaticCast< ::gameobjects::items::Item >()->name == HX_CSTRING("Sword")))))){
					HX_STACK_LINE(154)
					if ((!(usedSword))){
						HX_STACK_LINE(156)
						::gameobjects::items::Sword sword;		HX_STACK_VAR(sword,"sword");
						HX_STACK_LINE(156)
						sword = hx::TCast< gameobjects::items::Sword >::cast(this->items->__get(i).StaticCast< ::gameobjects::items::Item >());
						HX_STACK_LINE(157)
						(sword->uses)--;
						HX_STACK_LINE(158)
						if (((sword->uses <= (int)0))){
							HX_STACK_LINE(160)
							this->items->__get(i).StaticCast< ::gameobjects::items::Item >()->use();
							HX_STACK_LINE(161)
							this->items->__get(i).StaticCast< ::gameobjects::items::Item >()->kill();
							HX_STACK_LINE(162)
							this->items[i] = null();
							HX_STACK_LINE(163)
							usedSword = true;
							HX_STACK_LINE(164)
							this->hasSword = false;
							HX_STACK_LINE(165)
							(this->heldItemCount)--;
						}
					}
					else{
						HX_STACK_LINE(170)
						this->hasSword = true;
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,killedEnemy,(void))

Void Player_obj::removeLife( ){
{
		HX_STACK_FRAME("gameobjects.Player","removeLife",0x8ea0e2e1,"gameobjects.Player.removeLife","gameobjects/Player.hx",177,0x4f158170)
		HX_STACK_THIS(this)
		HX_STACK_LINE(178)
		(this->health)--;
		HX_STACK_LINE(179)
		this->healthTxt->set_text((HX_CSTRING("x") + this->health));
		HX_STACK_LINE(180)
		if (((this->health == (int)0))){
			HX_STACK_LINE(182)
			this->loadGraphic(HX_CSTRING("assets/images/tombstone.png"),null(),null(),null(),null(),null());
			HX_STACK_LINE(183)
			this->moved = true;
			HX_STACK_LINE(184)
			this->resetStats();
			HX_STACK_LINE(185)
			this->isVulnerable = false;
		}
		else{
			HX_STACK_LINE(189)
			::flixel::util::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(189)
			{
				HX_STACK_LINE(189)
				::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set((int)1,(int)1);		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(189)
				point->_inPool = false;
				HX_STACK_LINE(189)
				_g = point;
			}
			HX_STACK_LINE(189)
			::flixel::util::FlxPoint randPos = ::states::PlayState_obj::currentMap->getRandomEmptyTileNear(_g);		HX_STACK_VAR(randPos,"randPos");
			HX_STACK_LINE(190)
			this->setPosition((randPos->x * (int)16),(randPos->y * (int)16));
			HX_STACK_LINE(191)
			this->resetStats();
			HX_STACK_LINE(192)
			this->setInvulnerable((int)1);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,removeLife,(void))

Void Player_obj::addLife( ){
{
		HX_STACK_FRAME("gameobjects.Player","addLife",0xc5b8719c,"gameobjects.Player.addLife","gameobjects/Player.hx",196,0x4f158170)
		HX_STACK_THIS(this)
		HX_STACK_LINE(197)
		(this->health)++;
		HX_STACK_LINE(198)
		this->healthTxt->set_text((HX_CSTRING("x") + this->health));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,addLife,(void))

Void Player_obj::addCoin( int value){
{
		HX_STACK_FRAME("gameobjects.Player","addCoin",0xbfca1631,"gameobjects.Player.addCoin","gameobjects/Player.hx",202,0x4f158170)
		HX_STACK_THIS(this)
		HX_STACK_ARG(value,"value")
		HX_STACK_LINE(203)
		hx::AddEq(this->coinCount,value);
		HX_STACK_LINE(204)
		this->coinText->set_text((HX_CSTRING("x") + this->coinCount));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,addCoin,(void))

Void Player_obj::update( ){
{
		HX_STACK_FRAME("gameobjects.Player","update",0x4270090a,"gameobjects.Player.update","gameobjects/Player.hx",207,0x4f158170)
		HX_STACK_THIS(this)
		HX_STACK_LINE(208)
		this->super::update();
		HX_STACK_LINE(210)
		if (((bool(this->isEffectInPlace) && bool((this->effectTimer <= (int)0))))){
			HX_STACK_LINE(212)
			this->resetStats();
		}
		else{
			HX_STACK_LINE(214)
			if (((bool((bool(this->isEffectInPlace) && bool((this->effectTimer <= (int)1)))) && bool(!(this->blink))))){
				HX_STACK_LINE(216)
				this->blink = true;
			}
		}
		HX_STACK_LINE(218)
		if ((this->canKill)){
			HX_STACK_LINE(220)
			this->filter->applyFilters();
		}
		HX_STACK_LINE(222)
		if ((this->blink)){
			HX_STACK_LINE(224)
			hx::SubEq(this->blinkTimer,::flixel::FlxG_obj::elapsed);
			HX_STACK_LINE(225)
			if (((this->blinkTimer <= (int)0))){
				HX_STACK_LINE(227)
				this->set_visible(!(this->visible));
				HX_STACK_LINE(228)
				hx::AddEq(this->blinkTimer,this->blinkInterval);
			}
		}
		HX_STACK_LINE(232)
		if (((this->health > (int)0))){
			HX_STACK_LINE(235)
			bool movedX = false;		HX_STACK_VAR(movedX,"movedX");
			HX_STACK_LINE(236)
			bool movedY = false;		HX_STACK_VAR(movedY,"movedY");
			HX_STACK_LINE(238)
			::flixel::input::touch::FlxTouch _g = ::flixel::FlxG_obj::touches->getFirst();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(238)
			Float touchX;		HX_STACK_VAR(touchX,"touchX");
			HX_STACK_LINE(238)
			if (((_g != null()))){
				HX_STACK_LINE(238)
				touchX = ::flixel::FlxG_obj::touches->getFirst()->x;
			}
			else{
				HX_STACK_LINE(238)
				touchX = (Float(::flixel::FlxG_obj::width) / Float((int)2));
			}
			HX_STACK_LINE(239)
			::flixel::input::touch::FlxTouch _g1 = ::flixel::FlxG_obj::touches->getFirst();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(239)
			Float touchY;		HX_STACK_VAR(touchY,"touchY");
			HX_STACK_LINE(239)
			if (((_g1 != null()))){
				HX_STACK_LINE(239)
				touchY = ::flixel::FlxG_obj::touches->getFirst()->y;
			}
			else{
				HX_STACK_LINE(239)
				touchY = (Float(::flixel::FlxG_obj::height) / Float((int)2));
			}
			HX_STACK_LINE(242)
			if (((  ((!(::flixel::FlxG_obj::keys->checkStatus((int)37,::flixel::FlxG_obj::keys->pressed->checkStatus)))) ? bool((bool((touchX <= touchY)) && bool((touchX < (Float(::flixel::FlxG_obj::width) / Float((int)4)))))) : bool(true) ))){
				HX_STACK_LINE(244)
				{
					HX_STACK_LINE(244)
					::gameobjects::Player _g2 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(244)
					_g2->set_x((_g2->x - this->movementSpeed));
				}
				HX_STACK_LINE(245)
				movedX = true;
			}
			HX_STACK_LINE(247)
			if (((  ((!(::flixel::FlxG_obj::keys->checkStatus((int)39,::flixel::FlxG_obj::keys->pressed->checkStatus)))) ? bool((bool((touchX > touchY)) && bool((touchX > (::flixel::FlxG_obj::width - (Float(::flixel::FlxG_obj::width) / Float((int)4))))))) : bool(true) ))){
				HX_STACK_LINE(249)
				{
					HX_STACK_LINE(249)
					::gameobjects::Player _g2 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(249)
					_g2->set_x((_g2->x + this->movementSpeed));
				}
				HX_STACK_LINE(250)
				movedX = true;
			}
			HX_STACK_LINE(252)
			if (((  ((!(::flixel::FlxG_obj::keys->checkStatus((int)38,::flixel::FlxG_obj::keys->pressed->checkStatus)))) ? bool((bool((touchY <= touchX)) && bool((touchY < (Float(::flixel::FlxG_obj::height) / Float((int)4)))))) : bool(true) ))){
				HX_STACK_LINE(254)
				{
					HX_STACK_LINE(254)
					::gameobjects::Player _g2 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(254)
					_g2->set_y((_g2->y - this->movementSpeed));
				}
				HX_STACK_LINE(255)
				movedY = true;
			}
			HX_STACK_LINE(257)
			if (((  ((!(::flixel::FlxG_obj::keys->checkStatus((int)40,::flixel::FlxG_obj::keys->pressed->checkStatus)))) ? bool((bool((touchY > touchX)) && bool((touchY > (::flixel::FlxG_obj::height - (Float(::flixel::FlxG_obj::height) / Float((int)4))))))) : bool(true) ))){
				HX_STACK_LINE(259)
				{
					HX_STACK_LINE(259)
					::gameobjects::Player _g2 = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(259)
					_g2->set_y((_g2->y + this->movementSpeed));
				}
				HX_STACK_LINE(260)
				movedY = true;
			}
			HX_STACK_LINE(263)
			if ((!(movedX))){
				HX_STACK_LINE(265)
				int _g2 = ::Math_obj::round((Float(this->x) / Float((int)16)));		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(265)
				Float _g3 = ((Float(this->x) / Float((int)16)) - _g2);		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(265)
				Float _g4 = ::Math_obj::abs(_g3);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(265)
				if (((_g4 < 0.33))){
					HX_STACK_LINE(267)
					int _g5 = ::Math_obj::round((Float(this->x) / Float((int)16)));		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(267)
					int _g6 = (_g5 * (int)16);		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(267)
					this->set_x(_g6);
				}
			}
			HX_STACK_LINE(271)
			if ((!(movedY))){
				HX_STACK_LINE(274)
				int _g7 = ::Math_obj::round((Float(this->y) / Float((int)16)));		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(274)
				Float _g8 = ((Float(this->y) / Float((int)16)) - _g7);		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(274)
				Float _g9 = ::Math_obj::abs(_g8);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(274)
				if (((_g9 < 0.33))){
					HX_STACK_LINE(276)
					int _g10 = ::Math_obj::round((Float(this->y) / Float((int)16)));		HX_STACK_VAR(_g10,"_g10");
					HX_STACK_LINE(276)
					int _g11 = (_g10 * (int)16);		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(276)
					this->set_y(_g11);
				}
			}
			HX_STACK_LINE(279)
			this->moved = (bool(movedY) || bool(movedX));
			HX_STACK_LINE(281)
			if ((::flixel::FlxG_obj::keys->checkStatus((int)49,::flixel::FlxG_obj::keys->justPressed->checkStatus))){
				HX_STACK_LINE(283)
				if ((::flixel::FlxG_obj::keys->checkStatus((int)17,::flixel::FlxG_obj::keys->pressed->checkStatus))){
					HX_STACK_LINE(285)
					this->tryRemoveItem((int)0);
				}
				else{
					HX_STACK_LINE(289)
					this->tryUseItem((int)0);
				}
			}
			else{
				HX_STACK_LINE(292)
				if ((::flixel::FlxG_obj::keys->checkStatus((int)50,::flixel::FlxG_obj::keys->justPressed->checkStatus))){
					HX_STACK_LINE(293)
					if ((::flixel::FlxG_obj::keys->checkStatus((int)17,::flixel::FlxG_obj::keys->pressed->checkStatus))){
						HX_STACK_LINE(295)
						this->tryRemoveItem((int)1);
					}
					else{
						HX_STACK_LINE(299)
						this->tryUseItem((int)1);
					}
				}
				else{
					HX_STACK_LINE(301)
					if ((::flixel::FlxG_obj::keys->checkStatus((int)51,::flixel::FlxG_obj::keys->justPressed->checkStatus))){
						HX_STACK_LINE(302)
						if ((::flixel::FlxG_obj::keys->checkStatus((int)17,::flixel::FlxG_obj::keys->pressed->checkStatus))){
							HX_STACK_LINE(304)
							this->tryRemoveItem((int)2);
						}
						else{
							HX_STACK_LINE(308)
							this->tryUseItem((int)2);
						}
					}
				}
			}
			HX_STACK_LINE(311)
			if (((bool((this->effectTimer > (int)0)) && bool(this->moved)))){
				HX_STACK_LINE(313)
				hx::SubEq(this->effectTimer,::flixel::FlxG_obj::elapsed);
			}
		}
	}
return null();
}


Void Player_obj::tryRemoveItem( int index){
{
		HX_STACK_FRAME("gameobjects.Player","tryRemoveItem",0x7496b3b1,"gameobjects.Player.tryRemoveItem","gameobjects/Player.hx",320,0x4f158170)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(320)
		if (((this->items->__get(index).StaticCast< ::gameobjects::items::Item >() != null()))){
			HX_STACK_LINE(322)
			this->items->__get(index).StaticCast< ::gameobjects::items::Item >()->kill();
			HX_STACK_LINE(323)
			this->items[index] = null();
			HX_STACK_LINE(324)
			(this->heldItemCount)--;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,tryRemoveItem,(void))

Void Player_obj::tryUseItem( int index){
{
		HX_STACK_FRAME("gameobjects.Player","tryUseItem",0x05a21080,"gameobjects.Player.tryUseItem","gameobjects/Player.hx",329,0x4f158170)
		HX_STACK_THIS(this)
		HX_STACK_ARG(index,"index")
		HX_STACK_LINE(329)
		if (((bool((bool((this->items->__get(index).StaticCast< ::gameobjects::items::Item >() != null())) && bool(this->items->__get(index).StaticCast< ::gameobjects::items::Item >()->isUseOnce))) && bool(!(this->isEffectInPlace))))){
			HX_STACK_LINE(331)
			this->items->__get(index).StaticCast< ::gameobjects::items::Item >()->use();
			HX_STACK_LINE(332)
			this->items->__get(index).StaticCast< ::gameobjects::items::Item >()->kill();
			HX_STACK_LINE(333)
			this->items[index] = null();
			HX_STACK_LINE(334)
			(this->heldItemCount)--;
			HX_STACK_LINE(335)
			::flixel::FlxG_obj::sound->play(HX_CSTRING("assets/sounds/itemUse.wav"),null(),null(),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,tryUseItem,(void))

Void Player_obj::addItem( ::gameobjects::items::Item item){
{
		HX_STACK_FRAME("gameobjects.Player","addItem",0xc3c525b3,"gameobjects.Player.addItem","gameobjects/Player.hx",339,0x4f158170)
		HX_STACK_THIS(this)
		HX_STACK_ARG(item,"item")
		HX_STACK_LINE(340)
		if (((item->name == HX_CSTRING("Heart")))){
			HX_STACK_LINE(342)
			this->addLife();
			HX_STACK_LINE(343)
			item->kill();
		}
		else{
			HX_STACK_LINE(347)
			{
				HX_STACK_LINE(347)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(347)
				while((true)){
					HX_STACK_LINE(347)
					if ((!(((_g < (int)3))))){
						HX_STACK_LINE(347)
						break;
					}
					HX_STACK_LINE(347)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(349)
					if (((this->items->__get(i).StaticCast< ::gameobjects::items::Item >() == null()))){
						HX_STACK_LINE(351)
						this->items[i] = item;
						HX_STACK_LINE(352)
						this->items->__get(i).StaticCast< ::gameobjects::items::Item >()->setPosition((int)348,((int)112 + ((int)20 * i)));
						HX_STACK_LINE(353)
						break;
					}
				}
			}
			HX_STACK_LINE(356)
			(this->heldItemCount)++;
		}
		HX_STACK_LINE(358)
		if (((item->name == HX_CSTRING("Sword")))){
			HX_STACK_LINE(360)
			this->hasSword = true;
		}
		else{
			HX_STACK_LINE(362)
			if (((item->name == HX_CSTRING("Shoes")))){
				HX_STACK_LINE(364)
				hx::AddEq(this->movementSpeed,0.6);
			}
		}
		HX_STACK_LINE(366)
		hx::SubEq(this->coinCount,item->cost);
		HX_STACK_LINE(367)
		this->coinText->set_text((HX_CSTRING("x") + this->coinCount));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,addItem,(void))


Player_obj::Player_obj()
{
}

void Player_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Player);
	HX_MARK_MEMBER_NAME(movementSpeed,"movementSpeed");
	HX_MARK_MEMBER_NAME(heart,"heart");
	HX_MARK_MEMBER_NAME(healthTxt,"healthTxt");
	HX_MARK_MEMBER_NAME(coin,"coin");
	HX_MARK_MEMBER_NAME(coinCount,"coinCount");
	HX_MARK_MEMBER_NAME(coinText,"coinText");
	HX_MARK_MEMBER_NAME(isVulnerable,"isVulnerable");
	HX_MARK_MEMBER_NAME(blinkTimer,"blinkTimer");
	HX_MARK_MEMBER_NAME(blinkInterval,"blinkInterval");
	HX_MARK_MEMBER_NAME(blink,"blink");
	HX_MARK_MEMBER_NAME(canKill,"canKill");
	HX_MARK_MEMBER_NAME(hasSword,"hasSword");
	HX_MARK_MEMBER_NAME(isEffectInPlace,"isEffectInPlace");
	HX_MARK_MEMBER_NAME(effectTimer,"effectTimer");
	HX_MARK_MEMBER_NAME(filter,"filter");
	HX_MARK_MEMBER_NAME(glowFilter,"glowFilter");
	HX_MARK_MEMBER_NAME(items,"items");
	HX_MARK_MEMBER_NAME(heldItemCount,"heldItemCount");
	HX_MARK_MEMBER_NAME(moved,"moved");
	HX_MARK_MEMBER_NAME(justUsedStaff,"justUsedStaff");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Player_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(movementSpeed,"movementSpeed");
	HX_VISIT_MEMBER_NAME(heart,"heart");
	HX_VISIT_MEMBER_NAME(healthTxt,"healthTxt");
	HX_VISIT_MEMBER_NAME(coin,"coin");
	HX_VISIT_MEMBER_NAME(coinCount,"coinCount");
	HX_VISIT_MEMBER_NAME(coinText,"coinText");
	HX_VISIT_MEMBER_NAME(isVulnerable,"isVulnerable");
	HX_VISIT_MEMBER_NAME(blinkTimer,"blinkTimer");
	HX_VISIT_MEMBER_NAME(blinkInterval,"blinkInterval");
	HX_VISIT_MEMBER_NAME(blink,"blink");
	HX_VISIT_MEMBER_NAME(canKill,"canKill");
	HX_VISIT_MEMBER_NAME(hasSword,"hasSword");
	HX_VISIT_MEMBER_NAME(isEffectInPlace,"isEffectInPlace");
	HX_VISIT_MEMBER_NAME(effectTimer,"effectTimer");
	HX_VISIT_MEMBER_NAME(filter,"filter");
	HX_VISIT_MEMBER_NAME(glowFilter,"glowFilter");
	HX_VISIT_MEMBER_NAME(items,"items");
	HX_VISIT_MEMBER_NAME(heldItemCount,"heldItemCount");
	HX_VISIT_MEMBER_NAME(moved,"moved");
	HX_VISIT_MEMBER_NAME(justUsedStaff,"justUsedStaff");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Player_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"coin") ) { return coin; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"heart") ) { return heart; }
		if (HX_FIELD_EQ(inName,"blink") ) { return blink; }
		if (HX_FIELD_EQ(inName,"items") ) { return items; }
		if (HX_FIELD_EQ(inName,"moved") ) { return moved; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { return filter; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"canKill") ) { return canKill; }
		if (HX_FIELD_EQ(inName,"restart") ) { return restart_dyn(); }
		if (HX_FIELD_EQ(inName,"addLife") ) { return addLife_dyn(); }
		if (HX_FIELD_EQ(inName,"addCoin") ) { return addCoin_dyn(); }
		if (HX_FIELD_EQ(inName,"addItem") ) { return addItem_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"coinText") ) { return coinText; }
		if (HX_FIELD_EQ(inName,"hasSword") ) { return hasSword; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"healthTxt") ) { return healthTxt; }
		if (HX_FIELD_EQ(inName,"coinCount") ) { return coinCount; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"blinkTimer") ) { return blinkTimer; }
		if (HX_FIELD_EQ(inName,"glowFilter") ) { return glowFilter; }
		if (HX_FIELD_EQ(inName,"resetStats") ) { return resetStats_dyn(); }
		if (HX_FIELD_EQ(inName,"removeLife") ) { return removeLife_dyn(); }
		if (HX_FIELD_EQ(inName,"tryUseItem") ) { return tryUseItem_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"effectTimer") ) { return effectTimer; }
		if (HX_FIELD_EQ(inName,"killedEnemy") ) { return killedEnemy_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isVulnerable") ) { return isVulnerable; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"movementSpeed") ) { return movementSpeed; }
		if (HX_FIELD_EQ(inName,"blinkInterval") ) { return blinkInterval; }
		if (HX_FIELD_EQ(inName,"heldItemCount") ) { return heldItemCount; }
		if (HX_FIELD_EQ(inName,"justUsedStaff") ) { return justUsedStaff; }
		if (HX_FIELD_EQ(inName,"setAllKilling") ) { return setAllKilling_dyn(); }
		if (HX_FIELD_EQ(inName,"tryRemoveItem") ) { return tryRemoveItem_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"isEffectInPlace") ) { return isEffectInPlace; }
		if (HX_FIELD_EQ(inName,"setInvulnerable") ) { return setInvulnerable_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"setMovementSpeed") ) { return setMovementSpeed_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Player_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"coin") ) { coin=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"heart") ) { heart=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blink") ) { blink=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"items") ) { items=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"moved") ) { moved=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"filter") ) { filter=inValue.Cast< ::flixel::effects::FlxSpriteFilter >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"canKill") ) { canKill=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"coinText") ) { coinText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasSword") ) { hasSword=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"healthTxt") ) { healthTxt=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"coinCount") ) { coinCount=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"blinkTimer") ) { blinkTimer=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"glowFilter") ) { glowFilter=inValue.Cast< ::openfl::_v2::filters::GlowFilter >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"effectTimer") ) { effectTimer=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isVulnerable") ) { isVulnerable=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"movementSpeed") ) { movementSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blinkInterval") ) { blinkInterval=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"heldItemCount") ) { heldItemCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"justUsedStaff") ) { justUsedStaff=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"isEffectInPlace") ) { isEffectInPlace=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("movementSpeed"));
	outFields->push(HX_CSTRING("heart"));
	outFields->push(HX_CSTRING("healthTxt"));
	outFields->push(HX_CSTRING("coin"));
	outFields->push(HX_CSTRING("coinCount"));
	outFields->push(HX_CSTRING("coinText"));
	outFields->push(HX_CSTRING("isVulnerable"));
	outFields->push(HX_CSTRING("blinkTimer"));
	outFields->push(HX_CSTRING("blinkInterval"));
	outFields->push(HX_CSTRING("blink"));
	outFields->push(HX_CSTRING("canKill"));
	outFields->push(HX_CSTRING("hasSword"));
	outFields->push(HX_CSTRING("isEffectInPlace"));
	outFields->push(HX_CSTRING("effectTimer"));
	outFields->push(HX_CSTRING("filter"));
	outFields->push(HX_CSTRING("glowFilter"));
	outFields->push(HX_CSTRING("items"));
	outFields->push(HX_CSTRING("heldItemCount"));
	outFields->push(HX_CSTRING("moved"));
	outFields->push(HX_CSTRING("justUsedStaff"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Player_obj,movementSpeed),HX_CSTRING("movementSpeed")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(Player_obj,heart),HX_CSTRING("heart")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(Player_obj,healthTxt),HX_CSTRING("healthTxt")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(Player_obj,coin),HX_CSTRING("coin")},
	{hx::fsInt,(int)offsetof(Player_obj,coinCount),HX_CSTRING("coinCount")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(Player_obj,coinText),HX_CSTRING("coinText")},
	{hx::fsBool,(int)offsetof(Player_obj,isVulnerable),HX_CSTRING("isVulnerable")},
	{hx::fsFloat,(int)offsetof(Player_obj,blinkTimer),HX_CSTRING("blinkTimer")},
	{hx::fsFloat,(int)offsetof(Player_obj,blinkInterval),HX_CSTRING("blinkInterval")},
	{hx::fsBool,(int)offsetof(Player_obj,blink),HX_CSTRING("blink")},
	{hx::fsBool,(int)offsetof(Player_obj,canKill),HX_CSTRING("canKill")},
	{hx::fsBool,(int)offsetof(Player_obj,hasSword),HX_CSTRING("hasSword")},
	{hx::fsBool,(int)offsetof(Player_obj,isEffectInPlace),HX_CSTRING("isEffectInPlace")},
	{hx::fsFloat,(int)offsetof(Player_obj,effectTimer),HX_CSTRING("effectTimer")},
	{hx::fsObject /*::flixel::effects::FlxSpriteFilter*/ ,(int)offsetof(Player_obj,filter),HX_CSTRING("filter")},
	{hx::fsObject /*::openfl::_v2::filters::GlowFilter*/ ,(int)offsetof(Player_obj,glowFilter),HX_CSTRING("glowFilter")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Player_obj,items),HX_CSTRING("items")},
	{hx::fsInt,(int)offsetof(Player_obj,heldItemCount),HX_CSTRING("heldItemCount")},
	{hx::fsBool,(int)offsetof(Player_obj,moved),HX_CSTRING("moved")},
	{hx::fsBool,(int)offsetof(Player_obj,justUsedStaff),HX_CSTRING("justUsedStaff")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("movementSpeed"),
	HX_CSTRING("heart"),
	HX_CSTRING("healthTxt"),
	HX_CSTRING("coin"),
	HX_CSTRING("coinCount"),
	HX_CSTRING("coinText"),
	HX_CSTRING("isVulnerable"),
	HX_CSTRING("blinkTimer"),
	HX_CSTRING("blinkInterval"),
	HX_CSTRING("blink"),
	HX_CSTRING("canKill"),
	HX_CSTRING("hasSword"),
	HX_CSTRING("isEffectInPlace"),
	HX_CSTRING("effectTimer"),
	HX_CSTRING("filter"),
	HX_CSTRING("glowFilter"),
	HX_CSTRING("items"),
	HX_CSTRING("heldItemCount"),
	HX_CSTRING("moved"),
	HX_CSTRING("justUsedStaff"),
	HX_CSTRING("restart"),
	HX_CSTRING("resetStats"),
	HX_CSTRING("setMovementSpeed"),
	HX_CSTRING("setInvulnerable"),
	HX_CSTRING("setAllKilling"),
	HX_CSTRING("killedEnemy"),
	HX_CSTRING("removeLife"),
	HX_CSTRING("addLife"),
	HX_CSTRING("addCoin"),
	HX_CSTRING("update"),
	HX_CSTRING("tryRemoveItem"),
	HX_CSTRING("tryUseItem"),
	HX_CSTRING("addItem"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#endif

Class Player_obj::__mClass;

void Player_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("gameobjects.Player"), hx::TCanCast< Player_obj> ,sStaticFields,sMemberFields,
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

void Player_obj::__boot()
{
}

} // end namespace gameobjects
