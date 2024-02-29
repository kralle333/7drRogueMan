#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_MapGenerator
#include <MapGenerator.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
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
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

Void MapGenerator_obj::__construct()
{
HX_STACK_FRAME("MapGenerator","new",0xa5e36ea9,"MapGenerator.new","MapGenerator.hx",33,0xd51ed8e7)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//MapGenerator_obj::~MapGenerator_obj() { }

Dynamic MapGenerator_obj::__CreateEmpty() { return  new MapGenerator_obj; }
hx::ObjectPtr< MapGenerator_obj > MapGenerator_obj::__new()
{  hx::ObjectPtr< MapGenerator_obj > result = new MapGenerator_obj();
	result->__construct();
	return result;}

Dynamic MapGenerator_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MapGenerator_obj > result = new MapGenerator_obj();
	result->__construct();
	return result;}

Array< ::Dynamic > MapGenerator_obj::threeHor;

Array< ::Dynamic > MapGenerator_obj::threeVer;

Array< ::Dynamic > MapGenerator_obj::LSouthWest;

Array< ::Dynamic > MapGenerator_obj::LSouthEast;

Array< ::Dynamic > MapGenerator_obj::LNorthWest;

Array< ::Dynamic > MapGenerator_obj::LNorthEast;

Array< ::Dynamic > MapGenerator_obj::fourBlock;

Array< ::Dynamic > MapGenerator_obj::point;

Array< ::Dynamic > MapGenerator_obj::blockTypes;

int MapGenerator_obj::gridWidth;

int MapGenerator_obj::gridHeight;

Array< ::Dynamic > MapGenerator_obj::grid;

int MapGenerator_obj::blockName;

