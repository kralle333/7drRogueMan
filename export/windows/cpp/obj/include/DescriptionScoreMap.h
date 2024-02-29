#ifndef INCLUDED_DescriptionScoreMap
#define INCLUDED_DescriptionScoreMap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(DescriptionScoreMap)


class HXCPP_CLASS_ATTRIBUTES  DescriptionScoreMap_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef DescriptionScoreMap_obj OBJ_;
		DescriptionScoreMap_obj();
		Void __construct(int score,::String description);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< DescriptionScoreMap_obj > __new(int score,::String description);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~DescriptionScoreMap_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("DescriptionScoreMap"); }

		int score;
		::String description;
};


#endif /* INCLUDED_DescriptionScoreMap */ 
