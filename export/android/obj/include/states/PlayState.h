#ifndef INCLUDED_states_PlayState
#define INCLUDED_states_PlayState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxState.h>
HX_DECLARE_CLASS0(AmuletRoom)
HX_DECLARE_CLASS0(List)
HX_DECLARE_CLASS0(MapGenerator)
HX_DECLARE_CLASS0(Shop)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,tile,FlxTilemap)
HX_DECLARE_CLASS1(gameobjects,Map)
HX_DECLARE_CLASS1(gameobjects,Player)
HX_DECLARE_CLASS2(gameobjects,enemies,Enemy)
HX_DECLARE_CLASS2(gameobjects,enemies,Thief)
HX_DECLARE_CLASS1(states,PlayState)
namespace states{


class HXCPP_CLASS_ATTRIBUTES  PlayState_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef PlayState_obj OBJ_;
		PlayState_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PlayState_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PlayState_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PlayState"); }

		::MapGenerator mapGenerator;
		::Shop shop;
		::AmuletRoom amuletRoom;
		Array< ::Dynamic > enemyGroups;
		Array< int > chanceOfSpawning;
		::flixel::group::FlxGroup slimes;
		::flixel::group::FlxGroup thieves;
		::flixel::group::FlxGroup soldiers;
		::flixel::group::FlxGroup poisonSlimes;
		::List poisons;
		::flixel::group::FlxGroup ghosts;
		::List aliveEnemies;
		int minEnemyCount;
		int maxEnemyCount;
		int enemyCount;
		Float enemyTimer;
		::flixel::text::FlxText itemsText;
		int depth;
		::flixel::text::FlxText depthText;
		::flixel::text::FlxText highScoreText;
		::String initials;
		bool pressInitials;
		bool isGameOver;
		::flixel::text::FlxText gameOverText;
		virtual Void create( );

		virtual Void showAmuletRoom( );
		Dynamic showAmuletRoom_dyn();

		virtual Void showShop( );
		Dynamic showShop_dyn();

		virtual Void createNewMap( );
		Dynamic createNewMap_dyn();

		virtual Void killAllEnemies( );
		Dynamic killAllEnemies_dyn();

		virtual Void addEnemies( );
		Dynamic addEnemies_dyn();

		virtual ::gameobjects::enemies::Enemy getRandomEnemy( );
		Dynamic getRandomEnemy_dyn();

		virtual Void destroy( );

		virtual Void update( );

		virtual Void enemyCollision( ::gameobjects::Player player,::gameobjects::enemies::Enemy enemy);
		Dynamic enemyCollision_dyn();

		virtual Void coinCollision( ::flixel::FlxObject p,::flixel::FlxObject coin);
		Dynamic coinCollision_dyn();

		virtual Void sackCollision( ::flixel::FlxObject p,::flixel::FlxSprite sack);
		Dynamic sackCollision_dyn();

		virtual Void thiefCoinCollision( ::gameobjects::enemies::Thief p,::flixel::FlxSprite coin);
		Dynamic thiefCoinCollision_dyn();

		static ::gameobjects::Map currentMap;
		static ::gameobjects::Player player;
		static ::flixel::FlxSprite stairway;
		static ::flixel::text::FlxText scoreText;
		static int score;
		static Void addToScore( int add);
		static Dynamic addToScore_dyn();

};

} // end namespace states

#endif /* INCLUDED_states_PlayState */ 
