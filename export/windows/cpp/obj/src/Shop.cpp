#include <hxcpp.h>

#ifndef INCLUDED_Shop
#include <Shop.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
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
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_gameobjects_Player
#include <gameobjects/Player.h>
#endif
#ifndef INCLUDED_gameobjects_items_Heart
#include <gameobjects/items/Heart.h>
#endif
#ifndef INCLUDED_gameobjects_items_Item
#include <gameobjects/items/Item.h>
#endif
#ifndef INCLUDED_gameobjects_items_KillPotion
#include <gameobjects/items/KillPotion.h>
#endif
#ifndef INCLUDED_gameobjects_items_MovePotion
#include <gameobjects/items/MovePotion.h>
#endif
#ifndef INCLUDED_gameobjects_items_Shoes
#include <gameobjects/items/Shoes.h>
#endif
#ifndef INCLUDED_gameobjects_items_Sword
#include <gameobjects/items/Sword.h>
#endif
#ifndef INCLUDED_gameobjects_items_Wand
#include <gameobjects/items/Wand.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif

Void Shop_obj::__construct()
{
HX_STACK_FRAME("Shop","new",0x6d4ce508,"Shop.new","Shop.hx",14,0x44389368)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(90)
	this->showItemDesc = false;
	HX_STACK_LINE(17)
	this->layout = Array_obj< int >::__new().Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)2).Add((int)3).Add((int)2).Add((int)2).Add((int)3).Add((int)2).Add((int)2).Add((int)3).Add((int)2).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)2).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1).Add((int)1);
	HX_STACK_LINE(30)
	super::__construct();
	HX_STACK_LINE(31)
	::String _g = ::flixel::util::FlxStringUtil_obj::arrayToCSV(this->layout,(int)19,null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(31)
	this->loadMap(_g,HX_CSTRING("assets/images/map/blocksCastle.png"),(int)16,(int)16,(int)0,(int)1,null(),null());
	HX_STACK_LINE(32)
	this->setTileProperties((int)2,(int)0,null(),null(),null());
	HX_STACK_LINE(33)
	this->set_x((int)0);
	HX_STACK_LINE(34)
	this->set_y((int)160);
	HX_STACK_LINE(35)
	::flixel::text::FlxText _g1 = ::flixel::text::FlxText_obj::__new((int)8,(int)64,null(),null(),null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(35)
	this->itemDescText = _g1;
	HX_STACK_LINE(36)
	this->itemDescText->set_visible(false);
	HX_STACK_LINE(37)
	Array< ::Dynamic > _g2 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(37)
	this->items = _g2;
	HX_STACK_LINE(38)
	::flixel::text::FlxText _g3 = ::flixel::text::FlxText_obj::__new((int)8,(int)128,(int)0,HX_CSTRING("Inventory full - Remove with (CTRL)+(NUM)"),null(),null());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(38)
	this->noSpace = _g3;
	HX_STACK_LINE(39)
	this->noSpace->set_visible(false);
}
;
	return null();
}

//Shop_obj::~Shop_obj() { }

Dynamic Shop_obj::__CreateEmpty() { return  new Shop_obj; }
hx::ObjectPtr< Shop_obj > Shop_obj::__new()
{  hx::ObjectPtr< Shop_obj > result = new Shop_obj();
	result->__construct();
	return result;}

Dynamic Shop_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Shop_obj > result = new Shop_obj();
	result->__construct();
	return result;}

