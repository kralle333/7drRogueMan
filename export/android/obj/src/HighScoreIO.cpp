#include <hxcpp.h>

#ifndef INCLUDED_DescriptionScoreMap
#include <DescriptionScoreMap.h>
#endif
#ifndef INCLUDED_HighScoreIO
#include <HighScoreIO.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif

Void HighScoreIO_obj::__construct()
{
HX_STACK_FRAME("HighScoreIO","new",0xcd884848,"HighScoreIO.new","HighScoreIO.hx",25,0x06a95828)
HX_STACK_THIS(this)
{
}
;
	return null();
}

//HighScoreIO_obj::~HighScoreIO_obj() { }

Dynamic HighScoreIO_obj::__CreateEmpty() { return  new HighScoreIO_obj; }
hx::ObjectPtr< HighScoreIO_obj > HighScoreIO_obj::__new()
{  hx::ObjectPtr< HighScoreIO_obj > result = new HighScoreIO_obj();
	result->__construct();
	return result;}

Dynamic HighScoreIO_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< HighScoreIO_obj > result = new HighScoreIO_obj();
	result->__construct();
	return result;}

Array< ::Dynamic > HighScoreIO_obj::scores;

int HighScoreIO_obj::maxScores;

bool HighScoreIO_obj::isInitialized;

::flixel::util::FlxSave HighScoreIO_obj::gameSave;

Array< ::Dynamic > HighScoreIO_obj::getScores( ){
	HX_STACK_FRAME("HighScoreIO","getScores",0x979d53ff,"HighScoreIO.getScores","HighScoreIO.hx",29,0x06a95828)
	HX_STACK_LINE(30)
	if ((!(::HighScoreIO_obj::isInitialized))){
		HX_STACK_LINE(32)
		::HighScoreIO_obj::initialize();
	}
	HX_STACK_LINE(34)
	return ::HighScoreIO_obj::scores;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HighScoreIO_obj,getScores,return )