Void MapGenerator_obj::init( ){
{
		HX_STACK_FRAME("MapGenerator","init",0x7dd61ca7,"MapGenerator.init","MapGenerator.hx",37,0xd51ed8e7)
		HX_STACK_LINE(38)
		::MapGenerator_obj::blockTypes[(int)0] = ::MapGenerator_obj::threeHor;
		HX_STACK_LINE(39)
		::MapGenerator_obj::blockTypes[(int)1] = ::MapGenerator_obj::threeVer;
		HX_STACK_LINE(40)
		::MapGenerator_obj::blockTypes[(int)2] = ::MapGenerator_obj::LSouthWest;
		HX_STACK_LINE(41)
		::MapGenerator_obj::blockTypes[(int)3] = ::MapGenerator_obj::LSouthEast;
		HX_STACK_LINE(42)
		::MapGenerator_obj::blockTypes[(int)4] = ::MapGenerator_obj::LNorthWest;
		HX_STACK_LINE(43)
		::MapGenerator_obj::blockTypes[(int)5] = ::MapGenerator_obj::LNorthEast;
		HX_STACK_LINE(44)
		::MapGenerator_obj::blockTypes[(int)6] = ::MapGenerator_obj::fourBlock;
		HX_STACK_LINE(45)
		::MapGenerator_obj::blockTypes[(int)7] = ::MapGenerator_obj::point;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MapGenerator_obj,init,(void))

::String MapGenerator_obj::generateMap( int depth){
	HX_STACK_FRAME("MapGenerator","generateMap",0xb85aa1b0,"MapGenerator.generateMap","MapGenerator.hx",49,0xd51ed8e7)
	HX_STACK_ARG(depth,"depth")
	HX_STACK_LINE(51)
	{
		HX_STACK_LINE(51)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(51)
		int _g = ::MapGenerator_obj::gridWidth;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(51)
		while((true)){
			HX_STACK_LINE(51)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(51)
				break;
			}
			HX_STACK_LINE(51)
			int x = (_g1)++;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(53)
			::MapGenerator_obj::grid[x] = Array_obj< int >::__new();
			HX_STACK_LINE(54)
			{
				HX_STACK_LINE(54)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(54)
				int _g2 = ::MapGenerator_obj::gridHeight;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(54)
				while((true)){
					HX_STACK_LINE(54)
					if ((!(((_g3 < _g2))))){
						HX_STACK_LINE(54)
						break;
					}
					HX_STACK_LINE(54)
					int y = (_g3)++;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(56)
					::MapGenerator_obj::grid->__get(x).StaticCast< Array< int > >()[y] = (int)0;
				}
			}
		}
	}
	HX_STACK_LINE(60)
	while((true)){
		HX_STACK_LINE(60)
		if ((!((!(::MapGenerator_obj::isGridFull()))))){
			HX_STACK_LINE(60)
			break;
		}
		HX_STACK_LINE(62)
		int _g = ::flixel::util::FlxRandom_obj::intRanged((int)0,(::MapGenerator_obj::blockTypes->length - (int)1),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(62)
		Array< ::Dynamic > randType = ::MapGenerator_obj::blockTypes->__get(_g).StaticCast< Array< ::Dynamic > >();		HX_STACK_VAR(randType,"randType");
		HX_STACK_LINE(63)
		::flixel::util::FlxPoint randPos = ::MapGenerator_obj::getRandomEmptyPos();		HX_STACK_VAR(randPos,"randPos");
		HX_STACK_LINE(64)
		if ((::MapGenerator_obj::placeIfFit(randPos,randType))){
		}
	}
	HX_STACK_LINE(70)
	Array< ::Dynamic > map = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(map,"map");
	HX_STACK_LINE(71)
	::List line = ::List_obj::__new();		HX_STACK_VAR(line,"line");
	HX_STACK_LINE(73)
	{
		HX_STACK_LINE(73)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(73)
		int _g = ::MapGenerator_obj::gridWidth;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(73)
		while((true)){
			HX_STACK_LINE(73)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(73)
				break;
			}
			HX_STACK_LINE(73)
			int x = (_g1)++;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(75)
			line->clear();
			HX_STACK_LINE(76)
			line->add((int)1);
			HX_STACK_LINE(77)
			if (((x == (int)0))){
				HX_STACK_LINE(79)
				line->add((int)1);
			}
			else{
				HX_STACK_LINE(83)
				line->add((int)0);
			}
			HX_STACK_LINE(85)
			map[x] = Array_obj< int >::__new();
			HX_STACK_LINE(86)
			{
				HX_STACK_LINE(86)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(86)
				int _g2 = (::MapGenerator_obj::gridHeight - (int)1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(86)
				while((true)){
					HX_STACK_LINE(86)
					if ((!(((_g3 < _g2))))){
						HX_STACK_LINE(86)
						break;
					}
					HX_STACK_LINE(86)
					int y = (_g3)++;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(88)
					int first = ::MapGenerator_obj::grid->__get(x).StaticCast< Array< int > >()->__get(y);		HX_STACK_VAR(first,"first");
					HX_STACK_LINE(89)
					int second = ::MapGenerator_obj::grid->__get(x).StaticCast< Array< int > >()->__get((y + (int)1));		HX_STACK_VAR(second,"second");
					HX_STACK_LINE(92)
					line->add(first);
					HX_STACK_LINE(95)
					if (((bool((first != (int)0)) && bool((first == second))))){
						HX_STACK_LINE(97)
						line->add(first);
					}
					else{
						HX_STACK_LINE(99)
						if (((y == (::MapGenerator_obj::gridHeight - (int)2)))){
							HX_STACK_LINE(101)
							line->add(second);
						}
						else{
							HX_STACK_LINE(105)
							line->add((int)0);
						}
					}
				}
			}
			HX_STACK_LINE(109)
			if (((bool((x == (int)0)) || bool((x == (::MapGenerator_obj::gridWidth - (int)1)))))){
				HX_STACK_LINE(111)
				line->add((int)1);
			}
			else{
				HX_STACK_LINE(115)
				line->add((int)0);
			}
			HX_STACK_LINE(117)
			line->add((int)1);
			HX_STACK_LINE(118)
			{
				HX_STACK_LINE(118)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(118)
				int _g2 = line->length;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(118)
				while((true)){
					HX_STACK_LINE(118)
					if ((!(((_g3 < _g2))))){
						HX_STACK_LINE(118)
						break;
					}
					HX_STACK_LINE(118)
					int i = (_g3)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(121)
					Dynamic _g11 = line->pop();		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(121)
					map->__get(x).StaticCast< Array< int > >()[i] = ::Std_obj::_int(_g11);
				}
			}
		}
	}
	HX_STACK_LINE(126)
	{
		HX_STACK_LINE(126)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(126)
		int _g = map->__get((int)0).StaticCast< Array< int > >()->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(126)
		while((true)){
			HX_STACK_LINE(126)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(126)
				break;
			}
			HX_STACK_LINE(126)
			int y = (_g1)++;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(128)
			line->clear();
			HX_STACK_LINE(129)
			line->add((int)1);
			HX_STACK_LINE(130)
			if (((bool((y == (int)0)) || bool((y == (map->__get((int)0).StaticCast< Array< int > >()->length - (int)1)))))){
				HX_STACK_LINE(132)
				line->add((int)1);
			}
			else{
				HX_STACK_LINE(136)
				line->add((int)0);
			}
			HX_STACK_LINE(138)
			{
				HX_STACK_LINE(138)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(138)
				int _g2 = (::MapGenerator_obj::grid->length - (int)1);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(138)
				while((true)){
					HX_STACK_LINE(138)
					if ((!(((_g3 < _g2))))){
						HX_STACK_LINE(138)
						break;
					}
					HX_STACK_LINE(138)
					int x = (_g3)++;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(141)
					int first = map->__get(x).StaticCast< Array< int > >()->__get(y);		HX_STACK_VAR(first,"first");
					HX_STACK_LINE(142)
					int second = map->__get((x + (int)1)).StaticCast< Array< int > >()->__get(y);		HX_STACK_VAR(second,"second");
					HX_STACK_LINE(145)
					if (((y == (map->__get((int)0).StaticCast< Array< int > >()->length - (int)2)))){
						HX_STACK_LINE(147)
						line->add((int)0);
					}
					else{
						HX_STACK_LINE(151)
						line->add(second);
					}
					HX_STACK_LINE(156)
					if (((bool((first != (int)0)) && bool((first == second))))){
						HX_STACK_LINE(158)
						line->add(first);
					}
					else{
						HX_STACK_LINE(160)
						if (((x == (::MapGenerator_obj::grid->length - (int)2)))){
							HX_STACK_LINE(162)
							line->add(first);
						}
						else{
							HX_STACK_LINE(166)
							line->add((int)0);
						}
					}
				}
			}
			HX_STACK_LINE(169)
			if (((bool((y == (int)0)) || bool((y == (map->__get((int)0).StaticCast< Array< int > >()->length - (int)1)))))){
				HX_STACK_LINE(171)
				line->add((int)1);
			}
			else{
				HX_STACK_LINE(175)
				line->add((int)0);
			}
			HX_STACK_LINE(177)
			line->add((int)1);
			HX_STACK_LINE(178)
			{
				HX_STACK_LINE(178)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(178)
				int _g2 = line->length;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(178)
				while((true)){
					HX_STACK_LINE(178)
					if ((!(((_g3 < _g2))))){
						HX_STACK_LINE(178)
						break;
					}
					HX_STACK_LINE(178)
					int i = (_g3)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(180)
					if (((map->__get(i).StaticCast< Array< int > >() == null()))){
						HX_STACK_LINE(182)
						map[i] = Array_obj< int >::__new();
					}
					HX_STACK_LINE(184)
					int value = line->pop();		HX_STACK_VAR(value,"value");
					HX_STACK_LINE(186)
					map->__get(i).StaticCast< Array< int > >()[y] = value;
				}
			}
		}
	}
	HX_STACK_LINE(191)
	int randX = ::flixel::util::FlxRandom_obj::intRanged((int)4,(int)16,null());		HX_STACK_VAR(randX,"randX");
	HX_STACK_LINE(193)
	map->__get(randX).StaticCast< Array< int > >()[(int)0] = (int)0;
	HX_STACK_LINE(194)
	if (((depth < (int)11))){
		HX_STACK_LINE(196)
		map->__get(randX).StaticCast< Array< int > >()[(map->__get((int)0).StaticCast< Array< int > >()->length - (int)1)] = (int)0;
	}
	HX_STACK_LINE(201)
	Array< int > oneDim = Array_obj< int >::__new();		HX_STACK_VAR(oneDim,"oneDim");
	HX_STACK_LINE(202)
	{
		HX_STACK_LINE(202)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(202)
		int _g = map->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(202)
		while((true)){
			HX_STACK_LINE(202)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(202)
				break;
			}
			HX_STACK_LINE(202)
			int x = (_g1)++;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(204)
			{
				HX_STACK_LINE(204)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(204)
				int _g2 = map->__get(x).StaticCast< Array< int > >()->length;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(204)
				while((true)){
					HX_STACK_LINE(204)
					if ((!(((_g3 < _g2))))){
						HX_STACK_LINE(204)
						break;
					}
					HX_STACK_LINE(204)
					int y = (_g3)++;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(206)
					if (((map->__get(x).StaticCast< Array< int > >()->__get(y) > (int)0))){
						HX_STACK_LINE(208)
						map->__get(x).StaticCast< Array< int > >()[y] = (int)1;
					}
					else{
						HX_STACK_LINE(212)
						map->__get(x).StaticCast< Array< int > >()[y] = (int)2;
					}
					HX_STACK_LINE(214)
					oneDim[((y * map->length) + x)] = map->__get(x).StaticCast< Array< int > >()->__get(y);
				}
			}
		}
	}
	HX_STACK_LINE(218)
	return ::flixel::util::FlxStringUtil_obj::arrayToCSV(oneDim,map->length,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MapGenerator_obj,generateMap,return )

