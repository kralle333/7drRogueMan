#include <hxcpp.h>

#ifndef INCLUDED_DescriptionScoreMap
#include <DescriptionScoreMap.h>
#endif

Void DescriptionScoreMap_obj::__construct(int score,::String description)
{
HX_STACK_FRAME("DescriptionScoreMap","new",0xaba09358,"DescriptionScoreMap.new","HighScoreIO.hx",10,0x06a95828)
HX_STACK_THIS(this)
HX_STACK_ARG(score,"score")
HX_STACK_ARG(description,"description")
{
	HX_STACK_LINE(11)
	this->score = score;
	HX_STACK_LINE(12)
	this->description = description;
}
;
	return null();
}

//DescriptionScoreMap_obj::~DescriptionScoreMap_obj() { }

Dynamic DescriptionScoreMap_obj::__CreateEmpty() { return  new DescriptionScoreMap_obj; }
hx::ObjectPtr< DescriptionScoreMap_obj > DescriptionScoreMap_obj::__new(int score,::String description)
{  hx::ObjectPtr< DescriptionScoreMap_obj > result = new DescriptionScoreMap_obj();
	result->__construct(score,description);
	return result;}

Dynamic DescriptionScoreMap_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< DescriptionScoreMap_obj > result = new DescriptionScoreMap_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}


DescriptionScoreMap_obj::DescriptionScoreMap_obj()
{
}

void DescriptionScoreMap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DescriptionScoreMap);
	HX_MARK_MEMBER_NAME(score,"score");
	HX_MARK_MEMBER_NAME(description,"description");
	HX_MARK_END_CLASS();
}

void DescriptionScoreMap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(score,"score");
	HX_VISIT_MEMBER_NAME(description,"description");
}

Dynamic DescriptionScoreMap_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"score") ) { return score; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"description") ) { return description; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic DescriptionScoreMap_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"score") ) { score=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"description") ) { description=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DescriptionScoreMap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("score"));
	outFields->push(HX_CSTRING("description"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(DescriptionScoreMap_obj,score),HX_CSTRING("score")},
	{hx::fsString,(int)offsetof(DescriptionScoreMap_obj,description),HX_CSTRING("description")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("score"),
	HX_CSTRING("description"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DescriptionScoreMap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DescriptionScoreMap_obj::__mClass,"__mClass");
};

#endif

Class DescriptionScoreMap_obj::__mClass;

void DescriptionScoreMap_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("DescriptionScoreMap"), hx::TCanCast< DescriptionScoreMap_obj> ,sStaticFields,sMemberFields,
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

void DescriptionScoreMap_obj::__boot()
{
}

