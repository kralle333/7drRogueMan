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
#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_MapGenerator
#include <MapGenerator.h>
#endif
#ifndef INCLUDED_Shop
#include <Shop.h>
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
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_FlxPoint
#include <flixel/util/FlxPool_flixel_util_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRect
#include <flixel/util/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
#ifndef INCLUDED_gameobjects_Map
#include <gameobjects/Map.h>
#endif
#ifndef INCLUDED_gameobjects_Player
#include <gameobjects/Player.h>
#endif
#ifndef INCLUDED_gameobjects_enemies_Enemy
#include <gameobjects/enemies/Enemy.h>
#endif
#ifndef INCLUDED_gameobjects_enemies_Ghost
#include <gameobjects/enemies/Ghost.h>
#endif
#ifndef INCLUDED_gameobjects_enemies_Poison
#include <gameobjects/enemies/Poison.h>
#endif
#ifndef INCLUDED_gameobjects_enemies_PoisonSlime
#include <gameobjects/enemies/PoisonSlime.h>
#endif
#ifndef INCLUDED_gameobjects_enemies_Slime
#include <gameobjects/enemies/Slime.h>
#endif
#ifndef INCLUDED_gameobjects_enemies_Soldier
#include <gameobjects/enemies/Soldier.h>
#endif
#ifndef INCLUDED_gameobjects_enemies_Thief
#include <gameobjects/enemies/Thief.h>
#endif
#ifndef INCLUDED_gameobjects_items_Item
#include <gameobjects/items/Item.h>
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
#ifndef INCLUDED_states_MenuState
#include <states/MenuState.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
namespace states{

Void PlayState_obj::__construct()
{
HX_STACK_FRAME("states.PlayState","new",0x0e695aa3,"states.PlayState.new","states/PlayState.hx",27,0x36e487ae)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(65)
	this->isGameOver = false;
	HX_STACK_LINE(63)
	this->pressInitials = false;
	HX_STACK_LINE(62)
	this->initials = HX_CSTRING("");
	HX_STACK_LINE(58)
	this->depth = (int)1;
	HX_STACK_LINE(50)
	this->enemyCount = (int)0;
	HX_STACK_LINE(49)
	this->maxEnemyCount = (int)10;
	HX_STACK_LINE(48)
	this->minEnemyCount = (int)5;
	HX_STACK_LINE(70)
	super::__construct(null());
	HX_STACK_LINE(71)
	::states::PlayState_obj::score = (int)0;
}
;
	return null();
}

//PlayState_obj::~PlayState_obj() { }

Dynamic PlayState_obj::__CreateEmpty() { return  new PlayState_obj; }
hx::ObjectPtr< PlayState_obj > PlayState_obj::__new()
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct();
	return result;}

Dynamic PlayState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct();
	return result;}

