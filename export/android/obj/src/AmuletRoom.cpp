#include <hxcpp.h>

#ifndef INCLUDED_AmuletRoom
#include <AmuletRoom.h>
#endif
#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_HighScoreIO
#include <HighScoreIO.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_gameobjects_Player
#include <gameobjects/Player.h>
#endif
#ifndef INCLUDED_gameobjects_items_Item
#include <gameobjects/items/Item.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
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
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif

Void AmuletRoom_obj::__construct()
{
HX_STACK_FRAME("AmuletRoom","new",0x9b0bc83f,"AmuletRoom.new","AmuletRoom.hx",12,0xc2b44411)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(27)
	this->pressInitials = false;
	HX_STACK_LINE(26)
	this->initials = HX_CSTRING("");
	HX_STACK_LINE(23)
	this->playerLeft = false;
	HX_STACK_LINE(22)
	this->playerHasYendor = false;
	HX_STACK_LINE(15)
	this->amuletRoom = Array_obj< int >::__new().Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)2).Add((int)2).Add((int)2).Add((int)1).Add((int)1).Add((int)2).Add((int)3).Add((int)2).Add((int)1).Add((int)1).Add((int)2).Add((int)2).Add((int)2).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)2).Add((int)1);
	HX_STACK_LINE(31)
	super::__construct();
	HX_STACK_LINE(32)
	::String _g = ::flixel::util::FlxStringUtil_obj::arrayToCSV(this->amuletRoom,(int)5,null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(32)
	this->loadMap(_g,HX_CSTRING("assets/images/map/amuletRoom.png"),(int)16,(int)16,(int)0,(int)1,(int)0,null());
	HX_STACK_LINE(33)
	this->setTileProperties((int)2,(int)0,null(),null(),null());
	HX_STACK_LINE(34)
	::gameobjects::items::Item _g1 = ::gameobjects::items::Item_obj::__new(HX_CSTRING("assets/images/items/yendor.png"));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(34)
	this->yendor = _g1;
	HX_STACK_LINE(35)
	::flixel::text::FlxText _g2 = ::flixel::text::FlxText_obj::__new((int)10,(int)32,(int)0,HX_CSTRING("Press (Space) to pick up \nthe amulet of yendor"),(int)16,null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(35)
	this->yendorText = _g2;
	HX_STACK_LINE(37)
	this->set_visible(false);
	HX_STACK_LINE(38)
	this->set_active(false);
	HX_STACK_LINE(39)
	this->yendor->set_visible(false);
	HX_STACK_LINE(40)
	this->yendorText->set_visible(false);
	HX_STACK_LINE(42)
	::flixel::text::FlxText _g3 = ::flixel::text::FlxText_obj::__new((int)16,(int)64,(int)0,HX_CSTRING("New Highscore!\n\nEnter your initials:\n"),(int)16,null());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(42)
	this->highScoreText = _g3;
	HX_STACK_LINE(43)
	this->highScoreText->set_visible(false);
}
;
	return null();
}

//AmuletRoom_obj::~AmuletRoom_obj() { }

Dynamic AmuletRoom_obj::__CreateEmpty() { return  new AmuletRoom_obj; }
hx::ObjectPtr< AmuletRoom_obj > AmuletRoom_obj::__new()
{  hx::ObjectPtr< AmuletRoom_obj > result = new AmuletRoom_obj();
	result->__construct();
	return result;}

Dynamic AmuletRoom_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AmuletRoom_obj > result = new AmuletRoom_obj();
	result->__construct();
	return result;}