::flixel::util::FlxPoint MapGenerator_obj::getRandomEmptyPos( ){
	HX_STACK_FRAME("MapGenerator","getRandomEmptyPos",0xc5d9a569,"MapGenerator.getRandomEmptyPos","MapGenerator.hx",222,0xd51ed8e7)
	HX_STACK_LINE(223)
	while((true)){
		HX_STACK_LINE(225)
		int _g = ::flixel::util::FlxRandom_obj::intRanged((int)0,(::MapGenerator_obj::gridWidth - (int)1),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(225)
		int _g1 = ::flixel::util::FlxRandom_obj::intRanged((int)0,(::MapGenerator_obj::gridHeight - (int)1),null());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(225)
		::flixel::util::FlxPoint randPos = ::flixel::util::FlxPoint_obj::__new(_g,_g1);		HX_STACK_VAR(randPos,"randPos");
		HX_STACK_LINE(226)
		int _g2 = ::Std_obj::_int(randPos->x);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(226)
		Array< int > _g3 = ::MapGenerator_obj::grid->__get(_g2).StaticCast< Array< int > >();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(226)
		int _g4 = ::Std_obj::_int(randPos->y);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(226)
		int _g5 = _g3->__get(_g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(226)
		if (((_g5 == (int)0))){
			HX_STACK_LINE(228)
			return randPos;
		}
	}
	HX_STACK_LINE(231)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MapGenerator_obj,getRandomEmptyPos,return )

bool MapGenerator_obj::isGridFull( ){
	HX_STACK_FRAME("MapGenerator","isGridFull",0xecd58656,"MapGenerator.isGridFull","MapGenerator.hx",235,0xd51ed8e7)
	HX_STACK_LINE(237)
	{
		HX_STACK_LINE(237)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(237)
		int _g = ::MapGenerator_obj::gridWidth;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(237)
		while((true)){
			HX_STACK_LINE(237)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(237)
				break;
			}
			HX_STACK_LINE(237)
			int x = (_g1)++;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(239)
			{
				HX_STACK_LINE(239)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(239)
				int _g2 = ::MapGenerator_obj::gridHeight;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(239)
				while((true)){
					HX_STACK_LINE(239)
					if ((!(((_g3 < _g2))))){
						HX_STACK_LINE(239)
						break;
					}
					HX_STACK_LINE(239)
					int y = (_g3)++;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(241)
					if (((::MapGenerator_obj::grid->__get(x).StaticCast< Array< int > >()->__get(y) == (int)0))){
						HX_STACK_LINE(243)
						return false;
					}
				}
			}
		}
	}
	HX_STACK_LINE(247)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MapGenerator_obj,isGridFull,return )

bool MapGenerator_obj::printGrid( ){
	HX_STACK_FRAME("MapGenerator","printGrid",0x9b1d709c,"MapGenerator.printGrid","MapGenerator.hx",251,0xd51ed8e7)
	HX_STACK_LINE(252)
	::String gridMessage = HX_CSTRING("\n");		HX_STACK_VAR(gridMessage,"gridMessage");
	HX_STACK_LINE(253)
	{
		HX_STACK_LINE(253)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(253)
		int _g = ::MapGenerator_obj::gridHeight;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(253)
		while((true)){
			HX_STACK_LINE(253)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(253)
				break;
			}
			HX_STACK_LINE(253)
			int y = (_g1)++;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(255)
			{
				HX_STACK_LINE(255)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(255)
				int _g2 = ::MapGenerator_obj::gridWidth;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(255)
				while((true)){
					HX_STACK_LINE(255)
					if ((!(((_g3 < _g2))))){
						HX_STACK_LINE(255)
						break;
					}
					HX_STACK_LINE(255)
					int x = (_g3)++;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(258)
					::String _g4 = ::Std_obj::string(::MapGenerator_obj::grid->__get(x).StaticCast< Array< int > >()->__get(y));		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(258)
					::String _g11 = (_g4 + HX_CSTRING(","));		HX_STACK_VAR(_g11,"_g11");
					HX_STACK_LINE(258)
					hx::AddEq(gridMessage,_g11);
				}
			}
			HX_STACK_LINE(260)
			hx::AddEq(gridMessage,HX_CSTRING("\n"));
		}
	}
	HX_STACK_LINE(262)
	::haxe::Log_obj::trace(gridMessage,hx::SourceInfo(HX_CSTRING("MapGenerator.hx"),262,HX_CSTRING("MapGenerator"),HX_CSTRING("printGrid")));
	HX_STACK_LINE(263)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MapGenerator_obj,printGrid,return )