Void PlayState_obj::create( ){
{
		HX_STACK_FRAME("states.PlayState","create",0x0cd56899,"states.PlayState.create","states/PlayState.hx",75,0x36e487ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(76)
		this->super::create();
		HX_STACK_LINE(77)
		::flixel::FlxSprite _g = ::flixel::FlxSprite_obj::__new((int)0,(int)0,HX_CSTRING("assets/images/map/stairway.png"));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(77)
		::states::PlayState_obj::stairway = _g;
		HX_STACK_LINE(78)
		{
			HX_STACK_LINE(78)
			::flixel::util::FlxRect _this = ::flixel::FlxG_obj::worldBounds;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(78)
			_this->x = (int)0;
			HX_STACK_LINE(78)
			_this->y = (int)0;
			HX_STACK_LINE(78)
			_this->width = (int)336;
			HX_STACK_LINE(78)
			_this->height = (int)336;
			HX_STACK_LINE(78)
			_this;
		}
		HX_STACK_LINE(79)
		::MapGenerator_obj::init();
		HX_STACK_LINE(82)
		::gameobjects::Player _g1 = ::gameobjects::Player_obj::__new();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(82)
		::states::PlayState_obj::player = _g1;
		HX_STACK_LINE(83)
		::gameobjects::Map _g2 = ::gameobjects::Map_obj::__new();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(83)
		::states::PlayState_obj::currentMap = _g2;
		HX_STACK_LINE(84)
		::states::PlayState_obj::currentMap->populate(this->depth);
		HX_STACK_LINE(85)
		this->add(::states::PlayState_obj::currentMap);
		HX_STACK_LINE(86)
		this->add(::states::PlayState_obj::currentMap->coins);
		HX_STACK_LINE(87)
		this->add(::states::PlayState_obj::currentMap->sacks);
		HX_STACK_LINE(88)
		::Shop _g3 = ::Shop_obj::__new();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(88)
		this->shop = _g3;
		HX_STACK_LINE(89)
		this->add(this->shop);
		HX_STACK_LINE(90)
		this->add(::states::PlayState_obj::stairway);
		HX_STACK_LINE(93)
		::AmuletRoom _g4 = ::AmuletRoom_obj::__new();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(93)
		this->amuletRoom = _g4;
		HX_STACK_LINE(94)
		this->add(this->amuletRoom);
		HX_STACK_LINE(95)
		this->add(this->amuletRoom->yendor);
		HX_STACK_LINE(96)
		this->add(this->amuletRoom->yendorText);
		HX_STACK_LINE(97)
		this->add(this->amuletRoom->highScoreText);
		HX_STACK_LINE(98)
		this->add(::states::PlayState_obj::player);
		HX_STACK_LINE(100)
		::flixel::group::FlxGroup _g5 = ::flixel::group::FlxGroup_obj::__new(null());		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(100)
		this->slimes = _g5;
		HX_STACK_LINE(101)
		::flixel::group::FlxGroup _g6 = ::flixel::group::FlxGroup_obj::__new(null());		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(101)
		this->thieves = _g6;
		HX_STACK_LINE(102)
		::flixel::group::FlxGroup _g7 = ::flixel::group::FlxGroup_obj::__new(null());		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(102)
		this->soldiers = _g7;
		HX_STACK_LINE(103)
		::flixel::group::FlxGroup _g8 = ::flixel::group::FlxGroup_obj::__new(null());		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(103)
		this->poisonSlimes = _g8;
		HX_STACK_LINE(104)
		::List _g9 = ::List_obj::__new();		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(104)
		this->poisons = _g9;
		HX_STACK_LINE(105)
		::flixel::group::FlxGroup _g10 = ::flixel::group::FlxGroup_obj::__new(null());		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(105)
		this->ghosts = _g10;
		HX_STACK_LINE(106)
		Array< ::Dynamic > _g11 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(106)
		this->enemyGroups = _g11;
		HX_STACK_LINE(107)
		::List _g12 = ::List_obj::__new();		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(107)
		this->aliveEnemies = _g12;
		HX_STACK_LINE(108)
		{
			HX_STACK_LINE(108)
			int _g13 = (int)0;		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(108)
			while((true)){
				HX_STACK_LINE(108)
				if ((!(((_g13 < (int)20))))){
					HX_STACK_LINE(108)
					break;
				}
				HX_STACK_LINE(108)
				int i = (_g13)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(110)
				::gameobjects::enemies::Slime newBlob = ::gameobjects::enemies::Slime_obj::__new((int)0,(int)0);		HX_STACK_VAR(newBlob,"newBlob");
				HX_STACK_LINE(111)
				newBlob->kill();
				HX_STACK_LINE(112)
				this->slimes->add(newBlob);
				HX_STACK_LINE(114)
				::gameobjects::enemies::Thief newThief = ::gameobjects::enemies::Thief_obj::__new();		HX_STACK_VAR(newThief,"newThief");
				HX_STACK_LINE(115)
				newThief->kill();
				HX_STACK_LINE(116)
				this->thieves->add(newThief);
				HX_STACK_LINE(118)
				::gameobjects::enemies::Soldier newSoldier = ::gameobjects::enemies::Soldier_obj::__new();		HX_STACK_VAR(newSoldier,"newSoldier");
				HX_STACK_LINE(119)
				newSoldier->kill();
				HX_STACK_LINE(120)
				this->soldiers->add(newSoldier);
				HX_STACK_LINE(122)
				::gameobjects::enemies::PoisonSlime newPoisonSlime = ::gameobjects::enemies::PoisonSlime_obj::__new();		HX_STACK_VAR(newPoisonSlime,"newPoisonSlime");
				HX_STACK_LINE(123)
				newPoisonSlime->kill();
				HX_STACK_LINE(124)
				this->poisonSlimes->add(newPoisonSlime);
				HX_STACK_LINE(125)
				{
					HX_STACK_LINE(125)
					int _g14 = (int)0;		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(125)
					Array< ::Dynamic > _g21 = newPoisonSlime->poisons;		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(125)
					while((true)){
						HX_STACK_LINE(125)
						if ((!(((_g14 < _g21->length))))){
							HX_STACK_LINE(125)
							break;
						}
						HX_STACK_LINE(125)
						::gameobjects::enemies::Poison splat = _g21->__get(_g14).StaticCast< ::gameobjects::enemies::Poison >();		HX_STACK_VAR(splat,"splat");
						HX_STACK_LINE(125)
						++(_g14);
						HX_STACK_LINE(127)
						this->add(splat);
						HX_STACK_LINE(128)
						this->poisons->add(splat);
					}
				}
				HX_STACK_LINE(131)
				::gameobjects::enemies::Ghost newGhost = ::gameobjects::enemies::Ghost_obj::__new();		HX_STACK_VAR(newGhost,"newGhost");
				HX_STACK_LINE(132)
				newGhost->kill();
				HX_STACK_LINE(133)
				this->ghosts->add(newGhost);
			}
		}
		HX_STACK_LINE(135)
		this->enemyGroups = Array_obj< ::Dynamic >::__new().Add(this->slimes).Add(this->thieves).Add(this->soldiers).Add(this->poisonSlimes).Add(this->ghosts);
		HX_STACK_LINE(136)
		this->chanceOfSpawning = Array_obj< int >::__new().Add((int)50).Add((int)20).Add((int)40).Add((int)30).Add((int)50);
		HX_STACK_LINE(138)
		this->add(this->poisonSlimes);
		HX_STACK_LINE(139)
		this->add(this->ghosts);
		HX_STACK_LINE(140)
		this->add(this->slimes);
		HX_STACK_LINE(141)
		this->add(this->soldiers);
		HX_STACK_LINE(142)
		this->add(this->thieves);
		HX_STACK_LINE(144)
		this->enemyTimer = (int)0;
		HX_STACK_LINE(145)
		this->addEnemies();
		HX_STACK_LINE(148)
		this->add(::states::PlayState_obj::player->heart);
		HX_STACK_LINE(149)
		this->add(::states::PlayState_obj::player->healthTxt);
		HX_STACK_LINE(150)
		this->add(::states::PlayState_obj::player->coin);
		HX_STACK_LINE(151)
		this->add(::states::PlayState_obj::player->coinText);
		HX_STACK_LINE(152)
		::flixel::text::FlxText _g13 = ::flixel::text::FlxText_obj::__new((int)322,(int)30,(int)0,(HX_CSTRING("Depth: ") + this->depth),null(),null());		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(152)
		this->depthText = _g13;
		HX_STACK_LINE(153)
		this->add(this->depthText);
		HX_STACK_LINE(154)
		::flixel::text::FlxText _g14 = ::flixel::text::FlxText_obj::__new((int)322,(int)10,(int)0,HX_CSTRING("Score:0"),(int)8,null());		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(154)
		::states::PlayState_obj::scoreText = _g14;
		HX_STACK_LINE(155)
		this->add(::states::PlayState_obj::scoreText);
		HX_STACK_LINE(157)
		this->shop->set_visible(false);
		HX_STACK_LINE(158)
		this->shop->set_active(false);
		HX_STACK_LINE(159)
		this->add(this->shop->itemDescText);
		HX_STACK_LINE(160)
		this->add(this->shop->noSpace);
		HX_STACK_LINE(162)
		::flixel::text::FlxText _g15 = ::flixel::text::FlxText_obj::__new((int)16,(int)64,(int)0,HX_CSTRING("New Highscore!\n\nEnter your initials:\n"),(int)16,null());		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(162)
		this->highScoreText = _g15;
		HX_STACK_LINE(163)
		this->add(this->highScoreText);
		HX_STACK_LINE(164)
		this->highScoreText->set_visible(false);
		HX_STACK_LINE(166)
		::flixel::text::FlxText _g16 = ::flixel::text::FlxText_obj::__new((int)16,(int)64,(int)0,HX_CSTRING("Game over\nPress (R) to play again\nPress (ESC) to exit"),(int)16,null());		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(166)
		this->gameOverText = _g16;
		HX_STACK_LINE(167)
		this->gameOverText->set_color((int)-1);
		HX_STACK_LINE(168)
		this->add(this->gameOverText);
		HX_STACK_LINE(169)
		this->gameOverText->set_visible(false);
		HX_STACK_LINE(171)
		::flixel::text::FlxText _g17 = ::flixel::text::FlxText_obj::__new((int)322,(int)90,(int)0,HX_CSTRING("Items:\n1:\n2:\n3:\n"),(int)16,null());		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(171)
		this->itemsText = _g17;
		HX_STACK_LINE(172)
		this->add(this->itemsText);
		HX_STACK_LINE(174)
		::flixel::text::FlxText _g18 = ::flixel::text::FlxText_obj::__new((int)322,(int)250,(int)0,HX_CSTRING("Exit:\n(Ctrl)+(Q)"),null(),null());		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(174)
		this->add(_g18);
	}
return null();
}


Void PlayState_obj::showAmuletRoom( ){
{
		HX_STACK_FRAME("states.PlayState","showAmuletRoom",0xff8d76a7,"states.PlayState.showAmuletRoom","states/PlayState.hx",178,0x36e487ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(179)
		::flixel::FlxG_obj::camera->fade((int)-16777216,.33,true,null(),null());
		HX_STACK_LINE(180)
		::states::PlayState_obj::currentMap->hide();
		HX_STACK_LINE(181)
		this->killAllEnemies();
		HX_STACK_LINE(182)
		this->amuletRoom->show();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,showAmuletRoom,(void))

Void PlayState_obj::showShop( ){
{
		HX_STACK_FRAME("states.PlayState","showShop",0x8358fb70,"states.PlayState.showShop","states/PlayState.hx",185,0x36e487ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(186)
		::flixel::FlxG_obj::camera->fade((int)-16777216,.33,true,null(),null());
		HX_STACK_LINE(187)
		::states::PlayState_obj::currentMap->hide();
		HX_STACK_LINE(188)
		this->killAllEnemies();
		HX_STACK_LINE(189)
		::states::PlayState_obj::player->setPosition((this->shop->x + (int)16),(this->shop->y + (int)48));
		HX_STACK_LINE(190)
		this->shop->set_visible(true);
		HX_STACK_LINE(191)
		this->shop->set_active(true);
		HX_STACK_LINE(192)
		this->shop->restock(this->depth);
		HX_STACK_LINE(193)
		{
			HX_STACK_LINE(193)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(193)
			int _g = this->shop->items->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(193)
			while((true)){
				HX_STACK_LINE(193)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(193)
					break;
				}
				HX_STACK_LINE(193)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(195)
				if (((this->shop->items->__get(i).StaticCast< ::gameobjects::items::Item >()->depthAdded == this->depth))){
					HX_STACK_LINE(197)
					this->add(this->shop->items->__get(i).StaticCast< ::gameobjects::items::Item >());
				}
			}
		}
		HX_STACK_LINE(200)
		::states::PlayState_obj::addToScore(((int)100 * this->depth));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,showShop,(void))

Void PlayState_obj::createNewMap( ){
{
		HX_STACK_FRAME("states.PlayState","createNewMap",0x13594395,"states.PlayState.createNewMap","states/PlayState.hx",203,0x36e487ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(204)
		::flixel::FlxG_obj::camera->fade((int)-16777216,.33,true,null(),null());
		HX_STACK_LINE(205)
		this->enemyCount = (int)0;
		HX_STACK_LINE(206)
		this->shop->hide();
		HX_STACK_LINE(207)
		(this->depth)++;
		HX_STACK_LINE(208)
		::states::PlayState_obj::currentMap->populate(this->depth);
		HX_STACK_LINE(209)
		::flixel::util::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(209)
		{
			HX_STACK_LINE(209)
			::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set((int)1,(int)1);		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(209)
			point->_inPool = false;
			HX_STACK_LINE(209)
			_g = point;
		}
		HX_STACK_LINE(209)
		::flixel::util::FlxPoint randPos = ::states::PlayState_obj::currentMap->getRandomEmptyTileNear(_g);		HX_STACK_VAR(randPos,"randPos");
		HX_STACK_LINE(210)
		::states::PlayState_obj::player->setPosition((randPos->x * (int)16),(randPos->y * (int)16));
		HX_STACK_LINE(211)
		this->depthText->set_text((HX_CSTRING("Depth: ") + this->depth));
		HX_STACK_LINE(212)
		this->addEnemies();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,createNewMap,(void))

Void PlayState_obj::killAllEnemies( ){
{
		HX_STACK_FRAME("states.PlayState","killAllEnemies",0xbda1a960,"states.PlayState.killAllEnemies","states/PlayState.hx",216,0x36e487ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(217)
		for(::cpp::FastIterator_obj< ::gameobjects::enemies::Enemy > *__it = ::cpp::CreateFastIterator< ::gameobjects::enemies::Enemy >(this->aliveEnemies->iterator());  __it->hasNext(); ){
			::gameobjects::enemies::Enemy enemy = __it->next();
			{
				HX_STACK_LINE(219)
				enemy->kill();
				HX_STACK_LINE(220)
				enemy->setPosition((int)-402,(int)-402);
			}
;
		}
		HX_STACK_LINE(222)
		this->enemyCount = (int)0;
		HX_STACK_LINE(223)
		this->aliveEnemies->clear();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,killAllEnemies,(void))

Void PlayState_obj::addEnemies( ){
{
		HX_STACK_FRAME("states.PlayState","addEnemies",0x72dc28a2,"states.PlayState.addEnemies","states/PlayState.hx",226,0x36e487ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(227)
		if (((bool((bool(::states::PlayState_obj::currentMap->active) && bool(!(this->isGameOver)))) && bool((this->enemyCount < this->maxEnemyCount))))){
			HX_STACK_LINE(229)
			Float _g = ::Math_obj::abs((this->minEnemyCount - this->enemyCount));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(229)
			Float _g1 = (_g - (int)1);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(229)
			int _g2 = ::Std_obj::_int(_g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(229)
			int _g3 = ((int)1 + _g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(229)
			int enemySpawnCnt = ::flixel::util::FlxRandom_obj::intRanged((int)1,_g3,null());		HX_STACK_VAR(enemySpawnCnt,"enemySpawnCnt");
			HX_STACK_LINE(231)
			while((true)){
				HX_STACK_LINE(231)
				if ((!(((enemySpawnCnt > (int)0))))){
					HX_STACK_LINE(231)
					break;
				}
				HX_STACK_LINE(233)
				::gameobjects::enemies::Enemy enemy = this->getRandomEnemy();		HX_STACK_VAR(enemy,"enemy");
				HX_STACK_LINE(234)
				enemy->revive();
				HX_STACK_LINE(235)
				enemy->fadeIn();
				HX_STACK_LINE(236)
				::flixel::util::FlxPoint randPos;		HX_STACK_VAR(randPos,"randPos");
				HX_STACK_LINE(237)
				while((true)){
					HX_STACK_LINE(239)
					::flixel::util::FlxPoint _g4 = ::states::PlayState_obj::currentMap->getRandomEmptyTile();		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(239)
					randPos = _g4;
					struct _Function_4_1{
						inline static bool Block( ::flixel::util::FlxPoint &randPos){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","states/PlayState.hx",241,0x36e487ae)
							{
								HX_STACK_LINE(241)
								::flixel::FlxSprite Sprite = ::states::PlayState_obj::player;		HX_STACK_VAR(Sprite,"Sprite");
								HX_STACK_LINE(241)
								bool IncludeEqual = false;		HX_STACK_VAR(IncludeEqual,"IncludeEqual");
								HX_STACK_LINE(241)
								Float dx = ((Sprite->x + Sprite->origin->x) - randPos->x);		HX_STACK_VAR(dx,"dx");
								HX_STACK_LINE(241)
								Float dy = ((Sprite->y + Sprite->origin->y) - randPos->y);		HX_STACK_VAR(dy,"dy");
								HX_STACK_LINE(241)
								if ((randPos->_weak)){
									HX_STACK_LINE(241)
									randPos->put();
								}
								HX_STACK_LINE(241)
								return (  ((IncludeEqual)) ? bool((((dx * dx) + (dy * dy)) <= (int)9)) : bool((((dx * dx) + (dy * dy)) < (int)9)) );
							}
							return null();
						}
					};
					HX_STACK_LINE(237)
					if ((!(_Function_4_1::Block(randPos)))){
						HX_STACK_LINE(237)
						break;
					}
				}
				HX_STACK_LINE(243)
				enemy->setPosition((randPos->x * (int)16),(randPos->y * (int)16));
				HX_STACK_LINE(244)
				(this->enemyCount)++;
				HX_STACK_LINE(245)
				(enemySpawnCnt)--;
				HX_STACK_LINE(246)
				this->aliveEnemies->add(enemy);
			}
		}
		HX_STACK_LINE(249)
		if (((bool((this->minEnemyCount > this->enemyCount)) || bool((this->depth == (int)11))))){
			HX_STACK_LINE(251)
			this->enemyTimer = (int)1;
		}
		else{
			HX_STACK_LINE(255)
			this->enemyTimer = (int)2;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,addEnemies,(void))

::gameobjects::enemies::Enemy PlayState_obj::getRandomEnemy( ){
	HX_STACK_FRAME("states.PlayState","getRandomEnemy",0x78eaeeec,"states.PlayState.getRandomEnemy","states/PlayState.hx",261,0x36e487ae)
	HX_STACK_THIS(this)
	HX_STACK_LINE(261)
	while((true)){
		HX_STACK_LINE(263)
		int randType = ::flixel::util::FlxRandom_obj::intRanged((int)0,(int)4,null());		HX_STACK_VAR(randType,"randType");
		HX_STACK_LINE(264)
		switch( (int)(randType)){
			case (int)0: {
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::states::PlayState_obj > __this,int &randType){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","states/PlayState.hx",267,0x36e487ae)
						{
							HX_STACK_LINE(267)
							Float _g = ::flixel::util::FlxRandom_obj::floatRanged((int)0,(int)100,null());		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(267)
							return (_g < __this->chanceOfSpawning->__get(randType));
						}
						return null();
					}
				};
				HX_STACK_LINE(267)
				if (((  ((!(((  (((bool((this->depth >= (int)1)) && bool((this->depth <= (int)5))))) ? bool(_Function_3_1::Block(this,randType)) : bool(false) ))))) ? bool((this->depth == (int)11)) : bool(true) ))){
					HX_STACK_LINE(269)
					return hx::TCast< gameobjects::enemies::Slime >::cast(this->slimes->getFirstDead());
				}
			}
			;break;
			case (int)1: {
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::states::PlayState_obj > __this,int &randType){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","states/PlayState.hx",272,0x36e487ae)
						{
							HX_STACK_LINE(272)
							Float _g1 = ::flixel::util::FlxRandom_obj::floatRanged((int)0,(int)100,null());		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(272)
							return (_g1 < __this->chanceOfSpawning->__get(randType));
						}
						return null();
					}
				};
				HX_STACK_LINE(272)
				if (((  ((!(((  (((bool((this->depth >= (int)2)) && bool((this->depth <= (int)5))))) ? bool(_Function_3_1::Block(this,randType)) : bool(false) ))))) ? bool((this->depth == (int)11)) : bool(true) ))){
					HX_STACK_LINE(274)
					return hx::TCast< gameobjects::enemies::Thief >::cast(this->thieves->getFirstDead());
				}
			}
			;break;
			case (int)2: {
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::states::PlayState_obj > __this,int &randType){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","states/PlayState.hx",277,0x36e487ae)
						{
							HX_STACK_LINE(277)
							Float _g2 = ::flixel::util::FlxRandom_obj::floatRanged((int)0,(int)100,null());		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(277)
							return (_g2 < __this->chanceOfSpawning->__get(randType));
						}
						return null();
					}
				};
				HX_STACK_LINE(277)
				if (((  ((!(((  (((bool((this->depth >= (int)3)) && bool((this->depth <= (int)7))))) ? bool(_Function_3_1::Block(this,randType)) : bool(false) ))))) ? bool((this->depth == (int)11)) : bool(true) ))){
					HX_STACK_LINE(279)
					return hx::TCast< gameobjects::enemies::Soldier >::cast(this->soldiers->getFirstDead());
				}
			}
			;break;
			case (int)3: {
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::states::PlayState_obj > __this,int &randType){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","states/PlayState.hx",282,0x36e487ae)
						{
							HX_STACK_LINE(282)
							Float _g3 = ::flixel::util::FlxRandom_obj::floatRanged((int)0,(int)100,null());		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(282)
							return (_g3 < __this->chanceOfSpawning->__get(randType));
						}
						return null();
					}
				};
				HX_STACK_LINE(282)
				if (((  ((!(((  (((bool((this->depth >= (int)6)) && bool((this->depth <= (int)10))))) ? bool(_Function_3_1::Block(this,randType)) : bool(false) ))))) ? bool((this->depth == (int)11)) : bool(true) ))){
					HX_STACK_LINE(284)
					return hx::TCast< gameobjects::enemies::PoisonSlime >::cast(this->poisonSlimes->getFirstDead());
				}
			}
			;break;
			case (int)4: {
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::states::PlayState_obj > __this,int &randType){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","states/PlayState.hx",287,0x36e487ae)
						{
							HX_STACK_LINE(287)
							Float _g4 = ::flixel::util::FlxRandom_obj::floatRanged((int)0,(int)100,null());		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(287)
							return (_g4 < __this->chanceOfSpawning->__get(randType));
						}
						return null();
					}
				};
				HX_STACK_LINE(287)
				if (((  ((!(((  (((bool((this->depth >= (int)6)) && bool((this->depth <= (int)10))))) ? bool(_Function_3_1::Block(this,randType)) : bool(false) ))))) ? bool((this->depth == (int)11)) : bool(true) ))){
					HX_STACK_LINE(289)
					return hx::TCast< gameobjects::enemies::Ghost >::cast(this->ghosts->getFirstDead());
				}
			}
			;break;
		}
	}
	HX_STACK_LINE(261)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,getRandomEnemy,return )

Void PlayState_obj::destroy( ){
{
		HX_STACK_FRAME("states.PlayState","destroy",0x410194bd,"states.PlayState.destroy","states/PlayState.hx",297,0x36e487ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(297)
		this->super::destroy();
	}
return null();
}


Void PlayState_obj::update( ){
{
		HX_STACK_FRAME("states.PlayState","update",0x17cb87a6,"states.PlayState.update","states/PlayState.hx",301,0x36e487ae)
		HX_STACK_THIS(this)
		HX_STACK_LINE(302)
		this->super::update();
		HX_STACK_LINE(303)
		if ((::states::PlayState_obj::currentMap->active)){
			HX_STACK_LINE(305)
			if ((::states::PlayState_obj::player->justUsedStaff)){
				HX_STACK_LINE(307)
				this->killAllEnemies();
				HX_STACK_LINE(308)
				::states::PlayState_obj::player->justUsedStaff = false;
			}
			HX_STACK_LINE(310)
			if (((bool(!(this->isGameOver)) && bool(::states::PlayState_obj::player->moved)))){
				HX_STACK_LINE(312)
				::flixel::FlxG_obj::overlap(::states::PlayState_obj::player,::states::PlayState_obj::currentMap,null(),::flixel::FlxObject_obj::separate_dyn());
				HX_STACK_LINE(313)
				::flixel::FlxG_obj::overlap(::states::PlayState_obj::player,::states::PlayState_obj::currentMap->coins,this->coinCollision_dyn(),null());
				HX_STACK_LINE(314)
				::flixel::FlxG_obj::overlap(::states::PlayState_obj::player,::states::PlayState_obj::currentMap->sacks,this->sackCollision_dyn(),null());
				HX_STACK_LINE(315)
				if (((this->depth != (int)11))){
					HX_STACK_LINE(317)
					::flixel::util::FlxSpriteUtil_obj::screenWrap(::states::PlayState_obj::player,true,true,true,true);
				}
				else{
					HX_STACK_LINE(319)
					if (((::states::PlayState_obj::player->y < (int)0))){
						HX_STACK_LINE(321)
						this->showAmuletRoom();
					}
				}
			}
			HX_STACK_LINE(324)
			if (((  (((  (((this->depth < (int)11))) ? bool(::flixel::FlxG_obj::overlap(::states::PlayState_obj::player,::states::PlayState_obj::stairway,null(),null())) : bool(false) ))) ? bool(::flixel::FlxG_obj::keys->checkStatus((int)32,::flixel::FlxG_obj::keys->pressed->checkStatus)) : bool(false) ))){
				HX_STACK_LINE(326)
				::flixel::FlxG_obj::sound->play(HX_CSTRING("assets/sounds/steps.wav"),0.5,null(),null(),null());
				HX_STACK_LINE(327)
				this->showShop();
			}
			else{
				HX_STACK_LINE(329)
				if ((::states::PlayState_obj::player->moved)){
					HX_STACK_LINE(331)
					::flixel::FlxG_obj::overlap(this->thieves,::states::PlayState_obj::currentMap->coins,this->thiefCoinCollision_dyn(),null());
					HX_STACK_LINE(332)
					::flixel::FlxG_obj::overlap(this->thieves,::states::PlayState_obj::currentMap->sacks,this->thiefCoinCollision_dyn(),null());
					HX_STACK_LINE(335)
					for(::cpp::FastIterator_obj< ::gameobjects::enemies::Enemy > *__it = ::cpp::CreateFastIterator< ::gameobjects::enemies::Enemy >(this->aliveEnemies->iterator());  __it->hasNext(); ){
						::gameobjects::enemies::Enemy enemy = __it->next();
						{
							HX_STACK_LINE(338)
							::flixel::FlxG_obj::overlap(::states::PlayState_obj::player,enemy,this->enemyCollision_dyn(),null());
							HX_STACK_LINE(339)
							if (((  ((enemy->usesCollision)) ? bool(::flixel::FlxG_obj::overlap(enemy,::states::PlayState_obj::currentMap,null(),::flixel::FlxObject_obj::separate_dyn())) : bool(false) ))){
								HX_STACK_LINE(341)
								enemy->onWallCollide();
							}
						}
;
					}
					HX_STACK_LINE(344)
					for(::cpp::FastIterator_obj< ::gameobjects::enemies::Poison > *__it = ::cpp::CreateFastIterator< ::gameobjects::enemies::Poison >(this->poisons->iterator());  __it->hasNext(); ){
						::gameobjects::enemies::Poison splat = __it->next();
						if ((splat->alive)){
							HX_STACK_LINE(348)
							::flixel::FlxG_obj::overlap(::states::PlayState_obj::player,splat,this->enemyCollision_dyn(),null());
						}
;
					}
					HX_STACK_LINE(352)
					hx::SubEq(this->enemyTimer,::flixel::FlxG_obj::elapsed);
					HX_STACK_LINE(353)
					if (((this->enemyTimer <= (int)0))){
						HX_STACK_LINE(355)
						this->addEnemies();
					}
				}
			}
		}
		else{
			HX_STACK_LINE(359)
			if ((this->shop->active)){
				HX_STACK_LINE(361)
				::flixel::FlxG_obj::overlap(this->shop,::states::PlayState_obj::player,null(),::flixel::FlxObject_obj::separate_dyn());
				HX_STACK_LINE(362)
				if (((  ((::flixel::FlxG_obj::overlap(::states::PlayState_obj::player,::states::PlayState_obj::stairway,null(),null()))) ? bool(::flixel::FlxG_obj::keys->checkStatus((int)32,::flixel::FlxG_obj::keys->pressed->checkStatus)) : bool(false) ))){
					HX_STACK_LINE(364)
					::flixel::FlxG_obj::sound->play(HX_CSTRING("assets/sounds/steps.wav"),0.5,null(),null(),null());
					HX_STACK_LINE(365)
					this->createNewMap();
				}
			}
		}
		HX_STACK_LINE(369)
		if ((this->isGameOver)){
			HX_STACK_LINE(371)
			if ((::flixel::FlxG_obj::keys->checkStatus((int)82,::flixel::FlxG_obj::keys->justPressed->checkStatus))){
				HX_STACK_LINE(373)
				this->gameOverText->set_visible(false);
				HX_STACK_LINE(374)
				this->isGameOver = false;
				HX_STACK_LINE(375)
				this->depth = (int)0;
				HX_STACK_LINE(376)
				::states::PlayState_obj::score = (int)0;
				HX_STACK_LINE(377)
				::states::PlayState_obj::scoreText->set_text((HX_CSTRING("Score:") + ::states::PlayState_obj::score));
				HX_STACK_LINE(378)
				::states::PlayState_obj::player->restart();
				HX_STACK_LINE(379)
				this->killAllEnemies();
				HX_STACK_LINE(380)
				::states::PlayState_obj::currentMap->hide();
				HX_STACK_LINE(381)
				this->createNewMap();
			}
			else{
				HX_STACK_LINE(383)
				if ((::flixel::FlxG_obj::keys->checkStatus((int)27,::flixel::FlxG_obj::keys->justPressed->checkStatus))){
					HX_STACK_LINE(385)
					::flixel::FlxState State = ::states::MenuState_obj::__new(null());		HX_STACK_VAR(State,"State");
					HX_STACK_LINE(385)
					::flixel::FlxG_obj::game->_requestedState = State;
				}
			}
		}
		else{
			HX_STACK_LINE(388)
			if ((this->pressInitials)){
				HX_STACK_LINE(390)
				if (((  (((this->initials.length > (int)0))) ? bool(::flixel::FlxG_obj::keys->checkStatus((int)8,::flixel::FlxG_obj::keys->justReleased->checkStatus)) : bool(false) ))){
					HX_STACK_LINE(392)
					::String _g = this->initials.substring((int)0,(this->initials.length - (int)1));		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(392)
					this->initials = _g;
					HX_STACK_LINE(393)
					::String _g1 = this->highScoreText->get_text().substring((int)0,(this->highScoreText->get_text().length - (int)1));		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(393)
					this->highScoreText->set_text(_g1);
				}
				else{
					HX_STACK_LINE(395)
					if (((this->initials.length < (int)3))){
						HX_STACK_LINE(397)
						::EReg abc = ::EReg_obj::__new(HX_CSTRING("[A-Z]"),HX_CSTRING(""));		HX_STACK_VAR(abc,"abc");
						HX_STACK_LINE(398)
						::String newInitial = ::flixel::FlxG_obj::keys->firstJustReleased();		HX_STACK_VAR(newInitial,"newInitial");
						HX_STACK_LINE(399)
						if (((  (((newInitial.length == (int)1))) ? bool(abc->match(newInitial)) : bool(false) ))){
							HX_STACK_LINE(401)
							hx::AddEq(this->initials,newInitial);
							HX_STACK_LINE(402)
							{
								HX_STACK_LINE(402)
								::flixel::text::FlxText _g = this->highScoreText;		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(402)
								::String _g2 = _g->get_text();		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(402)
								::String _g3 = (_g2 + newInitial);		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(402)
								_g->set_text(_g3);
							}
						}
					}
					else{
						HX_STACK_LINE(405)
						if (((  (((this->initials.length == (int)3))) ? bool(::flixel::FlxG_obj::keys->checkStatus((int)13,::flixel::FlxG_obj::keys->justPressed->checkStatus)) : bool(false) ))){
							HX_STACK_LINE(407)
							::HighScoreIO_obj::putScore(this->initials,this->depth,::states::PlayState_obj::score);
							HX_STACK_LINE(408)
							this->highScoreText->set_visible(false);
							HX_STACK_LINE(409)
							this->isGameOver = true;
							HX_STACK_LINE(410)
							this->gameOverText->set_visible(true);
						}
					}
				}
			}
		}
		HX_STACK_LINE(413)
		if (((  ((::flixel::FlxG_obj::keys->checkStatus((int)17,::flixel::FlxG_obj::keys->pressed->checkStatus))) ? bool(::flixel::FlxG_obj::keys->checkStatus((int)81,::flixel::FlxG_obj::keys->pressed->checkStatus)) : bool(false) ))){
			HX_STACK_LINE(415)
			::flixel::FlxState State = ::states::MenuState_obj::__new(null());		HX_STACK_VAR(State,"State");
			HX_STACK_LINE(415)
			::flixel::FlxG_obj::game->_requestedState = State;
		}
	}
return null();
}


Void PlayState_obj::enemyCollision( ::gameobjects::Player player,::gameobjects::enemies::Enemy enemy){
{
		HX_STACK_FRAME("states.PlayState","enemyCollision",0x0cce53a7,"states.PlayState.enemyCollision","states/PlayState.hx",427,0x36e487ae)
		HX_STACK_THIS(this)
		HX_STACK_ARG(player,"player")
		HX_STACK_ARG(enemy,"enemy")
		HX_STACK_LINE(427)
		if (((bool(((bool(player->canKill) || bool(player->hasSword)))) && bool(enemy->canKill)))){
			HX_STACK_LINE(429)
			this->aliveEnemies->remove(enemy);
			HX_STACK_LINE(430)
			enemy->kill();
			HX_STACK_LINE(431)
			player->killedEnemy();
			HX_STACK_LINE(432)
			(this->enemyCount)--;
			HX_STACK_LINE(433)
			::flixel::FlxG_obj::sound->play(HX_CSTRING("assets/sounds/kill.wav"),null(),null(),null(),null());
		}
		else{
			HX_STACK_LINE(435)
			if (((bool((bool(!(enemy->isFading)) && bool(enemy->canKill))) && bool(player->isVulnerable)))){
				HX_STACK_LINE(437)
				player->removeLife();
				HX_STACK_LINE(438)
				::flixel::FlxG_obj::sound->play(HX_CSTRING("assets/sounds/dead.wav"),null(),null(),null(),null());
				HX_STACK_LINE(439)
				::flixel::FlxG_obj::camera->shake(0.02,0.2,null(),null(),null());
				HX_STACK_LINE(440)
				if (((player->health <= (int)0))){
					HX_STACK_LINE(442)
					if ((::HighScoreIO_obj::isHighScore(::states::PlayState_obj::score))){
						HX_STACK_LINE(444)
						this->pressInitials = true;
						HX_STACK_LINE(445)
						this->highScoreText->set_visible(true);
					}
					else{
						HX_STACK_LINE(449)
						this->isGameOver = true;
						HX_STACK_LINE(450)
						this->gameOverText->set_visible(true);
					}
				}
				HX_STACK_LINE(453)
				enemy->killedPlayer();
				HX_STACK_LINE(454)
				if ((!(enemy->alive))){
					HX_STACK_LINE(456)
					(this->enemyCount)--;
					HX_STACK_LINE(457)
					this->aliveEnemies->remove(enemy);
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,enemyCollision,(void))

Void PlayState_obj::coinCollision( ::flixel::FlxObject p,::flixel::FlxObject coin){
{
		HX_STACK_FRAME("states.PlayState","coinCollision",0x6e1434a4,"states.PlayState.coinCollision","states/PlayState.hx",462,0x36e487ae)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p,"p")
		HX_STACK_ARG(coin,"coin")
		HX_STACK_LINE(463)
		::flixel::FlxG_obj::sound->play(HX_CSTRING("assets/sounds/coin.wav"),null(),null(),null(),null());
		HX_STACK_LINE(464)
		coin->kill();
		HX_STACK_LINE(465)
		::states::PlayState_obj::player->addCoin((int)1);
		HX_STACK_LINE(466)
		::states::PlayState_obj::addToScore((int)5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,coinCollision,(void))

Void PlayState_obj::sackCollision( ::flixel::FlxObject p,::flixel::FlxSprite sack){
{
		HX_STACK_FRAME("states.PlayState","sackCollision",0xeb8e22df,"states.PlayState.sackCollision","states/PlayState.hx",469,0x36e487ae)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p,"p")
		HX_STACK_ARG(sack,"sack")
		HX_STACK_LINE(470)
		::flixel::FlxG_obj::sound->play(HX_CSTRING("assets/sounds/sack.wav"),null(),null(),null(),null());
		HX_STACK_LINE(471)
		::states::PlayState_obj::currentMap->killSack(sack->x,sack->y);
		HX_STACK_LINE(472)
		::states::PlayState_obj::player->addCoin((int)10);
		HX_STACK_LINE(473)
		::states::PlayState_obj::addToScore((int)50);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,sackCollision,(void))

Void PlayState_obj::thiefCoinCollision( ::gameobjects::enemies::Thief p,::flixel::FlxSprite coin){
{
		HX_STACK_FRAME("states.PlayState","thiefCoinCollision",0x78648bc8,"states.PlayState.thiefCoinCollision","states/PlayState.hx",477,0x36e487ae)
		HX_STACK_THIS(this)
		HX_STACK_ARG(p,"p")
		HX_STACK_ARG(coin,"coin")
		HX_STACK_LINE(477)
		::states::PlayState_obj::currentMap->killCoinOrSack(coin->x,coin->y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(PlayState_obj,thiefCoinCollision,(void))

::gameobjects::Map PlayState_obj::currentMap;

::gameobjects::Player PlayState_obj::player;

::flixel::FlxSprite PlayState_obj::stairway;

::flixel::text::FlxText PlayState_obj::scoreText;

int PlayState_obj::score;

Void PlayState_obj::addToScore( int add){
{
		HX_STACK_FRAME("states.PlayState","addToScore",0xe52b7fd3,"states.PlayState.addToScore","states/PlayState.hx",420,0x36e487ae)
		HX_STACK_ARG(add,"add")
		HX_STACK_LINE(421)
		hx::AddEq(::states::PlayState_obj::score,add);
		HX_STACK_LINE(422)
		::states::PlayState_obj::scoreText->set_text((HX_CSTRING("Score:") + ::states::PlayState_obj::score));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PlayState_obj,addToScore,(void))


PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(mapGenerator,"mapGenerator");
	HX_MARK_MEMBER_NAME(shop,"shop");
	HX_MARK_MEMBER_NAME(amuletRoom,"amuletRoom");
	HX_MARK_MEMBER_NAME(enemyGroups,"enemyGroups");
	HX_MARK_MEMBER_NAME(chanceOfSpawning,"chanceOfSpawning");
	HX_MARK_MEMBER_NAME(slimes,"slimes");
	HX_MARK_MEMBER_NAME(thieves,"thieves");
	HX_MARK_MEMBER_NAME(soldiers,"soldiers");
	HX_MARK_MEMBER_NAME(poisonSlimes,"poisonSlimes");
	HX_MARK_MEMBER_NAME(poisons,"poisons");
	HX_MARK_MEMBER_NAME(ghosts,"ghosts");
	HX_MARK_MEMBER_NAME(aliveEnemies,"aliveEnemies");
	HX_MARK_MEMBER_NAME(minEnemyCount,"minEnemyCount");
	HX_MARK_MEMBER_NAME(maxEnemyCount,"maxEnemyCount");
	HX_MARK_MEMBER_NAME(enemyCount,"enemyCount");
	HX_MARK_MEMBER_NAME(enemyTimer,"enemyTimer");
	HX_MARK_MEMBER_NAME(itemsText,"itemsText");
	HX_MARK_MEMBER_NAME(depth,"depth");
	HX_MARK_MEMBER_NAME(depthText,"depthText");
	HX_MARK_MEMBER_NAME(highScoreText,"highScoreText");
	HX_MARK_MEMBER_NAME(initials,"initials");
	HX_MARK_MEMBER_NAME(pressInitials,"pressInitials");
	HX_MARK_MEMBER_NAME(isGameOver,"isGameOver");
	HX_MARK_MEMBER_NAME(gameOverText,"gameOverText");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mapGenerator,"mapGenerator");
	HX_VISIT_MEMBER_NAME(shop,"shop");
	HX_VISIT_MEMBER_NAME(amuletRoom,"amuletRoom");
	HX_VISIT_MEMBER_NAME(enemyGroups,"enemyGroups");
	HX_VISIT_MEMBER_NAME(chanceOfSpawning,"chanceOfSpawning");
	HX_VISIT_MEMBER_NAME(slimes,"slimes");
	HX_VISIT_MEMBER_NAME(thieves,"thieves");
	HX_VISIT_MEMBER_NAME(soldiers,"soldiers");
	HX_VISIT_MEMBER_NAME(poisonSlimes,"poisonSlimes");
	HX_VISIT_MEMBER_NAME(poisons,"poisons");
	HX_VISIT_MEMBER_NAME(ghosts,"ghosts");
	HX_VISIT_MEMBER_NAME(aliveEnemies,"aliveEnemies");
	HX_VISIT_MEMBER_NAME(minEnemyCount,"minEnemyCount");
	HX_VISIT_MEMBER_NAME(maxEnemyCount,"maxEnemyCount");
	HX_VISIT_MEMBER_NAME(enemyCount,"enemyCount");
	HX_VISIT_MEMBER_NAME(enemyTimer,"enemyTimer");
	HX_VISIT_MEMBER_NAME(itemsText,"itemsText");
	HX_VISIT_MEMBER_NAME(depth,"depth");
	HX_VISIT_MEMBER_NAME(depthText,"depthText");
	HX_VISIT_MEMBER_NAME(highScoreText,"highScoreText");
	HX_VISIT_MEMBER_NAME(initials,"initials");
	HX_VISIT_MEMBER_NAME(pressInitials,"pressInitials");
	HX_VISIT_MEMBER_NAME(isGameOver,"isGameOver");
	HX_VISIT_MEMBER_NAME(gameOverText,"gameOverText");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"shop") ) { return shop; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"score") ) { return score; }
		if (HX_FIELD_EQ(inName,"depth") ) { return depth; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { return player; }
		if (HX_FIELD_EQ(inName,"slimes") ) { return slimes; }
		if (HX_FIELD_EQ(inName,"ghosts") ) { return ghosts; }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"thieves") ) { return thieves; }
		if (HX_FIELD_EQ(inName,"poisons") ) { return poisons; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"stairway") ) { return stairway; }
		if (HX_FIELD_EQ(inName,"soldiers") ) { return soldiers; }
		if (HX_FIELD_EQ(inName,"initials") ) { return initials; }
		if (HX_FIELD_EQ(inName,"showShop") ) { return showShop_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"scoreText") ) { return scoreText; }
		if (HX_FIELD_EQ(inName,"itemsText") ) { return itemsText; }
		if (HX_FIELD_EQ(inName,"depthText") ) { return depthText; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"currentMap") ) { return currentMap; }
		if (HX_FIELD_EQ(inName,"addToScore") ) { return addToScore_dyn(); }
		if (HX_FIELD_EQ(inName,"amuletRoom") ) { return amuletRoom; }
		if (HX_FIELD_EQ(inName,"enemyCount") ) { return enemyCount; }
		if (HX_FIELD_EQ(inName,"enemyTimer") ) { return enemyTimer; }
		if (HX_FIELD_EQ(inName,"isGameOver") ) { return isGameOver; }
		if (HX_FIELD_EQ(inName,"addEnemies") ) { return addEnemies_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"enemyGroups") ) { return enemyGroups; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mapGenerator") ) { return mapGenerator; }
		if (HX_FIELD_EQ(inName,"poisonSlimes") ) { return poisonSlimes; }
		if (HX_FIELD_EQ(inName,"aliveEnemies") ) { return aliveEnemies; }
		if (HX_FIELD_EQ(inName,"gameOverText") ) { return gameOverText; }
		if (HX_FIELD_EQ(inName,"createNewMap") ) { return createNewMap_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"minEnemyCount") ) { return minEnemyCount; }
		if (HX_FIELD_EQ(inName,"maxEnemyCount") ) { return maxEnemyCount; }
		if (HX_FIELD_EQ(inName,"highScoreText") ) { return highScoreText; }
		if (HX_FIELD_EQ(inName,"pressInitials") ) { return pressInitials; }
		if (HX_FIELD_EQ(inName,"coinCollision") ) { return coinCollision_dyn(); }
		if (HX_FIELD_EQ(inName,"sackCollision") ) { return sackCollision_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"showAmuletRoom") ) { return showAmuletRoom_dyn(); }
		if (HX_FIELD_EQ(inName,"killAllEnemies") ) { return killAllEnemies_dyn(); }
		if (HX_FIELD_EQ(inName,"getRandomEnemy") ) { return getRandomEnemy_dyn(); }
		if (HX_FIELD_EQ(inName,"enemyCollision") ) { return enemyCollision_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"chanceOfSpawning") ) { return chanceOfSpawning; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"thiefCoinCollision") ) { return thiefCoinCollision_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"shop") ) { shop=inValue.Cast< ::Shop >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"score") ) { score=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"depth") ) { depth=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< ::gameobjects::Player >(); return inValue; }
		if (HX_FIELD_EQ(inName,"slimes") ) { slimes=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"ghosts") ) { ghosts=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"thieves") ) { thieves=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"poisons") ) { poisons=inValue.Cast< ::List >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"stairway") ) { stairway=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"soldiers") ) { soldiers=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"initials") ) { initials=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"scoreText") ) { scoreText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"itemsText") ) { itemsText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"depthText") ) { depthText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"currentMap") ) { currentMap=inValue.Cast< ::gameobjects::Map >(); return inValue; }
		if (HX_FIELD_EQ(inName,"amuletRoom") ) { amuletRoom=inValue.Cast< ::AmuletRoom >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enemyCount") ) { enemyCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"enemyTimer") ) { enemyTimer=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isGameOver") ) { isGameOver=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"enemyGroups") ) { enemyGroups=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"mapGenerator") ) { mapGenerator=inValue.Cast< ::MapGenerator >(); return inValue; }
		if (HX_FIELD_EQ(inName,"poisonSlimes") ) { poisonSlimes=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"aliveEnemies") ) { aliveEnemies=inValue.Cast< ::List >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gameOverText") ) { gameOverText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"minEnemyCount") ) { minEnemyCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxEnemyCount") ) { maxEnemyCount=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"highScoreText") ) { highScoreText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"pressInitials") ) { pressInitials=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"chanceOfSpawning") ) { chanceOfSpawning=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("mapGenerator"));
	outFields->push(HX_CSTRING("shop"));
	outFields->push(HX_CSTRING("amuletRoom"));
	outFields->push(HX_CSTRING("enemyGroups"));
	outFields->push(HX_CSTRING("chanceOfSpawning"));
	outFields->push(HX_CSTRING("slimes"));
	outFields->push(HX_CSTRING("thieves"));
	outFields->push(HX_CSTRING("soldiers"));
	outFields->push(HX_CSTRING("poisonSlimes"));
	outFields->push(HX_CSTRING("poisons"));
	outFields->push(HX_CSTRING("ghosts"));
	outFields->push(HX_CSTRING("aliveEnemies"));
	outFields->push(HX_CSTRING("minEnemyCount"));
	outFields->push(HX_CSTRING("maxEnemyCount"));
	outFields->push(HX_CSTRING("enemyCount"));
	outFields->push(HX_CSTRING("enemyTimer"));
	outFields->push(HX_CSTRING("itemsText"));
	outFields->push(HX_CSTRING("depth"));
	outFields->push(HX_CSTRING("depthText"));
	outFields->push(HX_CSTRING("highScoreText"));
	outFields->push(HX_CSTRING("initials"));
	outFields->push(HX_CSTRING("pressInitials"));
	outFields->push(HX_CSTRING("isGameOver"));
	outFields->push(HX_CSTRING("gameOverText"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("currentMap"),
	HX_CSTRING("player"),
	HX_CSTRING("stairway"),
	HX_CSTRING("scoreText"),
	HX_CSTRING("score"),
	HX_CSTRING("addToScore"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::MapGenerator*/ ,(int)offsetof(PlayState_obj,mapGenerator),HX_CSTRING("mapGenerator")},
	{hx::fsObject /*::Shop*/ ,(int)offsetof(PlayState_obj,shop),HX_CSTRING("shop")},
	{hx::fsObject /*::AmuletRoom*/ ,(int)offsetof(PlayState_obj,amuletRoom),HX_CSTRING("amuletRoom")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(PlayState_obj,enemyGroups),HX_CSTRING("enemyGroups")},
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(PlayState_obj,chanceOfSpawning),HX_CSTRING("chanceOfSpawning")},
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(PlayState_obj,slimes),HX_CSTRING("slimes")},
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(PlayState_obj,thieves),HX_CSTRING("thieves")},
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(PlayState_obj,soldiers),HX_CSTRING("soldiers")},
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(PlayState_obj,poisonSlimes),HX_CSTRING("poisonSlimes")},
	{hx::fsObject /*::List*/ ,(int)offsetof(PlayState_obj,poisons),HX_CSTRING("poisons")},
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(PlayState_obj,ghosts),HX_CSTRING("ghosts")},
	{hx::fsObject /*::List*/ ,(int)offsetof(PlayState_obj,aliveEnemies),HX_CSTRING("aliveEnemies")},
	{hx::fsInt,(int)offsetof(PlayState_obj,minEnemyCount),HX_CSTRING("minEnemyCount")},
	{hx::fsInt,(int)offsetof(PlayState_obj,maxEnemyCount),HX_CSTRING("maxEnemyCount")},
	{hx::fsInt,(int)offsetof(PlayState_obj,enemyCount),HX_CSTRING("enemyCount")},
	{hx::fsFloat,(int)offsetof(PlayState_obj,enemyTimer),HX_CSTRING("enemyTimer")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(PlayState_obj,itemsText),HX_CSTRING("itemsText")},
	{hx::fsInt,(int)offsetof(PlayState_obj,depth),HX_CSTRING("depth")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(PlayState_obj,depthText),HX_CSTRING("depthText")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(PlayState_obj,highScoreText),HX_CSTRING("highScoreText")},
	{hx::fsString,(int)offsetof(PlayState_obj,initials),HX_CSTRING("initials")},
	{hx::fsBool,(int)offsetof(PlayState_obj,pressInitials),HX_CSTRING("pressInitials")},
	{hx::fsBool,(int)offsetof(PlayState_obj,isGameOver),HX_CSTRING("isGameOver")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(PlayState_obj,gameOverText),HX_CSTRING("gameOverText")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("mapGenerator"),
	HX_CSTRING("shop"),
	HX_CSTRING("amuletRoom"),
	HX_CSTRING("enemyGroups"),
	HX_CSTRING("chanceOfSpawning"),
	HX_CSTRING("slimes"),
	HX_CSTRING("thieves"),
	HX_CSTRING("soldiers"),
	HX_CSTRING("poisonSlimes"),
	HX_CSTRING("poisons"),
	HX_CSTRING("ghosts"),
	HX_CSTRING("aliveEnemies"),
	HX_CSTRING("minEnemyCount"),
	HX_CSTRING("maxEnemyCount"),
	HX_CSTRING("enemyCount"),
	HX_CSTRING("enemyTimer"),
	HX_CSTRING("itemsText"),
	HX_CSTRING("depth"),
	HX_CSTRING("depthText"),
	HX_CSTRING("highScoreText"),
	HX_CSTRING("initials"),
	HX_CSTRING("pressInitials"),
	HX_CSTRING("isGameOver"),
	HX_CSTRING("gameOverText"),
	HX_CSTRING("create"),
	HX_CSTRING("showAmuletRoom"),
	HX_CSTRING("showShop"),
	HX_CSTRING("createNewMap"),
	HX_CSTRING("killAllEnemies"),
	HX_CSTRING("addEnemies"),
	HX_CSTRING("getRandomEnemy"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("enemyCollision"),
	HX_CSTRING("coinCollision"),
	HX_CSTRING("sackCollision"),
	HX_CSTRING("thiefCoinCollision"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(PlayState_obj::currentMap,"currentMap");
	HX_MARK_MEMBER_NAME(PlayState_obj::player,"player");
	HX_MARK_MEMBER_NAME(PlayState_obj::stairway,"stairway");
	HX_MARK_MEMBER_NAME(PlayState_obj::scoreText,"scoreText");
	HX_MARK_MEMBER_NAME(PlayState_obj::score,"score");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(PlayState_obj::currentMap,"currentMap");
	HX_VISIT_MEMBER_NAME(PlayState_obj::player,"player");
	HX_VISIT_MEMBER_NAME(PlayState_obj::stairway,"stairway");
	HX_VISIT_MEMBER_NAME(PlayState_obj::scoreText,"scoreText");
	HX_VISIT_MEMBER_NAME(PlayState_obj::score,"score");
};

#endif

Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("states.PlayState"), hx::TCanCast< PlayState_obj> ,sStaticFields,sMemberFields,
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

void PlayState_obj::__boot()
{
	score= (int)0;
}

} // end namespace states
