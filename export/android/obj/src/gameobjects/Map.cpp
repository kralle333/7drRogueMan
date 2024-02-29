#include <hxcpp.h>

#ifndef INCLUDED_MapGenerator
#include <MapGenerator.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
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
#ifndef INCLUDED_gameobjects_Map
#include <gameobjects/Map.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_states_PlayState
#include <states/PlayState.h>
#endif
namespace gameobjects{

Void Map_obj::__construct()
{
HX_STACK_FRAME("gameobjects.Map","new",0x31137c22,"gameobjects.Map.new","gameobjects/Map.hx",12,0xfd08544f)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(19)
	this->hasSacks = false;
	HX_STACK_LINE(18)
	this->depth = (int)0;
	HX_STACK_LINE(23)
	super::__construct();
	HX_STACK_LINE(24)
	::flixel::group::FlxGroup _g = ::flixel::group::FlxGroup_obj::__new(null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(24)
	this->coins = _g;
	HX_STACK_LINE(25)
	::flixel::group::FlxGroup _g1 = ::flixel::group::FlxGroup_obj::__new(null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(25)
	this->sacks = _g1;
	HX_STACK_LINE(26)
	{
		HX_STACK_LINE(26)
		int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(26)
		while((true)){
			HX_STACK_LINE(26)
			if ((!(((_g2 < (int)30))))){
				HX_STACK_LINE(26)
				break;
			}
			HX_STACK_LINE(26)
			int i = (_g2)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(28)
			::flixel::FlxSprite coin = ::flixel::FlxSprite_obj::__new((int)0,(int)0,HX_CSTRING("assets/images/map/coin.png"));		HX_STACK_VAR(coin,"coin");
			HX_STACK_LINE(29)
			coin->kill();
			HX_STACK_LINE(30)
			this->coins->add(coin);
		}
	}
	HX_STACK_LINE(32)
	{
		HX_STACK_LINE(32)
		int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(32)
		while((true)){
			HX_STACK_LINE(32)
			if ((!(((_g2 < (int)3))))){
				HX_STACK_LINE(32)
				break;
			}
			HX_STACK_LINE(32)
			int i = (_g2)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(34)
			::flixel::FlxSprite sack = ::flixel::FlxSprite_obj::__new((int)0,(int)0,HX_CSTRING("assets/images/map/sack.png"));		HX_STACK_VAR(sack,"sack");
			HX_STACK_LINE(35)
			sack->kill();
			HX_STACK_LINE(36)
			this->sacks->add(sack);
		}
	}
}
;
	return null();
}

//Map_obj::~Map_obj() { }

Dynamic Map_obj::__CreateEmpty() { return  new Map_obj; }
hx::ObjectPtr< Map_obj > Map_obj::__new()
{  hx::ObjectPtr< Map_obj > result = new Map_obj();
	result->__construct();
	return result;}

Dynamic Map_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Map_obj > result = new Map_obj();
	result->__construct();
	return result;}

Void Map_obj::populate( int depth){
{
		HX_STACK_FRAME("gameobjects.Map","populate",0xce3833e8,"gameobjects.Map.populate","gameobjects/Map.hx",41,0xfd08544f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(depth,"depth")
		HX_STACK_LINE(42)
		this->depth = depth;
		HX_STACK_LINE(43)
		this->set_active(true);
		HX_STACK_LINE(44)
		this->set_visible(true);
		HX_STACK_LINE(45)
		this->hasSacks = false;
		HX_STACK_LINE(46)
		::String usedBlocks;		HX_STACK_VAR(usedBlocks,"usedBlocks");
		HX_STACK_LINE(47)
		if (((bool((depth > (int)5)) && bool((depth < (int)11))))){
			HX_STACK_LINE(49)
			usedBlocks = HX_CSTRING("assets/images/map/blocksForest.png");
		}
		else{
			HX_STACK_LINE(51)
			if (((depth == (int)11))){
				HX_STACK_LINE(53)
				usedBlocks = HX_CSTRING("assets/images/map/blocksLast.png");
			}
			else{
				HX_STACK_LINE(57)
				usedBlocks = HX_CSTRING("assets/images/map/blocksCastle.png");
			}
		}
		HX_STACK_LINE(59)
		::String _g = ::MapGenerator_obj::generateMap(depth);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(59)
		this->loadMap(_g,usedBlocks,(int)16,(int)16,(int)0,(int)1,(int)0,(int)1);
		HX_STACK_LINE(60)
		this->setTileProperties((int)0,null(),null(),null(),null());
		HX_STACK_LINE(61)
		this->setTileProperties((int)2,(int)0,null(),null(),null());
		HX_STACK_LINE(62)
		this->setTileProperties((int)1,(int)4369,null(),null(),null());
		HX_STACK_LINE(64)
		this->addCoinsAndSacks();
		HX_STACK_LINE(66)
		if (((depth < (int)11))){
			HX_STACK_LINE(68)
			::flixel::util::FlxPoint _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(68)
			{
				HX_STACK_LINE(68)
				::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set((int)18,(int)18);		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(68)
				point->_inPool = false;
				HX_STACK_LINE(68)
				_g1 = point;
			}
			HX_STACK_LINE(68)
			::flixel::util::FlxPoint randPos = this->getRandomEmptyTileNear(_g1);		HX_STACK_VAR(randPos,"randPos");
			HX_STACK_LINE(69)
			::states::PlayState_obj::stairway->setPosition((randPos->x * (int)16),(randPos->y * (int)16));
		}
		else{
			HX_STACK_LINE(73)
			::states::PlayState_obj::stairway->set_visible(false);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Map_obj,populate,(void))

Void Map_obj::hide( ){
{
		HX_STACK_FRAME("gameobjects.Map","hide",0xbc04d2c0,"gameobjects.Map.hide","gameobjects/Map.hx",78,0xfd08544f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(79)
		this->set_active(false);
		HX_STACK_LINE(80)
		this->set_visible(false);
		HX_STACK_LINE(81)
		while((true)){
			HX_STACK_LINE(83)
			::flixel::FlxBasic _g = this->coins->getFirstAlive();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(83)
			if (((_g != null()))){
				HX_STACK_LINE(85)
				this->coins->getFirstAlive()->__Field(HX_CSTRING("kill"),true)();
			}
			else{
				HX_STACK_LINE(87)
				::flixel::FlxBasic _g1 = this->sacks->getFirstAlive();		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(87)
				if (((_g1 != null()))){
					HX_STACK_LINE(89)
					this->sacks->getFirstAlive()->__Field(HX_CSTRING("kill"),true)();
				}
				else{
					HX_STACK_LINE(93)
					break;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Map_obj,hide,(void))

Void Map_obj::killCoinOrSack( Float x,Float y){
{
		HX_STACK_FRAME("gameobjects.Map","killCoinOrSack",0xef021ea6,"gameobjects.Map.killCoinOrSack","gameobjects/Map.hx",99,0xfd08544f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(100)
		for(::cpp::FastIterator_obj< ::flixel::FlxBasic > *__it = ::cpp::CreateFastIterator< ::flixel::FlxBasic >(::flixel::group::FlxTypedGroupIterator_obj::__new(this->coins->members,null()));  __it->hasNext(); ){
			::flixel::FlxBasic coin = __it->next();
			{
				HX_STACK_LINE(102)
				::flixel::FlxSprite coin1;		HX_STACK_VAR(coin1,"coin1");
				HX_STACK_LINE(102)
				coin1 = hx::TCast< flixel::FlxSprite >::cast(coin);
				HX_STACK_LINE(103)
				if (((bool((coin1->x == x)) && bool((coin1->y == y))))){
					HX_STACK_LINE(105)
					coin1->kill();
					HX_STACK_LINE(106)
					break;
				}
			}
;
		}
		HX_STACK_LINE(109)
		this->killSack(x,y);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Map_obj,killCoinOrSack,(void))

Void Map_obj::killSack( Float x,Float y){
{
		HX_STACK_FRAME("gameobjects.Map","killSack",0xde2c2272,"gameobjects.Map.killSack","gameobjects/Map.hx",112,0xfd08544f)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(113)
		this->hasSacks = false;
		HX_STACK_LINE(114)
		for(::cpp::FastIterator_obj< ::flixel::FlxBasic > *__it = ::cpp::CreateFastIterator< ::flixel::FlxBasic >(::flixel::group::FlxTypedGroupIterator_obj::__new(this->sacks->members,null()));  __it->hasNext(); ){
			::flixel::FlxBasic sack = __it->next();
			{
				HX_STACK_LINE(116)
				::flixel::FlxSprite sack1;		HX_STACK_VAR(sack1,"sack1");
				HX_STACK_LINE(116)
				sack1 = hx::TCast< flixel::FlxSprite >::cast(sack);
				HX_STACK_LINE(117)
				if ((sack1->alive)){
					HX_STACK_LINE(119)
					if (((bool((sack1->x == x)) && bool((sack1->y == y))))){
						HX_STACK_LINE(121)
						sack1->kill();
					}
					else{
						HX_STACK_LINE(125)
						this->hasSacks = true;
					}
				}
			}
;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Map_obj,killSack,(void))

Void Map_obj::addCoinsAndSacks( ){
{
		HX_STACK_FRAME("gameobjects.Map","addCoinsAndSacks",0x7499a6a5,"gameobjects.Map.addCoinsAndSacks","gameobjects/Map.hx",131,0xfd08544f)
		HX_STACK_THIS(this)
		HX_STACK_LINE(132)
		int numOfCoins = ::flixel::util::FlxRandom_obj::intRanged((int)15,(int)30,null());		HX_STACK_VAR(numOfCoins,"numOfCoins");
		HX_STACK_LINE(134)
		{
			HX_STACK_LINE(134)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(134)
			while((true)){
				HX_STACK_LINE(134)
				if ((!(((_g < numOfCoins))))){
					HX_STACK_LINE(134)
					break;
				}
				HX_STACK_LINE(134)
				int i = (_g)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(136)
				::flixel::util::FlxPoint randPos = this->getRandomEmptyTile();		HX_STACK_VAR(randPos,"randPos");
				HX_STACK_LINE(137)
				::flixel::FlxSprite coin;		HX_STACK_VAR(coin,"coin");
				HX_STACK_LINE(137)
				coin = hx::TCast< flixel::FlxSprite >::cast(this->coins->getFirstDead());
				HX_STACK_LINE(138)
				coin->reset((randPos->x * (int)16),(randPos->y * (int)16));
			}
		}
		HX_STACK_LINE(141)
		{
			HX_STACK_LINE(141)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(141)
			int _g = this->sacks->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(141)
			while((true)){
				HX_STACK_LINE(141)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(141)
					break;
				}
				HX_STACK_LINE(141)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				struct _Function_3_1{
					inline static bool Block( hx::ObjectPtr< ::gameobjects::Map_obj > __this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","gameobjects/Map.hx",143,0xfd08544f)
						{
							HX_STACK_LINE(143)
							Float Chance = ::Math_obj::min((int)100,(__this->depth * (int)10));		HX_STACK_VAR(Chance,"Chance");
							HX_STACK_LINE(143)
							Float _g2 = ::flixel::util::FlxRandom_obj::floatRanged((int)0,(int)100,null());		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(143)
							return (_g2 < Chance);
						}
						return null();
					}
				};
				HX_STACK_LINE(143)
				if ((_Function_3_1::Block(this))){
					HX_STACK_LINE(145)
					::flixel::util::FlxPoint randPos = null();		HX_STACK_VAR(randPos,"randPos");
					struct _Function_4_1{
						inline static bool Block( ){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","gameobjects/Map.hx",146,0xfd08544f)
							{
								HX_STACK_LINE(146)
								Float Chance = (int)50;		HX_STACK_VAR(Chance,"Chance");
								HX_STACK_LINE(146)
								Float _g11 = ::flixel::util::FlxRandom_obj::floatRanged((int)0,(int)100,null());		HX_STACK_VAR(_g11,"_g11");
								HX_STACK_LINE(146)
								return (_g11 < Chance);
							}
							return null();
						}
					};
					HX_STACK_LINE(146)
					if ((_Function_4_1::Block())){
						HX_STACK_LINE(148)
						::flixel::util::FlxPoint _g2;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(148)
						{
							HX_STACK_LINE(148)
							::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set((int)10,(int)18);		HX_STACK_VAR(point,"point");
							HX_STACK_LINE(148)
							point->_inPool = false;
							HX_STACK_LINE(148)
							_g2 = point;
						}
						HX_STACK_LINE(148)
						::flixel::util::FlxPoint _g3 = this->getRandomEmptyTileNear(_g2);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(148)
						randPos = _g3;
					}
					else{
						HX_STACK_LINE(152)
						::flixel::util::FlxPoint _g4;		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(152)
						{
							HX_STACK_LINE(152)
							::flixel::util::FlxPoint point = ::flixel::util::FlxPoint_obj::_pool->get()->set((int)18,(int)10);		HX_STACK_VAR(point,"point");
							HX_STACK_LINE(152)
							point->_inPool = false;
							HX_STACK_LINE(152)
							_g4 = point;
						}
						HX_STACK_LINE(152)
						::flixel::util::FlxPoint _g5 = this->getRandomEmptyTileNear(_g4);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(152)
						randPos = _g5;
					}
					HX_STACK_LINE(154)
					::flixel::FlxSprite sack;		HX_STACK_VAR(sack,"sack");
					HX_STACK_LINE(154)
					sack = hx::TCast< flixel::FlxSprite >::cast(this->sacks->getFirstDead());
					HX_STACK_LINE(155)
					sack->reset((randPos->x * (int)16),(randPos->y * (int)16));
					HX_STACK_LINE(157)
					this->hasSacks = true;
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Map_obj,addCoinsAndSacks,(void))

::flixel::FlxSprite Map_obj::getRandomCoin( ){
	HX_STACK_FRAME("gameobjects.Map","getRandomCoin",0x7dbccfac,"gameobjects.Map.getRandomCoin","gameobjects/Map.hx",163,0xfd08544f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(164)
	::flixel::FlxBasic _g = this->coins->getFirstAlive();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(164)
	if (((_g != null()))){
		HX_STACK_LINE(166)
		return hx::TCast< flixel::FlxSprite >::cast(this->coins->getFirstAlive());
	}
	HX_STACK_LINE(169)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Map_obj,getRandomCoin,return )

::flixel::util::FlxPoint Map_obj::getRandomEmptyTileNear( ::flixel::util::FlxPoint point){
	HX_STACK_FRAME("gameobjects.Map","getRandomEmptyTileNear",0x7464ad68,"gameobjects.Map.getRandomEmptyTileNear","gameobjects/Map.hx",174,0xfd08544f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(174)
	while((true)){
		HX_STACK_LINE(176)
		::flixel::util::FlxPoint randTile = this->getRandomEmptyTile();		HX_STACK_VAR(randTile,"randTile");
		HX_STACK_LINE(177)
		Float _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(177)
		{
			HX_STACK_LINE(177)
			Float dx = (randTile->x - point->x);		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(177)
			Float dy = (randTile->y - point->y);		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(177)
			if ((randTile->_weak)){
				HX_STACK_LINE(177)
				randTile->put();
			}
			HX_STACK_LINE(177)
			if ((point->_weak)){
				HX_STACK_LINE(177)
				point->put();
			}
			HX_STACK_LINE(177)
			_g = ::Math_obj::sqrt(((dx * dx) + (dy * dy)));
		}
		HX_STACK_LINE(177)
		if (((_g < (int)3))){
			HX_STACK_LINE(179)
			return randTile;
		}
	}
	HX_STACK_LINE(174)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Map_obj,getRandomEmptyTileNear,return )

::flixel::util::FlxPoint Map_obj::getTileNearSack( ){
	HX_STACK_FRAME("gameobjects.Map","getTileNearSack",0xdd47ad84,"gameobjects.Map.getTileNearSack","gameobjects/Map.hx",185,0xfd08544f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(185)
	while((true)){
		HX_STACK_LINE(188)
		::flixel::FlxSprite randSack;		HX_STACK_VAR(randSack,"randSack");
		HX_STACK_LINE(188)
		randSack = hx::TCast< flixel::FlxSprite >::cast(this->sacks->getRandom(null(),null()));
		HX_STACK_LINE(189)
		if ((randSack->alive)){
			HX_STACK_LINE(191)
			::flixel::util::FlxPoint _g = ::flixel::util::FlxPoint_obj::__new((Float(randSack->x) / Float((int)16)),(Float(randSack->y) / Float((int)16)));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(191)
			return this->getRandomEmptyTileNear(_g);
		}
	}
	HX_STACK_LINE(185)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Map_obj,getTileNearSack,return )

::flixel::util::FlxPoint Map_obj::getRandomEmptyTile( ){
	HX_STACK_FRAME("gameobjects.Map","getRandomEmptyTile",0x7de16060,"gameobjects.Map.getRandomEmptyTile","gameobjects/Map.hx",198,0xfd08544f)
	HX_STACK_THIS(this)
	HX_STACK_LINE(198)
	while((true)){
		HX_STACK_LINE(200)
		int xRand = ::flixel::util::FlxRandom_obj::intRanged((int)1,(this->widthInTiles - (int)1),null());		HX_STACK_VAR(xRand,"xRand");
		HX_STACK_LINE(201)
		int yRand = ::flixel::util::FlxRandom_obj::intRanged((int)1,(this->heightInTiles - (int)1),null());		HX_STACK_VAR(yRand,"yRand");
		HX_STACK_LINE(203)
		int _g = this->getTile(xRand,yRand);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(203)
		if (((  (((  (((_g == (int)2))) ? bool(!(this->hasCoinOrSack(xRand,yRand))) : bool(false) ))) ? bool(!(this->hasItem(xRand,yRand))) : bool(false) ))){
			HX_STACK_LINE(205)
			int _g1 = this->getTile((xRand - (int)1),yRand);		HX_STACK_VAR(_g1,"_g1");
			struct _Function_3_1{
				inline static bool Block( int &yRand,hx::ObjectPtr< ::gameobjects::Map_obj > __this,int &xRand){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","gameobjects/Map.hx",205,0xfd08544f)
					{
						HX_STACK_LINE(205)
						int _g2 = __this->getTile((xRand + (int)1),yRand);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(205)
						return (_g2 == (int)2);
					}
					return null();
				}
			};
			struct _Function_3_2{
				inline static bool Block( int &yRand,hx::ObjectPtr< ::gameobjects::Map_obj > __this,int &xRand){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","gameobjects/Map.hx",206,0xfd08544f)
					{
						HX_STACK_LINE(206)
						int _g3 = __this->getTile(xRand,(yRand - (int)1));		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(206)
						return (_g3 == (int)2);
					}
					return null();
				}
			};
			struct _Function_3_3{
				inline static bool Block( int &yRand,hx::ObjectPtr< ::gameobjects::Map_obj > __this,int &xRand){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","gameobjects/Map.hx",206,0xfd08544f)
					{
						HX_STACK_LINE(206)
						int _g4 = __this->getTile(xRand,(yRand + (int)1));		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(206)
						return (_g4 == (int)2);
					}
					return null();
				}
			};
			HX_STACK_LINE(205)
			if (((  ((!(((  ((!(((  ((!(((_g1 == (int)2))))) ? bool(_Function_3_1::Block(yRand,this,xRand)) : bool(true) ))))) ? bool(_Function_3_2::Block(yRand,this,xRand)) : bool(true) ))))) ? bool(_Function_3_3::Block(yRand,this,xRand)) : bool(true) ))){
				HX_STACK_LINE(208)
				return ::flixel::util::FlxPoint_obj::__new(xRand,yRand);
			}
		}
	}
	HX_STACK_LINE(198)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Map_obj,getRandomEmptyTile,return )

bool Map_obj::hasCoinOrSack( int x,int y){
	HX_STACK_FRAME("gameobjects.Map","hasCoinOrSack",0x22706c26,"gameobjects.Map.hasCoinOrSack","gameobjects/Map.hx",217,0xfd08544f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(218)
	for(::cpp::FastIterator_obj< ::flixel::FlxBasic > *__it = ::cpp::CreateFastIterator< ::flixel::FlxBasic >(::flixel::group::FlxTypedGroupIterator_obj::__new(this->coins->members,null()));  __it->hasNext(); ){
		::flixel::FlxBasic i = __it->next();
		{
			HX_STACK_LINE(220)
			::flixel::FlxSprite coin;		HX_STACK_VAR(coin,"coin");
			HX_STACK_LINE(220)
			coin = hx::TCast< flixel::FlxSprite >::cast(i);
			HX_STACK_LINE(221)
			if (((bool((bool(coin->alive) && bool(((x * (int)16) == coin->x)))) && bool(((y * (int)16) == coin->y))))){
				HX_STACK_LINE(223)
				return true;
			}
		}
;
	}
	HX_STACK_LINE(226)
	for(::cpp::FastIterator_obj< ::flixel::FlxBasic > *__it = ::cpp::CreateFastIterator< ::flixel::FlxBasic >(::flixel::group::FlxTypedGroupIterator_obj::__new(this->sacks->members,null()));  __it->hasNext(); ){
		::flixel::FlxBasic s = __it->next();
		{
			HX_STACK_LINE(228)
			::flixel::FlxSprite sack;		HX_STACK_VAR(sack,"sack");
			HX_STACK_LINE(228)
			sack = hx::TCast< flixel::FlxSprite >::cast(s);
			HX_STACK_LINE(229)
			if (((bool((bool(sack->alive) && bool(((x * (int)16) == sack->x)))) && bool(((y * (int)16) == sack->y))))){
				HX_STACK_LINE(231)
				return true;
			}
		}
;
	}
	HX_STACK_LINE(234)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(Map_obj,hasCoinOrSack,return )

bool Map_obj::hasItem( int x,int y){
	HX_STACK_FRAME("gameobjects.Map","hasItem",0x4a319a4f,"gameobjects.Map.hasItem","gameobjects/Map.hx",238,0xfd08544f)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(238)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC2(Map_obj,hasItem,return )


Map_obj::Map_obj()
{
}

void Map_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Map);
	HX_MARK_MEMBER_NAME(coins,"coins");
	HX_MARK_MEMBER_NAME(sacks,"sacks");
	HX_MARK_MEMBER_NAME(stairway,"stairway");
	HX_MARK_MEMBER_NAME(depth,"depth");
	HX_MARK_MEMBER_NAME(hasSacks,"hasSacks");
	::flixel::tile::FlxTilemap_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Map_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(coins,"coins");
	HX_VISIT_MEMBER_NAME(sacks,"sacks");
	HX_VISIT_MEMBER_NAME(stairway,"stairway");
	HX_VISIT_MEMBER_NAME(depth,"depth");
	HX_VISIT_MEMBER_NAME(hasSacks,"hasSacks");
	::flixel::tile::FlxTilemap_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Map_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hide") ) { return hide_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"coins") ) { return coins; }
		if (HX_FIELD_EQ(inName,"sacks") ) { return sacks; }
		if (HX_FIELD_EQ(inName,"depth") ) { return depth; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hasItem") ) { return hasItem_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"stairway") ) { return stairway; }
		if (HX_FIELD_EQ(inName,"hasSacks") ) { return hasSacks; }
		if (HX_FIELD_EQ(inName,"populate") ) { return populate_dyn(); }
		if (HX_FIELD_EQ(inName,"killSack") ) { return killSack_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getRandomCoin") ) { return getRandomCoin_dyn(); }
		if (HX_FIELD_EQ(inName,"hasCoinOrSack") ) { return hasCoinOrSack_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"killCoinOrSack") ) { return killCoinOrSack_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getTileNearSack") ) { return getTileNearSack_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addCoinsAndSacks") ) { return addCoinsAndSacks_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getRandomEmptyTile") ) { return getRandomEmptyTile_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"getRandomEmptyTileNear") ) { return getRandomEmptyTileNear_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Map_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"coins") ) { coins=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sacks") ) { sacks=inValue.Cast< ::flixel::group::FlxGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"depth") ) { depth=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"stairway") ) { stairway=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"hasSacks") ) { hasSacks=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Map_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("coins"));
	outFields->push(HX_CSTRING("sacks"));
	outFields->push(HX_CSTRING("stairway"));
	outFields->push(HX_CSTRING("depth"));
	outFields->push(HX_CSTRING("hasSacks"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(Map_obj,coins),HX_CSTRING("coins")},
	{hx::fsObject /*::flixel::group::FlxGroup*/ ,(int)offsetof(Map_obj,sacks),HX_CSTRING("sacks")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(Map_obj,stairway),HX_CSTRING("stairway")},
	{hx::fsInt,(int)offsetof(Map_obj,depth),HX_CSTRING("depth")},
	{hx::fsBool,(int)offsetof(Map_obj,hasSacks),HX_CSTRING("hasSacks")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("coins"),
	HX_CSTRING("sacks"),
	HX_CSTRING("stairway"),
	HX_CSTRING("depth"),
	HX_CSTRING("hasSacks"),
	HX_CSTRING("populate"),
	HX_CSTRING("hide"),
	HX_CSTRING("killCoinOrSack"),
	HX_CSTRING("killSack"),
	HX_CSTRING("addCoinsAndSacks"),
	HX_CSTRING("getRandomCoin"),
	HX_CSTRING("getRandomEmptyTileNear"),
	HX_CSTRING("getTileNearSack"),
	HX_CSTRING("getRandomEmptyTile"),
	HX_CSTRING("hasCoinOrSack"),
	HX_CSTRING("hasItem"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Map_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Map_obj::__mClass,"__mClass");
};

#endif

Class Map_obj::__mClass;

void Map_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("gameobjects.Map"), hx::TCanCast< Map_obj> ,sStaticFields,sMemberFields,
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

void Map_obj::__boot()
{
}

} // end namespace gameobjects
