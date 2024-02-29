#include <hxcpp.h>

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
#ifndef INCLUDED_flixel_tile_FlxTilemap
#include <flixel/tile/FlxTilemap.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_gameobjects_Player
#include <gameobjects/Player.h>
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
#ifndef INCLUDED_states_HowToPlayState
#include <states/HowToPlayState.h>
#endif
#ifndef INCLUDED_states_MenuState
#include <states/MenuState.h>
#endif
namespace states{

Void HowToPlayState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("states.HowToPlayState","new",0xf0695e90,"states.HowToPlayState.new","states/HowToPlayState.hx",14,0x2a6d91bf)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(32)
	this->pageIndex = (int)0;
	HX_STACK_LINE(25)
	this->exampleTiles = Array_obj< int >::__new().Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)1).Add((int)1).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)1).Add((int)1).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)1).Add((int)1).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1);
	HX_STACK_LINE(14)
	super::__construct(MaxSize);
}
;
	return null();
}

//HowToPlayState_obj::~HowToPlayState_obj() { }

Dynamic HowToPlayState_obj::__CreateEmpty() { return  new HowToPlayState_obj; }
hx::ObjectPtr< HowToPlayState_obj > HowToPlayState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< HowToPlayState_obj > result = new HowToPlayState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic HowToPlayState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HowToPlayState_obj > result = new HowToPlayState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void HowToPlayState_obj::create( ){
{
		HX_STACK_FRAME("states.HowToPlayState","create",0x0320d6cc,"states.HowToPlayState.create","states/HowToPlayState.hx",35,0x2a6d91bf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(36)
		this->super::create();
		HX_STACK_LINE(37)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(37)
		this->pages = _g;
		HX_STACK_LINE(38)
		::flixel::text::FlxText _g1 = ::flixel::text::FlxText_obj::__new((int)10,(int)10,(int)0,HX_CSTRING("How to play"),(int)30,null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(38)
		this->add(_g1);
		HX_STACK_LINE(39)
		::flixel::text::FlxText _g2 = ::flixel::text::FlxText_obj::__new((int)10,(int)300,(int)0,HX_CSTRING("Press (Enter) to continue"),null(),null());		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(39)
		this->continueText = _g2;
		HX_STACK_LINE(40)
		::flixel::text::FlxText _g3 = ::flixel::text::FlxText_obj::__new((int)0,(int)0,(int)0,HX_CSTRING("Correct"),(int)16,null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(40)
		this->correct = _g3;
		HX_STACK_LINE(41)
		this->correct->set_color((int)-16744448);
		HX_STACK_LINE(42)
		this->correct->set_visible(false);
		HX_STACK_LINE(51)
		this->createPage1();
		HX_STACK_LINE(52)
		this->createPage2();
		HX_STACK_LINE(53)
		this->pages->__get((int)0).StaticCast< ::flixel::group::FlxGroup >()->set_visible(true);
	}
return null();
}


Void HowToPlayState_obj::createPage1( ){
{
		HX_STACK_FRAME("states.HowToPlayState","createPage1",0xe95fa096,"states.HowToPlayState.createPage1","states/HowToPlayState.hx",57,0x2a6d91bf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(58)
		this->pages[(int)0] = ::flixel::group::FlxGroup_obj::__new(null());
		HX_STACK_LINE(60)
		::flixel::text::FlxText _g = ::flixel::text::FlxText_obj::__new((int)10,(int)50,(int)0,HX_CSTRING("Rogueman is a semi-turnbased(Enemies move when you move) roguelike \ninspired by both traditional roguelikes and old arcade games"),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(60)
		this->pages->__get((int)0).StaticCast< ::flixel::group::FlxGroup >()->add(_g);
		HX_STACK_LINE(65)
		::flixel::text::FlxText _g1 = ::flixel::text::FlxText_obj::__new((int)160,(int)100,(int)0,HX_CSTRING("Move the character by touching the sides of the screen \nand get to the next floor by pressing (Space)\nwhile standing close to the stairway\nto get to the next floor"),null(),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(65)
		this->pages->__get((int)0).StaticCast< ::flixel::group::FlxGroup >()->add(_g1);
		HX_STACK_LINE(67)
		::gameobjects::Player _g2 = ::gameobjects::Player_obj::__new();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(67)
		this->player1 = _g2;
		HX_STACK_LINE(69)
		::flixel::tile::FlxTilemap _g3 = ::flixel::tile::FlxTilemap_obj::__new();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(69)
		this->exampleTileMap = _g3;
		HX_STACK_LINE(70)
		::String _g4 = ::flixel::util::FlxStringUtil_obj::arrayToCSV(this->exampleTiles,(int)9,null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(70)
		this->exampleTileMap->loadMap(_g4,HX_CSTRING("assets/images/map/blocksCastle.png"),(int)16,(int)16,(int)0,(int)1,(int)0,null());
		HX_STACK_LINE(71)
		this->exampleTileMap->setTileProperties((int)2,(int)0,null(),null(),null());
		HX_STACK_LINE(72)
		this->exampleTileMap->set_x((int)16);
		HX_STACK_LINE(73)
		this->exampleTileMap->set_y((int)96);
		HX_STACK_LINE(74)
		this->player1->set_x((this->exampleTileMap->x + (int)16));
		HX_STACK_LINE(75)
		this->player1->set_y((this->exampleTileMap->y + (int)32));
		HX_STACK_LINE(76)
		this->player1->resetStats();
		HX_STACK_LINE(77)
		this->pages->__get((int)0).StaticCast< ::flixel::group::FlxGroup >()->add(this->exampleTileMap);
		HX_STACK_LINE(78)
		::flixel::FlxSprite _g5 = ::flixel::FlxSprite_obj::__new((this->exampleTileMap->x + (int)48),(this->exampleTileMap->y + (int)16),HX_CSTRING("assets/images/map/stairway.png"));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(78)
		this->stairway = _g5;
		HX_STACK_LINE(79)
		this->pages->__get((int)0).StaticCast< ::flixel::group::FlxGroup >()->add(this->stairway);
		HX_STACK_LINE(80)
		this->pages->__get((int)0).StaticCast< ::flixel::group::FlxGroup >()->add(this->player1);
		HX_STACK_LINE(81)
		::flixel::text::FlxText _g6 = ::flixel::text::FlxText_obj::__new((int)10,(int)200,(int)0,HX_CSTRING("Win the game by retrieving the amulet of yendor found on the 11th floor"),null(),null());		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(81)
		this->pages->__get((int)0).StaticCast< ::flixel::group::FlxGroup >()->add(_g6);
		HX_STACK_LINE(82)
		this->pages->__get((int)0).StaticCast< ::flixel::group::FlxGroup >()->add(this->correct);
		HX_STACK_LINE(83)
		this->add(this->pages->__get((int)0).StaticCast< ::flixel::group::FlxGroup >());
		HX_STACK_LINE(85)
		this->pages->__get((int)0).StaticCast< ::flixel::group::FlxGroup >()->set_visible(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(HowToPlayState_obj,createPage1,(void))

Void HowToPlayState_obj::createPage2( ){
{
		HX_STACK_FRAME("states.HowToPlayState","createPage2",0xe95fa097,"states.HowToPlayState.createPage2","states/HowToPlayState.hx",90,0x2a6d91bf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(91)
		this->pages[(int)1] = ::flixel::group::FlxGroup_obj::__new(null());
		HX_STACK_LINE(93)
		::flixel::text::FlxText _g = ::flixel::text::FlxText_obj::__new((int)10,(int)50,(int)0,HX_CSTRING("Each floor is inhabited by enemies that kill you on touch\nAnalyze their move pattern to get past them"),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(93)
		this->pages->__get((int)1).StaticCast< ::flixel::group::FlxGroup >()->add(_g);
		HX_STACK_LINE(94)
		::flixel::FlxSprite _g1 = ::flixel::FlxSprite_obj::__new((int)10,(int)80,HX_CSTRING("assets/images/enemies/slime.png"));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(94)
		this->pages->__get((int)1).StaticCast< ::flixel::group::FlxGroup >()->add(_g1);
		HX_STACK_LINE(95)
		::flixel::FlxSprite _g2 = ::flixel::FlxSprite_obj::__new((int)36,(int)80,HX_CSTRING("assets/images/enemies/thief.png"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(95)
		this->pages->__get((int)1).StaticCast< ::flixel::group::FlxGroup >()->add(_g2);
		HX_STACK_LINE(96)
		::flixel::text::FlxText _g3 = ::flixel::text::FlxText_obj::__new((int)10,(int)100,(int)0,HX_CSTRING("Every floor also contains coins, which can be used to buy \nitems in the shops found between floors"),null(),null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(96)
		this->pages->__get((int)1).StaticCast< ::flixel::group::FlxGroup >()->add(_g3);
		HX_STACK_LINE(97)
		::flixel::FlxSprite _g4 = ::flixel::FlxSprite_obj::__new((int)10,(int)130,HX_CSTRING("assets/images/map/coin.png"));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(97)
		this->pages->__get((int)1).StaticCast< ::flixel::group::FlxGroup >()->add(_g4);
		HX_STACK_LINE(98)
		::flixel::FlxSprite _g5 = ::flixel::FlxSprite_obj::__new((int)36,(int)130,HX_CSTRING("assets/images/map/sack.png"));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(98)
		this->pages->__get((int)1).StaticCast< ::flixel::group::FlxGroup >()->add(_g5);
		HX_STACK_LINE(99)
		::flixel::text::FlxText _g6 = ::flixel::text::FlxText_obj::__new((int)10,(int)150,(int)0,HX_CSTRING("Shops offer a random selection of items that ranges from \none time use items to equipped items\nTo get a new selection of items in the next encounted shop, \nitems must be either deleted using (Delete) or bought using (Space)"),null(),null());		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(99)
		this->pages->__get((int)1).StaticCast< ::flixel::group::FlxGroup >()->add(_g6);
		HX_STACK_LINE(100)
		::flixel::FlxSprite _g7 = ::flixel::FlxSprite_obj::__new((int)10,(int)200,HX_CSTRING("assets/images/items/wand.png"));		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(100)
		this->pages->__get((int)1).StaticCast< ::flixel::group::FlxGroup >()->add(_g7);
		HX_STACK_LINE(101)
		::flixel::FlxSprite _g8 = ::flixel::FlxSprite_obj::__new((int)36,(int)200,HX_CSTRING("assets/images/items/movePotion.png"));		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(101)
		this->pages->__get((int)1).StaticCast< ::flixel::group::FlxGroup >()->add(_g8);
		HX_STACK_LINE(102)
		::flixel::FlxSprite _g9 = ::flixel::FlxSprite_obj::__new((int)62,(int)200,HX_CSTRING("assets/images/items/sword.png"));		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(102)
		this->pages->__get((int)1).StaticCast< ::flixel::group::FlxGroup >()->add(_g9);
		HX_STACK_LINE(103)
		::flixel::text::FlxText _g10 = ::flixel::text::FlxText_obj::__new((int)10,(int)220,(int)0,HX_CSTRING("Use items using (1),(2) or (3) - Remove an item with (Ctrl)+(1),(2) or (3)"),null(),null());		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(103)
		this->pages->__get((int)1).StaticCast< ::flixel::group::FlxGroup >()->add(_g10);
		HX_STACK_LINE(104)
		this->pages->__get((int)1).StaticCast< ::flixel::group::FlxGroup >()->set_visible(false);
		HX_STACK_LINE(105)
		this->add(this->pages->__get((int)1).StaticCast< ::flixel::group::FlxGroup >());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(HowToPlayState_obj,createPage2,(void))

Void HowToPlayState_obj::update( ){
{
		HX_STACK_FRAME("states.HowToPlayState","update",0x0e16f5d9,"states.HowToPlayState.update","states/HowToPlayState.hx",111,0x2a6d91bf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(112)
		this->super::update();
		HX_STACK_LINE(113)
		if (((this->pageIndex == (int)0))){
			HX_STACK_LINE(115)
			::flixel::FlxG_obj::overlap(this->player1,this->exampleTileMap,null(),::flixel::FlxObject_obj::separate_dyn());
			HX_STACK_LINE(116)
			if (((  ((::flixel::FlxG_obj::keys->checkStatus((int)32,::flixel::FlxG_obj::keys->justReleased->checkStatus))) ? bool(::flixel::FlxG_obj::overlap(this->player1,this->stairway,null(),null())) : bool(false) ))){
				HX_STACK_LINE(118)
				this->correct->set_visible(true);
				HX_STACK_LINE(119)
				this->correct->set_x((int)160);
				HX_STACK_LINE(120)
				this->correct->set_y((int)150);
			}
		}
		HX_STACK_LINE(124)
		if ((::flixel::FlxG_obj::keys->checkStatus((int)13,::flixel::FlxG_obj::keys->justReleased->checkStatus))){
			HX_STACK_LINE(126)
			this->pages->__get(this->pageIndex).StaticCast< ::flixel::group::FlxGroup >()->set_visible(false);
			HX_STACK_LINE(127)
			(this->pageIndex)++;
			HX_STACK_LINE(128)
			if (((this->pageIndex < this->pages->length))){
				HX_STACK_LINE(130)
				this->pages->__get(this->pageIndex).StaticCast< ::flixel::group::FlxGroup >()->set_visible(true);
				HX_STACK_LINE(131)
				if (((this->pageIndex == (this->pages->length - (int)1)))){
					HX_STACK_LINE(133)
					this->continueText->set_text(HX_CSTRING("Press (Enter) to exit"));
				}
			}
			else{
				HX_STACK_LINE(138)
				::flixel::FlxState State = ::states::MenuState_obj::__new(null());		HX_STACK_VAR(State,"State");
				HX_STACK_LINE(138)
				::flixel::FlxG_obj::game->_requestedState = State;
			}
		}
	}
return null();
}



HowToPlayState_obj::HowToPlayState_obj()
{
}

void HowToPlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(HowToPlayState);
	HX_MARK_MEMBER_NAME(continueText,"continueText");
	HX_MARK_MEMBER_NAME(pages,"pages");
	HX_MARK_MEMBER_NAME(correct,"correct");
	HX_MARK_MEMBER_NAME(stairway,"stairway");
	HX_MARK_MEMBER_NAME(player1,"player1");
	HX_MARK_MEMBER_NAME(exampleTileMap,"exampleTileMap");
	HX_MARK_MEMBER_NAME(exampleTiles,"exampleTiles");
	HX_MARK_MEMBER_NAME(pageIndex,"pageIndex");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void HowToPlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(continueText,"continueText");
	HX_VISIT_MEMBER_NAME(pages,"pages");
	HX_VISIT_MEMBER_NAME(correct,"correct");
	HX_VISIT_MEMBER_NAME(stairway,"stairway");
	HX_VISIT_MEMBER_NAME(player1,"player1");
	HX_VISIT_MEMBER_NAME(exampleTileMap,"exampleTileMap");
	HX_VISIT_MEMBER_NAME(exampleTiles,"exampleTiles");
	HX_VISIT_MEMBER_NAME(pageIndex,"pageIndex");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic HowToPlayState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"pages") ) { return pages; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"correct") ) { return correct; }
		if (HX_FIELD_EQ(inName,"player1") ) { return player1; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"stairway") ) { return stairway; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pageIndex") ) { return pageIndex; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"createPage1") ) { return createPage1_dyn(); }
		if (HX_FIELD_EQ(inName,"createPage2") ) { return createPage2_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"continueText") ) { return continueText; }
		if (HX_FIELD_EQ(inName,"exampleTiles") ) { return exampleTiles; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"exampleTileMap") ) { return exampleTileMap; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HowToPlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"pages") ) { pages=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"correct") ) { correct=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"player1") ) { player1=inValue.Cast< ::gameobjects::Player >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"stairway") ) { stairway=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"pageIndex") ) { pageIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"continueText") ) { continueText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"exampleTiles") ) { exampleTiles=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"exampleTileMap") ) { exampleTileMap=inValue.Cast< ::flixel::tile::FlxTilemap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HowToPlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("continueText"));
	outFields->push(HX_CSTRING("pages"));
	outFields->push(HX_CSTRING("correct"));
	outFields->push(HX_CSTRING("stairway"));
	outFields->push(HX_CSTRING("player1"));
	outFields->push(HX_CSTRING("exampleTileMap"));
	outFields->push(HX_CSTRING("exampleTiles"));
	outFields->push(HX_CSTRING("pageIndex"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(HowToPlayState_obj,continueText),HX_CSTRING("continueText")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(HowToPlayState_obj,pages),HX_CSTRING("pages")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(HowToPlayState_obj,correct),HX_CSTRING("correct")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(HowToPlayState_obj,stairway),HX_CSTRING("stairway")},
	{hx::fsObject /*::gameobjects::Player*/ ,(int)offsetof(HowToPlayState_obj,player1),HX_CSTRING("player1")},
	{hx::fsObject /*::flixel::tile::FlxTilemap*/ ,(int)offsetof(HowToPlayState_obj,exampleTileMap),HX_CSTRING("exampleTileMap")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(HowToPlayState_obj,exampleTiles),HX_CSTRING("exampleTiles")},
	{hx::fsInt,(int)offsetof(HowToPlayState_obj,pageIndex),HX_CSTRING("pageIndex")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("continueText"),
	HX_CSTRING("pages"),
	HX_CSTRING("correct"),
	HX_CSTRING("stairway"),
	HX_CSTRING("player1"),
	HX_CSTRING("exampleTileMap"),
	HX_CSTRING("exampleTiles"),
	HX_CSTRING("pageIndex"),
	HX_CSTRING("create"),
	HX_CSTRING("createPage1"),
	HX_CSTRING("createPage2"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HowToPlayState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HowToPlayState_obj::__mClass,"__mClass");
};

#endif

Class HowToPlayState_obj::__mClass;

void HowToPlayState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("states.HowToPlayState"), hx::TCanCast< HowToPlayState_obj> ,sStaticFields,sMemberFields,
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

void HowToPlayState_obj::__boot()
{
}

} // end namespace states
