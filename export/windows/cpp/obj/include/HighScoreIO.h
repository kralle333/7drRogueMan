#ifndef INCLUDED_HighScoreIO
#define INCLUDED_HighScoreIO

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(DescriptionScoreMap)
HX_DECLARE_CLASS0(HighScoreIO)
HX_DECLARE_CLASS2(flixel,util,FlxSave)


class HXCPP_CLASS_ATTRIBUTES  HighScoreIO_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef HighScoreIO_obj OBJ_;
		HighScoreIO_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< HighScoreIO_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HighScoreIO_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("HighScoreIO"); }

		static Array< ::Dynamic > scores;
		static int maxScores;
		static bool isInitialized;
		static ::flixel::util::FlxSave gameSave;
		static Array< ::Dynamic > getScores( );
		static Dynamic getScores_dyn();

		static Void initialize( );
		static Dynamic initialize_dyn();

		static Void clearScores( );
		static Dynamic clearScores_dyn();

		static bool isHighScore( int score);
		static Dynamic isHighScore_dyn();

		static Void putScore( ::String initials,int depth,int score);
		static Dynamic putScore_dyn();

};


#endif /* INCLUDED_HighScoreIO */ 