bool MapGenerator_obj::placeIfFit( ::flixel::util::FlxPoint position,Array< ::Dynamic > type){
	HX_STACK_FRAME("MapGenerator","placeIfFit",0xb9669c84,"MapGenerator.placeIfFit","MapGenerator.hx",266,0xd51ed8e7)
	HX_STACK_ARG(position,"position")
	HX_STACK_ARG(type,"type")
	HX_STACK_LINE(267)
	::flixel::util::FlxPoint newPos = ::flixel::util::FlxPoint_obj::__new(null(),null());		HX_STACK_VAR(newPos,"newPos");
	HX_STACK_LINE(268)
	{
		HX_STACK_LINE(268)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(268)
		int _g = type->length;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(268)
		while((true)){
			HX_STACK_LINE(268)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(268)
				break;
			}
			HX_STACK_LINE(268)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(270)
			newPos->set_x((position->x + type->__get(i).StaticCast< ::flixel::util::FlxPoint >()->x));
			HX_STACK_LINE(271)
			newPos->set_y((position->y + type->__get(i).StaticCast< ::flixel::util::FlxPoint >()->y));
			struct _Function_3_1{
				inline static bool Block( ::flixel::util::FlxPoint &newPos){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","MapGenerator.hx",273,0xd51ed8e7)
					{
						HX_STACK_LINE(273)
						int _g2 = ::Std_obj::_int(newPos->x);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(273)
						Array< int > _g11 = ::MapGenerator_obj::grid->__get(_g2).StaticCast< Array< int > >();		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(273)
						int _g21 = ::Std_obj::_int(newPos->y);		HX_STACK_VAR(_g21,"_g21");
						HX_STACK_LINE(273)
						int _g3 = _g11->__get(_g21);		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(273)
						return (_g3 != (int)0);
					}
					return null();
				}
			};
			HX_STACK_LINE(273)
			if (((  ((!(((bool((bool((bool((newPos->x < (int)0)) || bool((newPos->y < (int)0)))) || bool((newPos->x >= ::MapGenerator_obj::gridWidth)))) || bool((newPos->y >= ::MapGenerator_obj::gridHeight))))))) ? bool(_Function_3_1::Block(newPos)) : bool(true) ))){
				HX_STACK_LINE(275)
				int j = (i - (int)1);		HX_STACK_VAR(j,"j");
				HX_STACK_LINE(276)
				while((true)){
					HX_STACK_LINE(276)
					if ((!(((j >= (int)0))))){
						HX_STACK_LINE(276)
						break;
					}
					HX_STACK_LINE(278)
					newPos->set_x((position->x + type->__get(j).StaticCast< ::flixel::util::FlxPoint >()->x));
					HX_STACK_LINE(279)
					newPos->set_y((position->y + type->__get(j).StaticCast< ::flixel::util::FlxPoint >()->y));
					HX_STACK_LINE(280)
					int _g4 = ::Std_obj::_int(newPos->x);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(280)
					Array< int > _g5 = ::MapGenerator_obj::grid->__get(_g4).StaticCast< Array< int > >();		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(280)
					int _g6 = ::Std_obj::_int(newPos->y);		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(280)
					_g5[_g6] = (int)0;
					HX_STACK_LINE(281)
					(j)--;
				}
				HX_STACK_LINE(283)
				return false;
			}
			else{
				HX_STACK_LINE(287)
				int _g7 = ::Std_obj::_int(newPos->x);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(287)
				Array< int > _g8 = ::MapGenerator_obj::grid->__get(_g7).StaticCast< Array< int > >();		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(287)
				int _g9 = ::Std_obj::_int(newPos->y);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(287)
				_g8[_g9] = ::MapGenerator_obj::blockName;
			}
		}
	}
	HX_STACK_LINE(290)
	(::MapGenerator_obj::blockName)++;
	HX_STACK_LINE(291)
	return true;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(MapGenerator_obj,placeIfFit,return )


