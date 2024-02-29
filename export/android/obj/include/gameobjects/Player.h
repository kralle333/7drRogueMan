#ifndef INCLUDED_gameobjects_Player
#define INCLUDED_gameobjects_Player

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxSprite.h>
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,effects,FlxSpriteFilter)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS1(gameobjects,Player)
HX_DECLARE_CLASS2(gameobjects,items,Item)
HX_DECLARE_CLASS3(openfl,_v2,filters,BitmapFilter)
HX_DECLARE_CLASS3(openfl,_v2,filters,GlowFilter)
namespace gameobjects{


class HXCPP_CLASS_ATTRIBUTES  Player_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef Player_obj OBJ_;
		Player_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Player_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Player_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Player"); }

		Float movementSpeed;
		::flixel::FlxSprite heart;
		::flixel::text::FlxText healthTxt;
		::flixel::FlxSprite coin;
		int coinCount;
		::flixel::text::FlxText coinText;
		bool isVulnerable;
		Float blinkTimer;
		Float blinkInterval;
		bool blink;
		bool canKill;
		bool hasSword;
		bool isEffectInPlace;
		Float effectTimer;
		::flixel::effects::FlxSpriteFilter filter;
		::openfl::_v2::filters::GlowFilter glowFilter;
		Array< ::Dynamic > items;
		int heldItemCount;
		bool moved;
		bool justUsedStaff;
		virtual Void restart( );
		Dynamic restart_dyn();

		virtual Void resetStats( );
		Dynamic resetStats_dyn();

		virtual Void setMovementSpeed( Float time,Float value);
		Dynamic setMovementSpeed_dyn();

		virtual Void setInvulnerable( Float time);
		Dynamic setInvulnerable_dyn();

		virtual Void setAllKilling( Float time);
		Dynamic setAllKilling_dyn();

		virtual Void killedEnemy( );
		Dynamic killedEnemy_dyn();

		virtual Void removeLife( );
		Dynamic removeLife_dyn();

		virtual Void addLife( );
		Dynamic addLife_dyn();

		virtual Void addCoin( int value);
		Dynamic addCoin_dyn();

		virtual Void update( );

		virtual Void tryRemoveItem( int index);
		Dynamic tryRemoveItem_dyn();

		virtual Void tryUseItem( int index);
		Dynamic tryUseItem_dyn();

		virtual Void addItem( ::gameobjects::items::Item item);
		Dynamic addItem_dyn();

};

} // end namespace gameobjects

#endif /* INCLUDED_gameobjects_Player */ 