Void AmuletRoom_obj::show( ){
{
		HX_STACK_FRAME("AmuletRoom","show",0x1293c03e,"AmuletRoom.show","AmuletRoom.hx",49,0xc2b44411)
		HX_STACK_THIS(this)
		HX_STACK_LINE(50)
		this->set_visible(true);
		HX_STACK_LINE(51)
		this->set_active(true);
		HX_STACK_LINE(52)
		this->yendor->set_visible(true);
		HX_STACK_LINE(54)
		int _g = ::Math_obj::round((Float(::states::PlayState_obj::player->x) / Float((int)16)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(54)
		int _g1 = (_g * (int)16);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(54)
		int _g2 = (_g1 - (int)48);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(54)
		this->set_x(_g2);
		HX_STACK_LINE(55)
		this->set_y((int)96);
		HX_STACK_LINE(56)
		::states::PlayState_obj::player->set_y((this->y + (int)48));
		HX_STACK_LINE(57)
		this->playerLeft = false;
		HX_STACK_LINE(58)
		this->yendor->set_x((this->x + (int)32));
		HX_STACK_LINE(59)
		this->yendor->set_y((this->y + (int)32));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(AmuletRoom_obj,show,(void))

Void AmuletRoom_obj::update( ){
{
		HX_STACK_FRAME("AmuletRoom","update",0x0fc8838a,"AmuletRoom.update","AmuletRoom.hx",62,0xc2b44411)
		HX_STACK_THIS(this)
		HX_STACK_LINE(63)
		this->super::update();
		HX_STACK_LINE(64)
		::flixel::FlxG_obj::overlap(::states::PlayState_obj::player,hx::ObjectPtr<OBJ_>(this),null(),::flixel::FlxObject_obj::separate_dyn());
		HX_STACK_LINE(65)
		if ((!(this->playerHasYendor))){
			HX_STACK_LINE(67)
			int _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(67)
			{
				HX_STACK_LINE(67)
				::flixel::FlxSprite SpriteA = this->yendor;		HX_STACK_VAR(SpriteA,"SpriteA");
				HX_STACK_LINE(67)
				::flixel::FlxSprite SpriteB = ::states::PlayState_obj::player;		HX_STACK_VAR(SpriteB,"SpriteB");
				HX_STACK_LINE(67)
				Float dx = ((SpriteA->x + SpriteA->origin->x) - ((SpriteB->x + SpriteB->origin->x)));		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(67)
				Float dy = ((SpriteA->y + SpriteA->origin->y) - ((SpriteB->y + SpriteB->origin->y)));		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(67)
				Float _g = ::Math_obj::sqrt(((dx * dx) + (dy * dy)));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(67)
				_g1 = ::Std_obj::_int(_g);
			}
			HX_STACK_LINE(67)
			if (((_g1 < (int)20))){
				HX_STACK_LINE(69)
				this->yendorText->set_visible(true);
				HX_STACK_LINE(70)
				if ((::flixel::FlxG_obj::keys->checkStatus((int)32,::flixel::FlxG_obj::keys->justPressed->checkStatus))){
					HX_STACK_LINE(72)
					this->yendor->setPosition((int)330,(int)200);
					HX_STACK_LINE(73)
					this->playerHasYendor = true;
					HX_STACK_LINE(74)
					this->yendorText->set_visible(false);
					HX_STACK_LINE(75)
					::flixel::FlxG_obj::sound->play(HX_CSTRING("assets/sounds/yendor.wav"),0.5,null(),null(),null());
				}
			}
			HX_STACK_LINE(78)
			if (((::states::PlayState_obj::player->y > (this->y + (int)48)))){
				HX_STACK_LINE(80)
				::states::PlayState_obj::player->set_y((this->y + (int)48));
			}
		}
		else{
			HX_STACK_LINE(83)
			if (((bool(!(this->playerLeft)) && bool(this->playerHasYendor)))){
				HX_STACK_LINE(85)
				::haxe::Log_obj::trace(HX_CSTRING("waiting for player"),hx::SourceInfo(HX_CSTRING("AmuletRoom.hx"),85,HX_CSTRING("AmuletRoom"),HX_CSTRING("update")));
				HX_STACK_LINE(86)
				if (((::states::PlayState_obj::player->y > (this->y + (int)64)))){
					HX_STACK_LINE(88)
					this->playerLeft = true;
					HX_STACK_LINE(89)
					this->set_visible(false);
					HX_STACK_LINE(90)
					this->yendor->set_visible(true);
					HX_STACK_LINE(91)
					::states::PlayState_obj::player->kill();
					HX_STACK_LINE(92)
					::states::PlayState_obj::addToScore((int)3000);
					HX_STACK_LINE(93)
					::states::PlayState_obj::addToScore((::states::PlayState_obj::player->coinCount * (int)10));
					HX_STACK_LINE(94)
					this->yendorText->set_visible(true);
					HX_STACK_LINE(95)
					this->yendorText->set_text(HX_CSTRING("Congratulations! \nYou won the game!\nPress (Enter) to continue"));
				}
				else{
					HX_STACK_LINE(99)
					::flixel::FlxG_obj::camera->shake(0.02,null(),null(),null(),null());
				}
			}
			else{
				HX_STACK_LINE(102)
				if (((bool(this->playerLeft) && bool(!(this->pressInitials))))){
					HX_STACK_LINE(104)
					if ((::flixel::FlxG_obj::keys->checkStatus((int)13,::flixel::FlxG_obj::keys->justPressed->checkStatus))){
						HX_STACK_LINE(106)
						this->yendorText->set_visible(false);
						HX_STACK_LINE(107)
						if ((::HighScoreIO_obj::isHighScore(::states::PlayState_obj::score))){
							HX_STACK_LINE(109)
							this->pressInitials = true;
							HX_STACK_LINE(110)
							this->highScoreText->set_visible(true);
						}
						else{
							HX_STACK_LINE(114)
							::flixel::FlxState State = ::states::HighScoresState_obj::__new(null());		HX_STACK_VAR(State,"State");
							HX_STACK_LINE(114)
							::flixel::FlxG_obj::game->_requestedState = State;
						}
					}
				}
				else{
					HX_STACK_LINE(118)
					if ((this->pressInitials)){
						HX_STACK_LINE(120)
						if (((  (((this->initials.length > (int)0))) ? bool(::flixel::FlxG_obj::keys->checkStatus((int)8,::flixel::FlxG_obj::keys->justReleased->checkStatus)) : bool(false) ))){
							HX_STACK_LINE(122)
							::String _g2 = this->initials.substring((int)0,(this->initials.length - (int)1));		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(122)
							this->initials = _g2;
							HX_STACK_LINE(123)
							::String _g3 = this->highScoreText->get_text().substring((int)0,(this->highScoreText->get_text().length - (int)1));		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(123)
							this->highScoreText->set_text(_g3);
						}
						else{
							HX_STACK_LINE(125)
							if (((this->initials.length < (int)3))){
								HX_STACK_LINE(127)
								::EReg abc = ::EReg_obj::__new(HX_CSTRING("[A-Z]"),HX_CSTRING(""));		HX_STACK_VAR(abc,"abc");
								HX_STACK_LINE(128)
								::String newInitial = ::flixel::FlxG_obj::keys->firstJustReleased();		HX_STACK_VAR(newInitial,"newInitial");
								HX_STACK_LINE(129)
								if (((  (((newInitial.length == (int)1))) ? bool(abc->match(newInitial)) : bool(false) ))){
									HX_STACK_LINE(131)
									hx::AddEq(this->initials,newInitial);
									HX_STACK_LINE(132)
									{
										HX_STACK_LINE(132)
										::flixel::text::FlxText _g = this->highScoreText;		HX_STACK_VAR(_g,"_g");
										HX_STACK_LINE(132)
										::String _g4 = _g->get_text();		HX_STACK_VAR(_g4,"_g4");
										HX_STACK_LINE(132)
										::String _g5 = (_g4 + newInitial);		HX_STACK_VAR(_g5,"_g5");
										HX_STACK_LINE(132)
										_g->set_text(_g5);
									}
								}
							}
							else{
								HX_STACK_LINE(135)
								if (((  (((this->initials.length == (int)3))) ? bool(::flixel::FlxG_obj::keys->checkStatus((int)13,::flixel::FlxG_obj::keys->justPressed->checkStatus)) : bool(false) ))){
									HX_STACK_LINE(137)
									::HighScoreIO_obj::putScore(this->initials,(int)12,::states::PlayState_obj::score);
									HX_STACK_LINE(138)
									this->highScoreText->set_visible(false);
									HX_STACK_LINE(139)
									{
										HX_STACK_LINE(139)
										::flixel::FlxState State = ::states::HighScoresState_obj::__new(null());		HX_STACK_VAR(State,"State");
										HX_STACK_LINE(139)
										::flixel::FlxG_obj::game->_requestedState = State;
									}
								}
							}
						}
					}
				}
			}
		}
	}
return null();
}



AmuletRoom_obj::AmuletRoom_obj()
{
}

void AmuletRoom_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AmuletRoom);
	HX_MARK_MEMBER_NAME(yendor,"yendor");
	HX_MARK_MEMBER_NAME(amuletRoom,"amuletRoom");
	HX_MARK_MEMBER_NAME(yendorText,"yendorText");
	HX_MARK_MEMBER_NAME(playerHasYendor,"playerHasYendor");
	HX_MARK_MEMBER_NAME(playerLeft,"playerLeft");
	HX_MARK_MEMBER_NAME(highScoreText,"highScoreText");
	HX_MARK_MEMBER_NAME(initials,"initials");
	HX_MARK_MEMBER_NAME(pressInitials,"pressInitials");
	::flixel::tile::FlxTilemap_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void AmuletRoom_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(yendor,"yendor");
	HX_VISIT_MEMBER_NAME(amuletRoom,"amuletRoom");
	HX_VISIT_MEMBER_NAME(yendorText,"yendorText");
	HX_VISIT_MEMBER_NAME(playerHasYendor,"playerHasYendor");
	HX_VISIT_MEMBER_NAME(playerLeft,"playerLeft");
	HX_VISIT_MEMBER_NAME(highScoreText,"highScoreText");
	HX_VISIT_MEMBER_NAME(initials,"initials");
	HX_VISIT_MEMBER_NAME(pressInitials,"pressInitials");
	::flixel::tile::FlxTilemap_obj::__Visit(HX_VISIT_ARG);
}

Dynamic AmuletRoom_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"show") ) { return show_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"yendor") ) { return yendor; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"initials") ) { return initials; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"amuletRoom") ) { return amuletRoom; }
		if (HX_FIELD_EQ(inName,"yendorText") ) { return yendorText; }
		if (HX_FIELD_EQ(inName,"playerLeft") ) { return playerLeft; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"highScoreText") ) { return highScoreText; }
		if (HX_FIELD_EQ(inName,"pressInitials") ) { return pressInitials; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"playerHasYendor") ) { return playerHasYendor; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AmuletRoom_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"yendor") ) { yendor=inValue.Cast< ::gameobjects::items::Item >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"initials") ) { initials=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"amuletRoom") ) { amuletRoom=inValue.Cast< Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yendorText") ) { yendorText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"playerLeft") ) { playerLeft=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"highScoreText") ) { highScoreText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pressInitials") ) { pressInitials=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"playerHasYendor") ) { playerHasYendor=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AmuletRoom_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("yendor"));
	outFields->push(HX_CSTRING("amuletRoom"));
	outFields->push(HX_CSTRING("yendorText"));
	outFields->push(HX_CSTRING("playerHasYendor"));
	outFields->push(HX_CSTRING("playerLeft"));
	outFields->push(HX_CSTRING("highScoreText"));
	outFields->push(HX_CSTRING("initials"));
	outFields->push(HX_CSTRING("pressInitials"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::gameobjects::items::Item*/ ,(int)offsetof(AmuletRoom_obj,yendor),HX_CSTRING("yendor")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(AmuletRoom_obj,amuletRoom),HX_CSTRING("amuletRoom")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(AmuletRoom_obj,yendorText),HX_CSTRING("yendorText")},
	{hx::fsBool,(int)offsetof(AmuletRoom_obj,playerHasYendor),HX_CSTRING("playerHasYendor")},
	{hx::fsBool,(int)offsetof(AmuletRoom_obj,playerLeft),HX_CSTRING("playerLeft")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(AmuletRoom_obj,highScoreText),HX_CSTRING("highScoreText")},
	{hx::fsString,(int)offsetof(AmuletRoom_obj,initials),HX_CSTRING("initials")},
	{hx::fsBool,(int)offsetof(AmuletRoom_obj,pressInitials),HX_CSTRING("pressInitials")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("yendor"),
	HX_CSTRING("amuletRoom"),
	HX_CSTRING("yendorText"),
	HX_CSTRING("playerHasYendor"),
	HX_CSTRING("playerLeft"),
	HX_CSTRING("highScoreText"),
	HX_CSTRING("initials"),
	HX_CSTRING("pressInitials"),
	HX_CSTRING("show"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AmuletRoom_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AmuletRoom_obj::__mClass,"__mClass");
};

#endif

Class AmuletRoom_obj::__mClass;

void AmuletRoom_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("AmuletRoom"), hx::TCanCast< AmuletRoom_obj> ,sStaticFields,sMemberFields,
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

void AmuletRoom_obj::__boot()
{
}