MapGenerator_obj::MapGenerator_obj()
{
}

Dynamic MapGenerator_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"grid") ) { return grid; }
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { return point; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"threeHor") ) { return threeHor; }
		if (HX_FIELD_EQ(inName,"threeVer") ) { return threeVer; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fourBlock") ) { return fourBlock; }
		if (HX_FIELD_EQ(inName,"gridWidth") ) { return gridWidth; }
		if (HX_FIELD_EQ(inName,"blockName") ) { return blockName; }
		if (HX_FIELD_EQ(inName,"printGrid") ) { return printGrid_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"LSouthWest") ) { return LSouthWest; }
		if (HX_FIELD_EQ(inName,"LSouthEast") ) { return LSouthEast; }
		if (HX_FIELD_EQ(inName,"LNorthWest") ) { return LNorthWest; }
		if (HX_FIELD_EQ(inName,"LNorthEast") ) { return LNorthEast; }
		if (HX_FIELD_EQ(inName,"blockTypes") ) { return blockTypes; }
		if (HX_FIELD_EQ(inName,"gridHeight") ) { return gridHeight; }
		if (HX_FIELD_EQ(inName,"isGridFull") ) { return isGridFull_dyn(); }
		if (HX_FIELD_EQ(inName,"placeIfFit") ) { return placeIfFit_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"generateMap") ) { return generateMap_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getRandomEmptyPos") ) { return getRandomEmptyPos_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MapGenerator_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"grid") ) { grid=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"point") ) { point=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"threeHor") ) { threeHor=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"threeVer") ) { threeVer=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fourBlock") ) { fourBlock=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gridWidth") ) { gridWidth=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blockName") ) { blockName=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"LSouthWest") ) { LSouthWest=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LSouthEast") ) { LSouthEast=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LNorthWest") ) { LNorthWest=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"LNorthEast") ) { LNorthEast=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blockTypes") ) { blockTypes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gridHeight") ) { gridHeight=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MapGenerator_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("threeHor"),
	HX_CSTRING("threeVer"),
	HX_CSTRING("LSouthWest"),
	HX_CSTRING("LSouthEast"),
	HX_CSTRING("LNorthWest"),
	HX_CSTRING("LNorthEast"),
	HX_CSTRING("fourBlock"),
	HX_CSTRING("point"),
	HX_CSTRING("blockTypes"),
	HX_CSTRING("gridWidth"),
	HX_CSTRING("gridHeight"),
	HX_CSTRING("grid"),
	HX_CSTRING("blockName"),
	HX_CSTRING("init"),
	HX_CSTRING("generateMap"),
	HX_CSTRING("getRandomEmptyPos"),
	HX_CSTRING("isGridFull"),
	HX_CSTRING("printGrid"),
	HX_CSTRING("placeIfFit"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MapGenerator_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MapGenerator_obj::threeHor,"threeHor");
	HX_MARK_MEMBER_NAME(MapGenerator_obj::threeVer,"threeVer");
	HX_MARK_MEMBER_NAME(MapGenerator_obj::LSouthWest,"LSouthWest");
	HX_MARK_MEMBER_NAME(MapGenerator_obj::LSouthEast,"LSouthEast");
	HX_MARK_MEMBER_NAME(MapGenerator_obj::LNorthWest,"LNorthWest");
	HX_MARK_MEMBER_NAME(MapGenerator_obj::LNorthEast,"LNorthEast");
	HX_MARK_MEMBER_NAME(MapGenerator_obj::fourBlock,"fourBlock");
	HX_MARK_MEMBER_NAME(MapGenerator_obj::point,"point");
	HX_MARK_MEMBER_NAME(MapGenerator_obj::blockTypes,"blockTypes");
	HX_MARK_MEMBER_NAME(MapGenerator_obj::gridWidth,"gridWidth");
	HX_MARK_MEMBER_NAME(MapGenerator_obj::gridHeight,"gridHeight");
	HX_MARK_MEMBER_NAME(MapGenerator_obj::grid,"grid");
	HX_MARK_MEMBER_NAME(MapGenerator_obj::blockName,"blockName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MapGenerator_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MapGenerator_obj::threeHor,"threeHor");
	HX_VISIT_MEMBER_NAME(MapGenerator_obj::threeVer,"threeVer");
	HX_VISIT_MEMBER_NAME(MapGenerator_obj::LSouthWest,"LSouthWest");
	HX_VISIT_MEMBER_NAME(MapGenerator_obj::LSouthEast,"LSouthEast");
	HX_VISIT_MEMBER_NAME(MapGenerator_obj::LNorthWest,"LNorthWest");
	HX_VISIT_MEMBER_NAME(MapGenerator_obj::LNorthEast,"LNorthEast");
	HX_VISIT_MEMBER_NAME(MapGenerator_obj::fourBlock,"fourBlock");
	HX_VISIT_MEMBER_NAME(MapGenerator_obj::point,"point");
	HX_VISIT_MEMBER_NAME(MapGenerator_obj::blockTypes,"blockTypes");
	HX_VISIT_MEMBER_NAME(MapGenerator_obj::gridWidth,"gridWidth");
	HX_VISIT_MEMBER_NAME(MapGenerator_obj::gridHeight,"gridHeight");
	HX_VISIT_MEMBER_NAME(MapGenerator_obj::grid,"grid");
	HX_VISIT_MEMBER_NAME(MapGenerator_obj::blockName,"blockName");
};

#endif

Class MapGenerator_obj::__mClass;

void MapGenerator_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("MapGenerator"), hx::TCanCast< MapGenerator_obj> ,sStaticFields,sMemberFields,
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

void MapGenerator_obj::__boot()
{
struct _Function_0_1{
	inline static Array< ::Dynamic > Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","MapGenerator.hx",12,0xd51ed8e7)
		{
			HX_STACK_LINE(12)
			::flixel::util::FlxPoint _g = ::flixel::util::FlxPoint_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(12)
			::flixel::util::FlxPoint _g1 = ::flixel::util::FlxPoint_obj::__new((int)1,(int)0);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(12)
			::flixel::util::FlxPoint _g2 = ::flixel::util::FlxPoint_obj::__new((int)2,(int)0);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(12)
			return Array_obj< ::Dynamic >::__new().Add(_g).Add(_g1).Add(_g2);
		}
		return null();
	}
};
	threeHor= _Function_0_1::Block();
struct _Function_0_2{
	inline static Array< ::Dynamic > Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","MapGenerator.hx",13,0xd51ed8e7)
		{
			HX_STACK_LINE(13)
			::flixel::util::FlxPoint _g = ::flixel::util::FlxPoint_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(13)
			::flixel::util::FlxPoint _g1 = ::flixel::util::FlxPoint_obj::__new((int)0,(int)1);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(13)
			::flixel::util::FlxPoint _g2 = ::flixel::util::FlxPoint_obj::__new((int)0,(int)2);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(13)
			return Array_obj< ::Dynamic >::__new().Add(_g).Add(_g1).Add(_g2);
		}
		return null();
	}
};
	threeVer= _Function_0_2::Block();