Void HighScoreIO_obj::initialize( ){
{
		HX_STACK_FRAME("HighScoreIO","initialize",0x36cb0668,"HighScoreIO.initialize","HighScoreIO.hx",38,0x06a95828)
		HX_STACK_LINE(38)
		if ((!(::HighScoreIO_obj::isInitialized))){
			HX_STACK_LINE(40)
			::flixel::util::FlxSave _g = ::flixel::util::FlxSave_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(40)
			::HighScoreIO_obj::gameSave = _g;
			HX_STACK_LINE(41)
			::HighScoreIO_obj::gameSave->bind(HX_CSTRING("highscores"));
			HX_STACK_LINE(42)
			Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(42)
			::HighScoreIO_obj::scores = _g1;
			HX_STACK_LINE(43)
			if (((::HighScoreIO_obj::gameSave->data->__Field(HX_CSTRING("scoresDesc"),true) == null()))){
				HX_STACK_LINE(45)
				Array< ::String > _g2 = Array_obj< ::String >::__new();		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(45)
				::HighScoreIO_obj::gameSave->data->__FieldRef(HX_CSTRING("scoresDesc")) = _g2;
				HX_STACK_LINE(46)
				Array< int > _g3 = Array_obj< int >::__new();		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(46)
				::HighScoreIO_obj::gameSave->data->__FieldRef(HX_CSTRING("scoresVal")) = _g3;
			}
			else{
				HX_STACK_LINE(50)
				int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(50)
				int _g2 = ::HighScoreIO_obj::gameSave->data->__Field(HX_CSTRING("scoresDesc"),true)->__Field(HX_CSTRING("length"),true);		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(50)
				while((true)){
					HX_STACK_LINE(50)
					if ((!(((_g11 < _g2))))){
						HX_STACK_LINE(50)
						break;
					}
					HX_STACK_LINE(50)
					int i = (_g11)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(52)
					::DescriptionScoreMap _g4 = ::DescriptionScoreMap_obj::__new(::HighScoreIO_obj::gameSave->data->__Field(HX_CSTRING("scoresVal"),true)->__GetItem(i),::HighScoreIO_obj::gameSave->data->__Field(HX_CSTRING("scoresDesc"),true)->__GetItem(i));		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(52)
					::HighScoreIO_obj::scores->push(_g4);
				}
			}
			HX_STACK_LINE(56)
			::HighScoreIO_obj::isInitialized = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HighScoreIO_obj,initialize,(void))

Void HighScoreIO_obj::clearScores( ){
{
		HX_STACK_FRAME("HighScoreIO","clearScores",0x5d232236,"HighScoreIO.clearScores","HighScoreIO.hx",61,0x06a95828)
		HX_STACK_LINE(62)
		::HighScoreIO_obj::initialize();
		HX_STACK_LINE(63)
		::HighScoreIO_obj::gameSave->data->__FieldRef(HX_CSTRING("scoresDesc")) = null();
		HX_STACK_LINE(64)
		::HighScoreIO_obj::gameSave->data->__FieldRef(HX_CSTRING("scoresVal")) = null();
		HX_STACK_LINE(65)
		::HighScoreIO_obj::gameSave->flush(null(),null());
		HX_STACK_LINE(66)
		::HighScoreIO_obj::isInitialized = false;
		HX_STACK_LINE(67)
		::HighScoreIO_obj::initialize();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(HighScoreIO_obj,clearScores,(void))

bool HighScoreIO_obj::isHighScore( int score){
	HX_STACK_FRAME("HighScoreIO","isHighScore",0xe655ff2e,"HighScoreIO.isHighScore","HighScoreIO.hx",70,0x06a95828)
	HX_STACK_ARG(score,"score")
	HX_STACK_LINE(71)
	if ((!(::HighScoreIO_obj::isInitialized))){
		HX_STACK_LINE(73)
		::HighScoreIO_obj::initialize();
	}
	HX_STACK_LINE(75)
	if (((::HighScoreIO_obj::scores->length < ::HighScoreIO_obj::maxScores))){
		HX_STACK_LINE(77)
		return true;
	}
	HX_STACK_LINE(79)
	{
		HX_STACK_LINE(79)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(79)
		int _g = ::HighScoreIO_obj::maxScores;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(79)
		while((true)){
			HX_STACK_LINE(79)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(79)
				break;
			}
			HX_STACK_LINE(79)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(81)
			if (((score > ::HighScoreIO_obj::scores->__get(i).StaticCast< ::DescriptionScoreMap >()->score))){
				HX_STACK_LINE(83)
				return true;
			}
		}
	}
	HX_STACK_LINE(86)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(HighScoreIO_obj,isHighScore,return )

Void HighScoreIO_obj::putScore( ::String initials,int depth,int score){
{
		HX_STACK_FRAME("HighScoreIO","putScore",0x85d5d11b,"HighScoreIO.putScore","HighScoreIO.hx",90,0x06a95828)
		HX_STACK_ARG(initials,"initials")
		HX_STACK_ARG(depth,"depth")
		HX_STACK_ARG(score,"score")
		HX_STACK_LINE(91)
		if ((!(::HighScoreIO_obj::isInitialized))){
			HX_STACK_LINE(93)
			::HighScoreIO_obj::initialize();
		}
		HX_STACK_LINE(95)
		::DescriptionScoreMap scoreToPut = ::DescriptionScoreMap_obj::__new(score,HX_CSTRING(""));		HX_STACK_VAR(scoreToPut,"scoreToPut");
		HX_STACK_LINE(96)
		if (((depth <= (int)11))){
			HX_STACK_LINE(98)
			scoreToPut->description = ((initials + HX_CSTRING(" was killed on depth ")) + depth);
		}
		else{
			HX_STACK_LINE(102)
			scoreToPut->description = (initials + HX_CSTRING(" got the amulet of yendor!"));
		}
		HX_STACK_LINE(104)
		scoreToPut->score = score;
		HX_STACK_LINE(105)
		{
			HX_STACK_LINE(105)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(105)
			int _g = ::HighScoreIO_obj::maxScores;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(105)
			while((true)){
				HX_STACK_LINE(105)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(105)
					break;
				}
				HX_STACK_LINE(105)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(107)
				if (((i >= ::HighScoreIO_obj::scores->length))){
					HX_STACK_LINE(109)
					::HighScoreIO_obj::scores[i] = scoreToPut;
					HX_STACK_LINE(110)
					hx::IndexRef((::HighScoreIO_obj::gameSave->data->__Field(HX_CSTRING("scoresDesc"),true)).mPtr,i) = scoreToPut->description;
					HX_STACK_LINE(111)
					hx::IndexRef((::HighScoreIO_obj::gameSave->data->__Field(HX_CSTRING("scoresVal"),true)).mPtr,i) = scoreToPut->score;
					HX_STACK_LINE(112)
					break;
				}
				else{
					HX_STACK_LINE(114)
					if (((scoreToPut->score > ::HighScoreIO_obj::scores->__get(i).StaticCast< ::DescriptionScoreMap >()->score))){
						HX_STACK_LINE(116)
						::DescriptionScoreMap temp = ::HighScoreIO_obj::scores->__get(i).StaticCast< ::DescriptionScoreMap >();		HX_STACK_VAR(temp,"temp");
						HX_STACK_LINE(117)
						::HighScoreIO_obj::scores[i] = scoreToPut;
						HX_STACK_LINE(118)
						scoreToPut = temp;
						HX_STACK_LINE(119)
						hx::IndexRef((::HighScoreIO_obj::gameSave->data->__Field(HX_CSTRING("scoresDesc"),true)).mPtr,i) = scoreToPut->description;
						HX_STACK_LINE(120)
						hx::IndexRef((::HighScoreIO_obj::gameSave->data->__Field(HX_CSTRING("scoresVal"),true)).mPtr,i) = scoreToPut->score;
					}
				}
			}
		}
		HX_STACK_LINE(123)
		::HighScoreIO_obj::gameSave->flush(null(),null());
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(HighScoreIO_obj,putScore,(void))


HighScoreIO_obj::HighScoreIO_obj()
{
}

Dynamic HighScoreIO_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"scores") ) { return scores; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gameSave") ) { return gameSave; }
		if (HX_FIELD_EQ(inName,"putScore") ) { return putScore_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"maxScores") ) { return maxScores; }
		if (HX_FIELD_EQ(inName,"getScores") ) { return getScores_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"clearScores") ) { return clearScores_dyn(); }
		if (HX_FIELD_EQ(inName,"isHighScore") ) { return isHighScore_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"isInitialized") ) { return isInitialized; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic HighScoreIO_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"scores") ) { scores=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gameSave") ) { gameSave=inValue.Cast< ::flixel::util::FlxSave >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"maxScores") ) { maxScores=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"isInitialized") ) { isInitialized=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void HighScoreIO_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("scores"),
	HX_CSTRING("maxScores"),
	HX_CSTRING("isInitialized"),
	HX_CSTRING("gameSave"),
	HX_CSTRING("getScores"),
	HX_CSTRING("initialize"),
	HX_CSTRING("clearScores"),
	HX_CSTRING("isHighScore"),
	HX_CSTRING("putScore"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(HighScoreIO_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(HighScoreIO_obj::scores,"scores");
	HX_MARK_MEMBER_NAME(HighScoreIO_obj::maxScores,"maxScores");
	HX_MARK_MEMBER_NAME(HighScoreIO_obj::isInitialized,"isInitialized");
	HX_MARK_MEMBER_NAME(HighScoreIO_obj::gameSave,"gameSave");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(HighScoreIO_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(HighScoreIO_obj::scores,"scores");
	HX_VISIT_MEMBER_NAME(HighScoreIO_obj::maxScores,"maxScores");
	HX_VISIT_MEMBER_NAME(HighScoreIO_obj::isInitialized,"isInitialized");
	HX_VISIT_MEMBER_NAME(HighScoreIO_obj::gameSave,"gameSave");
};

#endif

Class HighScoreIO_obj::__mClass;

void HighScoreIO_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("HighScoreIO"), hx::TCanCast< HighScoreIO_obj> ,sStaticFields,sMemberFields,
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

void HighScoreIO_obj::__boot()
{
	maxScores= (int)10;
	isInitialized= false;
}