Void Shop_obj::restock( int depth){
{
		HX_STACK_FRAME("Shop","restock",0x0714e2eb,"Shop.restock","Shop.hx",43,0x44389368)
		HX_STACK_THIS(this)
		HX_STACK_ARG(depth,"depth")
		HX_STACK_LINE(44)
		{
			HX_STACK_LINE(44)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(44)
			while((true)){
				HX_STACK_LINE(44)
				if ((!(((_g < (int)3))))){
					HX_STACK_LINE(44)
					break;
				}
				HX_STACK_LINE(44)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(46)
				if (((this->items->__get(i).StaticCast< ::gameobjects::items::Item >() == null()))){
					HX_STACK_LINE(48)
					this->items[i] = this->getRandomItem(depth);
					HX_STACK_LINE(49)
					this->items->__get(i).StaticCast< ::gameobjects::items::Item >()->setPosition(((this->x + (int)96) + (i * (int)48)),(this->y + (int)16));
					HX_STACK_LINE(50)
					this->items->__get(i).StaticCast< ::gameobjects::items::Item >()->depthAdded = depth;
				}
				else{
					HX_STACK_LINE(54)
					this->items->__get(i).StaticCast< ::gameobjects::items::Item >()->revive();
				}
			}
		}
		HX_STACK_LINE(57)
		this->itemDescText->set_visible(true);
		HX_STACK_LINE(58)
		::states::PlayState_obj::stairway->setPosition((this->x + (int)272),(this->y + (int)48));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Shop_obj,restock,(void))

::gameobjects::items::Item Shop_obj::getRandomItem( int depth){
	HX_STACK_FRAME("Shop","getRandomItem",0xc297a394,"Shop.getRandomItem","Shop.hx",62,0x44389368)
	HX_STACK_THIS(this)
	HX_STACK_ARG(depth,"depth")
	HX_STACK_LINE(63)
	int randIndex = ::flixel::util::FlxRandom_obj::intRanged((int)0,(int)5,null());		HX_STACK_VAR(randIndex,"randIndex");
	HX_STACK_LINE(64)
	switch( (int)(randIndex)){
		case (int)0: {
			HX_STACK_LINE(66)
			return ::gameobjects::items::KillPotion_obj::__new();
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(67)
			return ::gameobjects::items::MovePotion_obj::__new();
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(68)
			return ::gameobjects::items::Heart_obj::__new();
		}
		;break;
		case (int)3: {
			HX_STACK_LINE(69)
			return ::gameobjects::items::Sword_obj::__new();
		}
		;break;
		case (int)4: {
			HX_STACK_LINE(70)
			return ::gameobjects::items::Shoes_obj::__new();
		}
		;break;
		case (int)5: {
			HX_STACK_LINE(71)
			return ::gameobjects::items::Wand_obj::__new();
		}
		;break;
	}
	HX_STACK_LINE(73)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Shop_obj,getRandomItem,return )

Void Shop_obj::hide( ){
{
		HX_STACK_FRAME("Shop","hide",0x3207331a,"Shop.hide","Shop.hx",76,0x44389368)
		HX_STACK_THIS(this)
		HX_STACK_LINE(77)
		{
			HX_STACK_LINE(77)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(77)
			int _g = this->items->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(77)
			while((true)){
				HX_STACK_LINE(77)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(77)
					break;
				}
				HX_STACK_LINE(77)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(79)
				if (((this->items->__get(i).StaticCast< ::gameobjects::items::Item >() != null()))){
					HX_STACK_LINE(81)
					this->items->__get(i).StaticCast< ::gameobjects::items::Item >()->kill();
				}
			}
		}
		HX_STACK_LINE(84)
		this->noSpace->set_visible(false);
		HX_STACK_LINE(85)
		this->itemDescText->set_visible(false);
		HX_STACK_LINE(86)
		this->set_visible(false);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Shop_obj,hide,(void))

Void Shop_obj::update( ){
{
		HX_STACK_FRAME("Shop","update",0x62fcca61,"Shop.update","Shop.hx",92,0x44389368)
		HX_STACK_THIS(this)
		HX_STACK_LINE(93)
		this->super::update();
		HX_STACK_LINE(94)
		this->showItemDesc = false;
		HX_STACK_LINE(95)
		if (((bool(this->noSpace->visible) && bool((::states::PlayState_obj::player->heldItemCount < (int)3))))){
			HX_STACK_LINE(97)
			this->noSpace->set_visible(false);
		}
		HX_STACK_LINE(99)
		{
			HX_STACK_LINE(99)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(99)
			int _g = this->items->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(99)
			while((true)){
				HX_STACK_LINE(99)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(99)
					break;
				}
				HX_STACK_LINE(99)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				struct _Function_3_1{
					inline static bool Block( int &i,hx::ObjectPtr< ::Shop_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Shop.hx",101,0x44389368)
						{
							HX_STACK_LINE(101)
							int _g11;		HX_STACK_VAR(_g11,"_g11");
							HX_STACK_LINE(101)
							{
								HX_STACK_LINE(101)
								::flixel::FlxSprite SpriteA = __this->items->__get(i).StaticCast< ::gameobjects::items::Item >();		HX_STACK_VAR(SpriteA,"SpriteA");
								HX_STACK_LINE(101)
								::flixel::FlxSprite SpriteB = ::states::PlayState_obj::player;		HX_STACK_VAR(SpriteB,"SpriteB");
								HX_STACK_LINE(101)
								Float dx = ((SpriteA->x + SpriteA->origin->x) - ((SpriteB->x + SpriteB->origin->x)));		HX_STACK_VAR(dx,"dx");
								HX_STACK_LINE(101)
								Float dy = ((SpriteA->y + SpriteA->origin->y) - ((SpriteB->y + SpriteB->origin->y)));		HX_STACK_VAR(dy,"dy");
								HX_STACK_LINE(101)
								Float _g2 = ::Math_obj::sqrt(((dx * dx) + (dy * dy)));		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(101)
								_g11 = ::Std_obj::_int(_g2);
							}
							HX_STACK_LINE(101)
							return (_g11 < (int)20);
						}
						return null();
					}
				};
				HX_STACK_LINE(101)
				if (((  (((this->items->__get(i).StaticCast< ::gameobjects::items::Item >() != null()))) ? bool(_Function_3_1::Block(i,this)) : bool(false) ))){
					HX_STACK_LINE(103)
					if (((this->selectedItem != this->items->__get(i).StaticCast< ::gameobjects::items::Item >()))){
						HX_STACK_LINE(105)
						this->itemDescText->set_text(((((HX_CSTRING("Desc: ") + this->items->__get(i).StaticCast< ::gameobjects::items::Item >()->description) + HX_CSTRING("\nCost: ")) + this->items->__get(i).StaticCast< ::gameobjects::items::Item >()->cost) + HX_CSTRING("\n\n(Space) to Buy\n(Delete) to remove the item from the shop\nto make space for a new item")));
						HX_STACK_LINE(106)
						this->selectedItem = this->items->__get(i).StaticCast< ::gameobjects::items::Item >();
					}
					HX_STACK_LINE(108)
					this->showItemDesc = true;
					HX_STACK_LINE(109)
					break;
				}
			}
		}
		HX_STACK_LINE(115)
		if ((!(this->showItemDesc))){
			HX_STACK_LINE(117)
			this->selectedItem = null();
			HX_STACK_LINE(118)
			this->itemDescText->set_text(HX_CSTRING(""));
		}
		HX_STACK_LINE(121)
		if (((  (((  (((this->selectedItem != null()))) ? bool(::flixel::FlxG_obj::keys->checkStatus((int)32,::flixel::FlxG_obj::keys->justPressed->checkStatus)) : bool(false) ))) ? bool((::states::PlayState_obj::player->coinCount >= this->selectedItem->cost)) : bool(false) ))){
			HX_STACK_LINE(123)
			{
				HX_STACK_LINE(123)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(123)
				int _g = this->items->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(123)
				while((true)){
					HX_STACK_LINE(123)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(123)
						break;
					}
					HX_STACK_LINE(123)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(125)
					if (((this->items->__get(i).StaticCast< ::gameobjects::items::Item >() == this->selectedItem))){
						HX_STACK_LINE(127)
						if (((bool((this->selectedItem->name == HX_CSTRING("Heart"))) || bool((::states::PlayState_obj::player->heldItemCount < (int)3))))){
							HX_STACK_LINE(129)
							::flixel::FlxG_obj::sound->play(HX_CSTRING("assets/sounds/buy.wav"),null(),null(),null(),null());
							HX_STACK_LINE(130)
							::states::PlayState_obj::player->addItem(this->items->__get(i).StaticCast< ::gameobjects::items::Item >());
							HX_STACK_LINE(131)
							this->items[i] = null();
							HX_STACK_LINE(132)
							this->selectedItem = null();
							HX_STACK_LINE(133)
							::haxe::Log_obj::trace(::states::PlayState_obj::player->heldItemCount,hx::SourceInfo(HX_CSTRING("Shop.hx"),133,HX_CSTRING("Shop"),HX_CSTRING("update")));
						}
						else{
							HX_STACK_LINE(137)
							this->noSpace->set_visible(true);
						}
						HX_STACK_LINE(139)
						break;
					}
				}
			}
			HX_STACK_LINE(143)
			this->selectedItem = null();
		}
		else{
			HX_STACK_LINE(145)
			if (((  (((this->selectedItem != null()))) ? bool(::flixel::FlxG_obj::keys->checkStatus((int)46,::flixel::FlxG_obj::keys->justPressed->checkStatus)) : bool(false) ))){
				HX_STACK_LINE(147)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(147)
				int _g = this->items->length;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(147)
				while((true)){
					HX_STACK_LINE(147)
					if ((!(((_g1 < _g))))){
						HX_STACK_LINE(147)
						break;
					}
					HX_STACK_LINE(147)
					int i = (_g1)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(149)
					if (((this->items->__get(i).StaticCast< ::gameobjects::items::Item >() == this->selectedItem))){
						HX_STACK_LINE(151)
						this->items->__get(i).StaticCast< ::gameobjects::items::Item >()->kill();
						HX_STACK_LINE(152)
						this->items[i] = null();
						HX_STACK_LINE(153)
						break;
					}
				}
			}
		}
	}