struct _Function_0_3{
	inline static Array< ::Dynamic > Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","MapGenerator.hx",15,0xd51ed8e7)
		{
			HX_STACK_LINE(15)
			::flixel::util::FlxPoint _g = ::flixel::util::FlxPoint_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(15)
			::flixel::util::FlxPoint _g1 = ::flixel::util::FlxPoint_obj::__new((int)0,(int)1);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(15)
			::flixel::util::FlxPoint _g2 = ::flixel::util::FlxPoint_obj::__new((int)1,(int)1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(15)
			return Array_obj< ::Dynamic >::__new().Add(_g).Add(_g1).Add(_g2);
		}
		return null();
	}
};
	LSouthWest= _Function_0_3::Block();
struct _Function_0_4{
	inline static Array< ::Dynamic > Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","MapGenerator.hx",16,0xd51ed8e7)
		{
			HX_STACK_LINE(16)
			::flixel::util::FlxPoint _g = ::flixel::util::FlxPoint_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(16)
			::flixel::util::FlxPoint _g1 = ::flixel::util::FlxPoint_obj::__new((int)1,(int)0);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(16)
			::flixel::util::FlxPoint _g2 = ::flixel::util::FlxPoint_obj::__new((int)1,(int)-1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(16)
			return Array_obj< ::Dynamic >::__new().Add(_g).Add(_g1).Add(_g2);
		}
		return null();
	}
};
	LSouthEast= _Function_0_4::Block();
struct _Function_0_5{
	inline static Array< ::Dynamic > Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","MapGenerator.hx",17,0xd51ed8e7)
		{
			HX_STACK_LINE(17)
			::flixel::util::FlxPoint _g = ::flixel::util::FlxPoint_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(17)
			::flixel::util::FlxPoint _g1 = ::flixel::util::FlxPoint_obj::__new((int)-1,(int)0);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(17)
			::flixel::util::FlxPoint _g2 = ::flixel::util::FlxPoint_obj::__new((int)-1,(int)1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(17)
			return Array_obj< ::Dynamic >::__new().Add(_g).Add(_g1).Add(_g2);
		}
		return null();
	}
};
	LNorthWest= _Function_0_5::Block();
struct _Function_0_6{
	inline static Array< ::Dynamic > Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","MapGenerator.hx",18,0xd51ed8e7)
		{
			HX_STACK_LINE(18)
			::flixel::util::FlxPoint _g = ::flixel::util::FlxPoint_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(18)
			::flixel::util::FlxPoint _g1 = ::flixel::util::FlxPoint_obj::__new((int)0,(int)-1);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(18)
			::flixel::util::FlxPoint _g2 = ::flixel::util::FlxPoint_obj::__new((int)1,(int)-1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(18)
			return Array_obj< ::Dynamic >::__new().Add(_g).Add(_g1).Add(_g2);
		}
		return null();
	}
};
	LNorthEast= _Function_0_6::Block();