return null();
}



Shop_obj::Shop_obj()
{
}

void Shop_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Shop);
	HX_MARK_MEMBER_NAME(layout,"layout");
	HX_MARK_MEMBER_NAME(items,"items");
	HX_MARK_MEMBER_NAME(selectedItem,"selectedItem");
	HX_MARK_MEMBER_NAME(itemDescText,"itemDescText");
	HX_MARK_MEMBER_NAME(noSpace,"noSpace");
	HX_MARK_MEMBER_NAME(showItemDesc,"showItemDesc");
	::flixel::tile::FlxTilemap_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Shop_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(layout,"layout");
	HX_VISIT_MEMBER_NAME(items,"items");
	HX_VISIT_MEMBER_NAME(selectedItem,"selectedItem");
	HX_VISIT_MEMBER_NAME(itemDescText,"itemDescText");
	HX_VISIT_MEMBER_NAME(noSpace,"noSpace");
	HX_VISIT_MEMBER_NAME(showItemDesc,"showItemDesc");
	::flixel::tile::FlxTilemap_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Shop_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hide") ) { return hide_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"items") ) { return items; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"layout") ) { return layout; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"noSpace") ) { return noSpace; }
		if (HX_FIELD_EQ(inName,"restock") ) { return restock_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"selectedItem") ) { return selectedItem; }
		if (HX_FIELD_EQ(inName,"itemDescText") ) { return itemDescText; }
		if (HX_FIELD_EQ(inName,"showItemDesc") ) { return showItemDesc; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getRandomItem") ) { return getRandomItem_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Shop_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"items") ) { items=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"layout") ) { layout=inValue.Cast< Array< int > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"noSpace") ) { noSpace=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"selectedItem") ) { selectedItem=inValue.Cast< ::gameobjects::items::Item >(); return inValue; }
		if (HX_FIELD_EQ(inName,"itemDescText") ) { itemDescText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"showItemDesc") ) { showItemDesc=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Shop_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("layout"));
	outFields->push(HX_CSTRING("items"));
	outFields->push(HX_CSTRING("selectedItem"));
	outFields->push(HX_CSTRING("itemDescText"));
	outFields->push(HX_CSTRING("noSpace"));
	outFields->push(HX_CSTRING("showItemDesc"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Shop_obj,layout),HX_CSTRING("layout")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Shop_obj,items),HX_CSTRING("items")},
	{hx::fsObject /*::gameobjects::items::Item*/ ,(int)offsetof(Shop_obj,selectedItem),HX_CSTRING("selectedItem")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(Shop_obj,itemDescText),HX_CSTRING("itemDescText")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(Shop_obj,noSpace),HX_CSTRING("noSpace")},
	{hx::fsBool,(int)offsetof(Shop_obj,showItemDesc),HX_CSTRING("showItemDesc")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("layout"),
	HX_CSTRING("items"),
	HX_CSTRING("selectedItem"),
	HX_CSTRING("itemDescText"),
	HX_CSTRING("noSpace"),
	HX_CSTRING("restock"),
	HX_CSTRING("getRandomItem"),
	HX_CSTRING("hide"),
	HX_CSTRING("showItemDesc"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Shop_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Shop_obj::__mClass,"__mClass");
};

#endif

Class Shop_obj::__mClass;

void Shop_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Shop"), hx::TCanCast< Shop_obj> ,sStaticFields,sMemberFields,
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

void Shop_obj::__boot()
{
}