struct _Function_0_7{
	inline static Array< ::Dynamic > Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","MapGenerator.hx",20,0xd51ed8e7)
		{
			HX_STACK_LINE(20)
			::flixel::util::FlxPoint _g = ::flixel::util::FlxPoint_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(20)
			::flixel::util::FlxPoint _g1 = ::flixel::util::FlxPoint_obj::__new((int)0,(int)1);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(20)
			::flixel::util::FlxPoint _g2 = ::flixel::util::FlxPoint_obj::__new((int)1,(int)0);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(20)
			::flixel::util::FlxPoint _g3 = ::flixel::util::FlxPoint_obj::__new((int)1,(int)1);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(20)
			return Array_obj< ::Dynamic >::__new().Add(_g).Add(_g1).Add(_g2).Add(_g3);
		}
		return null();
	}
};
	fourBlock= _Function_0_7::Block();
struct _Function_0_8{
	inline static Array< ::Dynamic > Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","MapGenerator.hx",21,0xd51ed8e7)
		{
			HX_STACK_LINE(21)
			::flixel::util::FlxPoint _g = ::flixel::util::FlxPoint_obj::__new((int)0,(int)0);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(21)
			return Array_obj< ::Dynamic >::__new().Add(_g);
		}
		return null();
	}
};
	point= _Function_0_8::Block();
	blockTypes= Array_obj< ::Dynamic >::__new();
	gridWidth= (int)9;
	gridHeight= (int)9;
	grid= Array_obj< ::Dynamic >::__new();
	blockName= (int)1;
}

