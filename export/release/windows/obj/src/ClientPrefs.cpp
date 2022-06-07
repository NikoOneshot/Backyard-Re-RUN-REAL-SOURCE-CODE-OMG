#include <hxcpp.h>

#ifndef INCLUDED_Achievements
#include <Achievements.h>
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Control
#include <Control.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_FPS
#include <openfl/display/FPS.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_72_saveSettings,"ClientPrefs","saveSettings",0xab8c0989,"ClientPrefs.saveSettings","ClientPrefs.hx",72,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_115_loadPrefs,"ClientPrefs","loadPrefs",0x58c63c41,"ClientPrefs.loadPrefs","ClientPrefs.hx",115,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_207_reloadControls,"ClientPrefs","reloadControls",0xe353bb78,"ClientPrefs.reloadControls","ClientPrefs.hx",207,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_214_removeControls,"ClientPrefs","removeControls",0xbe206763,"ClientPrefs.removeControls","ClientPrefs.hx",214,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_228_loadControls,"ClientPrefs","loadControls",0xfeebb305,"ClientPrefs.loadControls","ClientPrefs.hx",228,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_11_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",11,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_12_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",12,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_13_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",13,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_14_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",14,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_15_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",15,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_16_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",16,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_17_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",17,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_18_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",18,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_19_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",19,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_20_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",20,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_21_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",21,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_22_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",22,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_23_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",23,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_24_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",24,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_25_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",25,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_26_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",26,0x329d1619)
static const int _hx_array_data_8ae055c5_24[] = {
	(int)0,(int)0,(int)0,
};
static const int _hx_array_data_8ae055c5_25[] = {
	(int)0,(int)0,(int)0,
};
static const int _hx_array_data_8ae055c5_26[] = {
	(int)0,(int)0,(int)0,
};
static const int _hx_array_data_8ae055c5_27[] = {
	(int)0,(int)0,(int)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_27_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",27,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_28_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",28,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_29_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",29,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_30_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",30,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_31_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",31,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_32_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",32,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_33_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",33,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_34_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",34,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_36_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",36,0x329d1619)
static const int _hx_array_data_8ae055c5_37[] = {
	(int)65,(int)37,(int)83,(int)40,(int)87,(int)38,(int)68,(int)39,(int)65,(int)37,(int)83,(int)40,(int)87,(int)38,(int)68,(int)39,(int)82,(int)-1,(int)32,(int)13,(int)8,(int)27,(int)13,(int)27,
};
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_53_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",53,0x329d1619)
HX_LOCAL_STACK_FRAME(_hx_pos_1453641688f31b8d_70_boot,"ClientPrefs","boot",0xe0a3d37b,"ClientPrefs.boot","ClientPrefs.hx",70,0x329d1619)

void ClientPrefs_obj::__construct() { }

Dynamic ClientPrefs_obj::__CreateEmpty() { return new ClientPrefs_obj; }

void *ClientPrefs_obj::_hx_vtable = 0;

Dynamic ClientPrefs_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ClientPrefs_obj > _hx_result = new ClientPrefs_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ClientPrefs_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3ddb9b05;
}

bool ClientPrefs_obj::downScroll;

bool ClientPrefs_obj::windowMove;

bool ClientPrefs_obj::hitSounds;

bool ClientPrefs_obj::middleScroll;

bool ClientPrefs_obj::showFPS;

bool ClientPrefs_obj::flashing;

bool ClientPrefs_obj::globalAntialiasing;

bool ClientPrefs_obj::noteSplashes;

bool ClientPrefs_obj::lowQuality;

int ClientPrefs_obj::framerate;

bool ClientPrefs_obj::cursing;

bool ClientPrefs_obj::violence;

bool ClientPrefs_obj::camZooms;

bool ClientPrefs_obj::hideHud;

int ClientPrefs_obj::noteOffset;

::Array< ::Dynamic> ClientPrefs_obj::arrowHSV;

bool ClientPrefs_obj::imagesPersist;

bool ClientPrefs_obj::ghostTapping;

bool ClientPrefs_obj::hideTime;

Float ClientPrefs_obj::scrollUnderlayAlpha;

bool ClientPrefs_obj::moreScoreInfo;

bool ClientPrefs_obj::eyesores;

bool ClientPrefs_obj::antispam;

bool ClientPrefs_obj::missSounds;

::Array< int > ClientPrefs_obj::defaultKeys;

::cpp::VirtualArray ClientPrefs_obj::keyBinds;

::Array< int > ClientPrefs_obj::lastControls;

void ClientPrefs_obj::saveSettings(){
            	HX_GC_STACKFRAME(&_hx_pos_1453641688f31b8d_72_saveSettings)
HXLINE(  73)		::flixel::FlxG_obj::save->data->__SetField(HX_("downScroll",0f,ba,68,84),::ClientPrefs_obj::downScroll,::hx::paccDynamic);
HXLINE(  74)		::flixel::FlxG_obj::save->data->__SetField(HX_("windowMove",21,5b,37,d3),::ClientPrefs_obj::windowMove,::hx::paccDynamic);
HXLINE(  75)		::flixel::FlxG_obj::save->data->__SetField(HX_("hitSounds",77,63,40,66),::ClientPrefs_obj::hitSounds,::hx::paccDynamic);
HXLINE(  76)		::flixel::FlxG_obj::save->data->__SetField(HX_("middleScroll",42,cd,58,62),::ClientPrefs_obj::middleScroll,::hx::paccDynamic);
HXLINE(  77)		::flixel::FlxG_obj::save->data->__SetField(HX_("showFPS",ec,0a,9a,7b),::ClientPrefs_obj::showFPS,::hx::paccDynamic);
HXLINE(  78)		::flixel::FlxG_obj::save->data->__SetField(HX_("flashing",32,85,e8,99),::ClientPrefs_obj::flashing,::hx::paccDynamic);
HXLINE(  79)		::flixel::FlxG_obj::save->data->__SetField(HX_("globalAntialiasing",f7,9c,ed,4c),::ClientPrefs_obj::globalAntialiasing,::hx::paccDynamic);
HXLINE(  80)		::flixel::FlxG_obj::save->data->__SetField(HX_("noteSplashes",a7,57,29,8d),::ClientPrefs_obj::noteSplashes,::hx::paccDynamic);
HXLINE(  81)		::flixel::FlxG_obj::save->data->__SetField(HX_("lowQuality",8b,52,27,3e),::ClientPrefs_obj::lowQuality,::hx::paccDynamic);
HXLINE(  82)		::flixel::FlxG_obj::save->data->__SetField(HX_("framerate",8d,e5,4b,4e),::ClientPrefs_obj::framerate,::hx::paccDynamic);
HXLINE(  83)		::flixel::FlxG_obj::save->data->__SetField(HX_("cursing",cf,db,8f,cc),::ClientPrefs_obj::cursing,::hx::paccDynamic);
HXLINE(  84)		::flixel::FlxG_obj::save->data->__SetField(HX_("violence",5b,5e,88,3f),::ClientPrefs_obj::violence,::hx::paccDynamic);
HXLINE(  85)		::flixel::FlxG_obj::save->data->__SetField(HX_("camZooms",71,f3,cd,90),::ClientPrefs_obj::camZooms,::hx::paccDynamic);
HXLINE(  86)		::flixel::FlxG_obj::save->data->__SetField(HX_("noteOffset",25,a5,53,fe),::ClientPrefs_obj::noteOffset,::hx::paccDynamic);
HXLINE(  87)		::flixel::FlxG_obj::save->data->__SetField(HX_("hideHud",15,b9,3c,b7),::ClientPrefs_obj::hideHud,::hx::paccDynamic);
HXLINE(  88)		::flixel::FlxG_obj::save->data->__SetField(HX_("arrowHSV",c2,f4,b4,fd),::ClientPrefs_obj::arrowHSV,::hx::paccDynamic);
HXLINE(  89)		::flixel::FlxG_obj::save->data->__SetField(HX_("imagesPersist",3c,00,5c,08),::ClientPrefs_obj::imagesPersist,::hx::paccDynamic);
HXLINE(  90)		::flixel::FlxG_obj::save->data->__SetField(HX_("ghostTapping",c6,6a,da,10),::ClientPrefs_obj::ghostTapping,::hx::paccDynamic);
HXLINE(  91)		::flixel::FlxG_obj::save->data->__SetField(HX_("hideTime",ef,b5,ca,a5),::ClientPrefs_obj::hideTime,::hx::paccDynamic);
HXLINE(  92)		::flixel::FlxG_obj::save->data->__SetField(HX_("scrollUnderlayAlpha",25,01,0d,91),::ClientPrefs_obj::scrollUnderlayAlpha,::hx::paccDynamic);
HXLINE(  93)		::flixel::FlxG_obj::save->data->__SetField(HX_("moreScoreInfo",8b,ce,b4,ec),::ClientPrefs_obj::moreScoreInfo,::hx::paccDynamic);
HXLINE(  94)		::flixel::FlxG_obj::save->data->__SetField(HX_("eyesores",33,d7,61,1b),::ClientPrefs_obj::eyesores,::hx::paccDynamic);
HXLINE(  95)		::flixel::FlxG_obj::save->data->__SetField(HX_("antispam",6b,e3,27,ad),::ClientPrefs_obj::antispam,::hx::paccDynamic);
HXLINE(  96)		::flixel::FlxG_obj::save->data->__SetField(HX_("missSounds",e0,d4,49,2b),::ClientPrefs_obj::missSounds,::hx::paccDynamic);
HXLINE(  98)		::Array< ::String > achieves = ::Array_obj< ::String >::__new(0);
HXLINE(  99)		{
HXLINE(  99)			int _g = 0;
HXDLIN(  99)			int _g1 = ::Achievements_obj::achievementsUnlocked->get_length();
HXDLIN(  99)			while((_g < _g1)){
HXLINE(  99)				_g = (_g + 1);
HXDLIN(  99)				int i = (_g - 1);
HXLINE( 100)				if (( (bool)(::Achievements_obj::achievementsUnlocked->__get(i)->__GetItem(1)) )) {
HXLINE( 101)					achieves->push(::Achievements_obj::achievementsUnlocked->__get(i)->__GetItem(0));
            				}
            			}
            		}
HXLINE( 104)		::flixel::FlxG_obj::save->data->__SetField(HX_("achievementsUnlocked",67,55,27,1c),achieves,::hx::paccDynamic);
HXLINE( 105)		::flixel::FlxG_obj::save->data->__SetField(HX_("henchmenDeath",f4,76,2a,dd),::Achievements_obj::henchmenDeath,::hx::paccDynamic);
HXLINE( 106)		::flixel::FlxG_obj::save->flush(null(),null());
HXLINE( 108)		 ::flixel::util::FlxSave save =  ::flixel::util::FlxSave_obj::__alloc( HX_CTX );
HXLINE( 109)		save->bind(HX_("controls",76,86,bc,37),HX_("ninjamuffin99",f7,4c,e5,00));
HXLINE( 110)		save->data->__SetField(HX_("customControls",47,63,49,5a),::ClientPrefs_obj::lastControls,::hx::paccDynamic);
HXLINE( 111)		save->flush(null(),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ClientPrefs_obj,saveSettings,(void))

void ClientPrefs_obj::loadPrefs(){
            	HX_GC_STACKFRAME(&_hx_pos_1453641688f31b8d_115_loadPrefs)
HXLINE( 116)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("downScroll",0f,ba,68,84),::hx::paccDynamic) )) {
HXLINE( 117)			::ClientPrefs_obj::downScroll = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("downScroll",0f,ba,68,84),::hx::paccDynamic)) );
            		}
HXLINE( 119)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("windowMove",21,5b,37,d3),::hx::paccDynamic) )) {
HXLINE( 120)			::ClientPrefs_obj::windowMove = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("windowMove",21,5b,37,d3),::hx::paccDynamic)) );
            		}
HXLINE( 122)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("hitSounds",77,63,40,66),::hx::paccDynamic) )) {
HXLINE( 123)			::ClientPrefs_obj::hitSounds = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("hitSounds",77,63,40,66),::hx::paccDynamic)) );
            		}
HXLINE( 125)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("middleScroll",42,cd,58,62),::hx::paccDynamic) )) {
HXLINE( 126)			::ClientPrefs_obj::middleScroll = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("middleScroll",42,cd,58,62),::hx::paccDynamic)) );
            		}
HXLINE( 128)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("showFPS",ec,0a,9a,7b),::hx::paccDynamic) )) {
HXLINE( 129)			::ClientPrefs_obj::showFPS = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("showFPS",ec,0a,9a,7b),::hx::paccDynamic)) );
HXLINE( 130)			if (::hx::IsNotNull( ::Main_obj::fpsVar )) {
HXLINE( 131)				::Main_obj::fpsVar->set_visible(::ClientPrefs_obj::showFPS);
            			}
            		}
HXLINE( 134)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("flashing",32,85,e8,99),::hx::paccDynamic) )) {
HXLINE( 135)			::ClientPrefs_obj::flashing = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("flashing",32,85,e8,99),::hx::paccDynamic)) );
            		}
HXLINE( 137)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("globalAntialiasing",f7,9c,ed,4c),::hx::paccDynamic) )) {
HXLINE( 138)			::ClientPrefs_obj::globalAntialiasing = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("globalAntialiasing",f7,9c,ed,4c),::hx::paccDynamic)) );
            		}
HXLINE( 140)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("noteSplashes",a7,57,29,8d),::hx::paccDynamic) )) {
HXLINE( 141)			::ClientPrefs_obj::noteSplashes = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("noteSplashes",a7,57,29,8d),::hx::paccDynamic)) );
            		}
HXLINE( 143)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("scrollUnderlayAlpha",25,01,0d,91),::hx::paccDynamic) )) {
HXLINE( 144)			::ClientPrefs_obj::scrollUnderlayAlpha = ( (Float)(::flixel::FlxG_obj::save->data->__Field(HX_("scrollUnderlayAlpha",25,01,0d,91),::hx::paccDynamic)) );
            		}
HXLINE( 146)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("lowQuality",8b,52,27,3e),::hx::paccDynamic) )) {
HXLINE( 147)			::ClientPrefs_obj::lowQuality = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("lowQuality",8b,52,27,3e),::hx::paccDynamic)) );
            		}
HXLINE( 149)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("moreScoreInfo",8b,ce,b4,ec),::hx::paccDynamic) )) {
HXLINE( 150)			::ClientPrefs_obj::moreScoreInfo = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("moreScoreInfo",8b,ce,b4,ec),::hx::paccDynamic)) );
            		}
HXLINE( 152)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("eyesores",33,d7,61,1b),::hx::paccDynamic) )) {
HXLINE( 153)			::ClientPrefs_obj::eyesores = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("eyesores",33,d7,61,1b),::hx::paccDynamic)) );
            		}
HXLINE( 155)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("antispam",6b,e3,27,ad),::hx::paccDynamic) )) {
HXLINE( 156)			::ClientPrefs_obj::antispam = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("antispam",6b,e3,27,ad),::hx::paccDynamic)) );
            		}
HXLINE( 158)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("missSounds",e0,d4,49,2b),::hx::paccDynamic) )) {
HXLINE( 159)			::ClientPrefs_obj::missSounds = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("missSounds",e0,d4,49,2b),::hx::paccDynamic)) );
            		}
HXLINE( 161)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("framerate",8d,e5,4b,4e),::hx::paccDynamic) )) {
HXLINE( 162)			::ClientPrefs_obj::framerate = ( (int)(::flixel::FlxG_obj::save->data->__Field(HX_("framerate",8d,e5,4b,4e),::hx::paccDynamic)) );
HXLINE( 163)			if ((::ClientPrefs_obj::framerate > ::flixel::FlxG_obj::drawFramerate)) {
HXLINE( 164)				::flixel::FlxG_obj::set_updateFramerate(::ClientPrefs_obj::framerate);
HXLINE( 165)				::flixel::FlxG_obj::set_drawFramerate(::ClientPrefs_obj::framerate);
            			}
            			else {
HXLINE( 167)				::flixel::FlxG_obj::set_drawFramerate(::ClientPrefs_obj::framerate);
HXLINE( 168)				::flixel::FlxG_obj::set_updateFramerate(::ClientPrefs_obj::framerate);
            			}
            		}
HXLINE( 177)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("camZooms",71,f3,cd,90),::hx::paccDynamic) )) {
HXLINE( 178)			::ClientPrefs_obj::camZooms = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("camZooms",71,f3,cd,90),::hx::paccDynamic)) );
            		}
HXLINE( 180)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("hideHud",15,b9,3c,b7),::hx::paccDynamic) )) {
HXLINE( 181)			::ClientPrefs_obj::hideHud = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("hideHud",15,b9,3c,b7),::hx::paccDynamic)) );
            		}
HXLINE( 183)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("noteOffset",25,a5,53,fe),::hx::paccDynamic) )) {
HXLINE( 184)			::ClientPrefs_obj::noteOffset = ( (int)(::flixel::FlxG_obj::save->data->__Field(HX_("noteOffset",25,a5,53,fe),::hx::paccDynamic)) );
            		}
HXLINE( 186)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("arrowHSV",c2,f4,b4,fd),::hx::paccDynamic) )) {
HXLINE( 187)			::ClientPrefs_obj::arrowHSV = ( (::Array< ::Dynamic>)(::flixel::FlxG_obj::save->data->__Field(HX_("arrowHSV",c2,f4,b4,fd),::hx::paccDynamic)) );
            		}
HXLINE( 189)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("imagesPersist",3c,00,5c,08),::hx::paccDynamic) )) {
HXLINE( 190)			::ClientPrefs_obj::imagesPersist = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("imagesPersist",3c,00,5c,08),::hx::paccDynamic)) );
HXLINE( 191)			::flixel::graphics::FlxGraphic_obj::defaultPersist = ::ClientPrefs_obj::imagesPersist;
            		}
HXLINE( 193)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("ghostTapping",c6,6a,da,10),::hx::paccDynamic) )) {
HXLINE( 194)			::ClientPrefs_obj::ghostTapping = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("ghostTapping",c6,6a,da,10),::hx::paccDynamic)) );
            		}
HXLINE( 196)		if (::hx::IsNotNull( ::flixel::FlxG_obj::save->data->__Field(HX_("hideTime",ef,b5,ca,a5),::hx::paccDynamic) )) {
HXLINE( 197)			::ClientPrefs_obj::hideTime = ( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("hideTime",ef,b5,ca,a5),::hx::paccDynamic)) );
            		}
HXLINE( 200)		 ::flixel::util::FlxSave save =  ::flixel::util::FlxSave_obj::__alloc( HX_CTX );
HXLINE( 201)		save->bind(HX_("controls",76,86,bc,37),HX_("ninjamuffin99",f7,4c,e5,00));
HXLINE( 202)		bool _hx_tmp;
HXDLIN( 202)		if (::hx::IsNotNull( save )) {
HXLINE( 202)			_hx_tmp = ::hx::IsNotNull( save->data->__Field(HX_("customControls",47,63,49,5a),::hx::paccDynamic) );
            		}
            		else {
HXLINE( 202)			_hx_tmp = false;
            		}
HXDLIN( 202)		if (_hx_tmp) {
HXLINE( 203)			::ClientPrefs_obj::reloadControls(( (::Array< int >)(save->data->__Field(HX_("customControls",47,63,49,5a),::hx::paccDynamic)) ));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ClientPrefs_obj,loadPrefs,(void))

void ClientPrefs_obj::reloadControls(::Array< int > newKeys){
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_207_reloadControls)
HXLINE( 208)		::ClientPrefs_obj::removeControls(::ClientPrefs_obj::lastControls);
HXLINE( 209)		::ClientPrefs_obj::lastControls = newKeys->copy();
HXLINE( 210)		::ClientPrefs_obj::loadControls(::ClientPrefs_obj::lastControls);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ClientPrefs_obj,reloadControls,(void))

void ClientPrefs_obj::removeControls(::Array< int > controlArray){
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_214_removeControls)
HXDLIN( 214)		int _g = 0;
HXDLIN( 214)		int _g1 = ::ClientPrefs_obj::keyBinds->get_length();
HXDLIN( 214)		while((_g < _g1)){
HXDLIN( 214)			_g = (_g + 1);
HXDLIN( 214)			int i = (_g - 1);
HXLINE( 215)			int controlValue = (i * 2);
HXLINE( 216)			::Array< int > controlsToRemove = ::Array_obj< int >::__new(0);
HXLINE( 217)			{
HXLINE( 218)				if ((controlArray->__get(controlValue) != -1)) {
HXLINE( 219)					controlsToRemove->push(controlArray->__get(controlValue));
            				}
HXLINE( 218)				if ((controlArray->__get((controlValue + 1)) != -1)) {
HXLINE( 219)					controlsToRemove->push(controlArray->__get((controlValue + 1)));
            				}
            			}
HXLINE( 222)			if ((controlsToRemove->length > 0)) {
HXLINE( 223)				::PlayerSettings_obj::player1->controls->unbindKeys(Dynamic( ::ClientPrefs_obj::keyBinds->__get(i)->__GetItem(0)).StaticCast<  ::Control >(),controlsToRemove);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ClientPrefs_obj,removeControls,(void))

void ClientPrefs_obj::loadControls(::Array< int > controlArray){
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_228_loadControls)
HXDLIN( 228)		int _g = 0;
HXDLIN( 228)		int _g1 = ::ClientPrefs_obj::keyBinds->get_length();
HXDLIN( 228)		while((_g < _g1)){
HXDLIN( 228)			_g = (_g + 1);
HXDLIN( 228)			int i = (_g - 1);
HXLINE( 229)			int controlValue = (i * 2);
HXLINE( 230)			::Array< int > controlsToAdd = ::Array_obj< int >::__new(0);
HXLINE( 231)			{
HXLINE( 232)				if ((controlArray->__get(controlValue) != -1)) {
HXLINE( 233)					controlsToAdd->push(controlArray->__get(controlValue));
            				}
HXLINE( 232)				if ((controlArray->__get((controlValue + 1)) != -1)) {
HXLINE( 233)					controlsToAdd->push(controlArray->__get((controlValue + 1)));
            				}
            			}
HXLINE( 236)			if ((controlsToAdd->length > 0)) {
HXLINE( 237)				::PlayerSettings_obj::player1->controls->bindKeys(Dynamic( ::ClientPrefs_obj::keyBinds->__get(i)->__GetItem(0)).StaticCast<  ::Control >(),controlsToAdd);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ClientPrefs_obj,loadControls,(void))


ClientPrefs_obj::ClientPrefs_obj()
{
}

bool ClientPrefs_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"showFPS") ) { outValue = ( showFPS ); return true; }
		if (HX_FIELD_EQ(inName,"cursing") ) { outValue = ( cursing ); return true; }
		if (HX_FIELD_EQ(inName,"hideHud") ) { outValue = ( hideHud ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"flashing") ) { outValue = ( flashing ); return true; }
		if (HX_FIELD_EQ(inName,"violence") ) { outValue = ( violence ); return true; }
		if (HX_FIELD_EQ(inName,"camZooms") ) { outValue = ( camZooms ); return true; }
		if (HX_FIELD_EQ(inName,"arrowHSV") ) { outValue = ( arrowHSV ); return true; }
		if (HX_FIELD_EQ(inName,"hideTime") ) { outValue = ( hideTime ); return true; }
		if (HX_FIELD_EQ(inName,"eyesores") ) { outValue = ( eyesores ); return true; }
		if (HX_FIELD_EQ(inName,"antispam") ) { outValue = ( antispam ); return true; }
		if (HX_FIELD_EQ(inName,"keyBinds") ) { outValue = ( keyBinds ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hitSounds") ) { outValue = ( hitSounds ); return true; }
		if (HX_FIELD_EQ(inName,"framerate") ) { outValue = ( framerate ); return true; }
		if (HX_FIELD_EQ(inName,"loadPrefs") ) { outValue = loadPrefs_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"downScroll") ) { outValue = ( downScroll ); return true; }
		if (HX_FIELD_EQ(inName,"windowMove") ) { outValue = ( windowMove ); return true; }
		if (HX_FIELD_EQ(inName,"lowQuality") ) { outValue = ( lowQuality ); return true; }
		if (HX_FIELD_EQ(inName,"noteOffset") ) { outValue = ( noteOffset ); return true; }
		if (HX_FIELD_EQ(inName,"missSounds") ) { outValue = ( missSounds ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultKeys") ) { outValue = ( defaultKeys ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"middleScroll") ) { outValue = ( middleScroll ); return true; }
		if (HX_FIELD_EQ(inName,"noteSplashes") ) { outValue = ( noteSplashes ); return true; }
		if (HX_FIELD_EQ(inName,"ghostTapping") ) { outValue = ( ghostTapping ); return true; }
		if (HX_FIELD_EQ(inName,"lastControls") ) { outValue = ( lastControls ); return true; }
		if (HX_FIELD_EQ(inName,"saveSettings") ) { outValue = saveSettings_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadControls") ) { outValue = loadControls_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"imagesPersist") ) { outValue = ( imagesPersist ); return true; }
		if (HX_FIELD_EQ(inName,"moreScoreInfo") ) { outValue = ( moreScoreInfo ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"reloadControls") ) { outValue = reloadControls_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"removeControls") ) { outValue = removeControls_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"globalAntialiasing") ) { outValue = ( globalAntialiasing ); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"scrollUnderlayAlpha") ) { outValue = ( scrollUnderlayAlpha ); return true; }
	}
	return false;
}

bool ClientPrefs_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"showFPS") ) { showFPS=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"cursing") ) { cursing=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"hideHud") ) { hideHud=ioValue.Cast< bool >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"flashing") ) { flashing=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"violence") ) { violence=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"camZooms") ) { camZooms=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"arrowHSV") ) { arrowHSV=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		if (HX_FIELD_EQ(inName,"hideTime") ) { hideTime=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"eyesores") ) { eyesores=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"antispam") ) { antispam=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"keyBinds") ) { keyBinds=ioValue.Cast< ::cpp::VirtualArray >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"hitSounds") ) { hitSounds=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"framerate") ) { framerate=ioValue.Cast< int >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"downScroll") ) { downScroll=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"windowMove") ) { windowMove=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"lowQuality") ) { lowQuality=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"noteOffset") ) { noteOffset=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"missSounds") ) { missSounds=ioValue.Cast< bool >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"defaultKeys") ) { defaultKeys=ioValue.Cast< ::Array< int > >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"middleScroll") ) { middleScroll=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"noteSplashes") ) { noteSplashes=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"ghostTapping") ) { ghostTapping=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"lastControls") ) { lastControls=ioValue.Cast< ::Array< int > >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"imagesPersist") ) { imagesPersist=ioValue.Cast< bool >(); return true; }
		if (HX_FIELD_EQ(inName,"moreScoreInfo") ) { moreScoreInfo=ioValue.Cast< bool >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"globalAntialiasing") ) { globalAntialiasing=ioValue.Cast< bool >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"scrollUnderlayAlpha") ) { scrollUnderlayAlpha=ioValue.Cast< Float >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ClientPrefs_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo ClientPrefs_obj_sStaticStorageInfo[] = {
	{::hx::fsBool,(void *) &ClientPrefs_obj::downScroll,HX_("downScroll",0f,ba,68,84)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::windowMove,HX_("windowMove",21,5b,37,d3)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::hitSounds,HX_("hitSounds",77,63,40,66)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::middleScroll,HX_("middleScroll",42,cd,58,62)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::showFPS,HX_("showFPS",ec,0a,9a,7b)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::flashing,HX_("flashing",32,85,e8,99)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::globalAntialiasing,HX_("globalAntialiasing",f7,9c,ed,4c)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::noteSplashes,HX_("noteSplashes",a7,57,29,8d)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::lowQuality,HX_("lowQuality",8b,52,27,3e)},
	{::hx::fsInt,(void *) &ClientPrefs_obj::framerate,HX_("framerate",8d,e5,4b,4e)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::cursing,HX_("cursing",cf,db,8f,cc)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::violence,HX_("violence",5b,5e,88,3f)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::camZooms,HX_("camZooms",71,f3,cd,90)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::hideHud,HX_("hideHud",15,b9,3c,b7)},
	{::hx::fsInt,(void *) &ClientPrefs_obj::noteOffset,HX_("noteOffset",25,a5,53,fe)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &ClientPrefs_obj::arrowHSV,HX_("arrowHSV",c2,f4,b4,fd)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::imagesPersist,HX_("imagesPersist",3c,00,5c,08)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::ghostTapping,HX_("ghostTapping",c6,6a,da,10)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::hideTime,HX_("hideTime",ef,b5,ca,a5)},
	{::hx::fsFloat,(void *) &ClientPrefs_obj::scrollUnderlayAlpha,HX_("scrollUnderlayAlpha",25,01,0d,91)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::moreScoreInfo,HX_("moreScoreInfo",8b,ce,b4,ec)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::eyesores,HX_("eyesores",33,d7,61,1b)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::antispam,HX_("antispam",6b,e3,27,ad)},
	{::hx::fsBool,(void *) &ClientPrefs_obj::missSounds,HX_("missSounds",e0,d4,49,2b)},
	{::hx::fsObject /* ::Array< int > */ ,(void *) &ClientPrefs_obj::defaultKeys,HX_("defaultKeys",55,db,c5,18)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(void *) &ClientPrefs_obj::keyBinds,HX_("keyBinds",f7,b5,69,f7)},
	{::hx::fsObject /* ::Array< int > */ ,(void *) &ClientPrefs_obj::lastControls,HX_("lastControls",ec,92,4e,99)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void ClientPrefs_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::downScroll,"downScroll");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::windowMove,"windowMove");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::hitSounds,"hitSounds");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::middleScroll,"middleScroll");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::showFPS,"showFPS");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::flashing,"flashing");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::globalAntialiasing,"globalAntialiasing");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::noteSplashes,"noteSplashes");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::lowQuality,"lowQuality");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::framerate,"framerate");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::cursing,"cursing");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::violence,"violence");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::camZooms,"camZooms");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::hideHud,"hideHud");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::noteOffset,"noteOffset");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::arrowHSV,"arrowHSV");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::imagesPersist,"imagesPersist");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::ghostTapping,"ghostTapping");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::hideTime,"hideTime");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::scrollUnderlayAlpha,"scrollUnderlayAlpha");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::moreScoreInfo,"moreScoreInfo");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::eyesores,"eyesores");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::antispam,"antispam");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::missSounds,"missSounds");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::defaultKeys,"defaultKeys");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::keyBinds,"keyBinds");
	HX_MARK_MEMBER_NAME(ClientPrefs_obj::lastControls,"lastControls");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ClientPrefs_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::downScroll,"downScroll");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::windowMove,"windowMove");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::hitSounds,"hitSounds");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::middleScroll,"middleScroll");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::showFPS,"showFPS");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::flashing,"flashing");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::globalAntialiasing,"globalAntialiasing");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::noteSplashes,"noteSplashes");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::lowQuality,"lowQuality");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::framerate,"framerate");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::cursing,"cursing");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::violence,"violence");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::camZooms,"camZooms");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::hideHud,"hideHud");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::noteOffset,"noteOffset");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::arrowHSV,"arrowHSV");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::imagesPersist,"imagesPersist");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::ghostTapping,"ghostTapping");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::hideTime,"hideTime");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::scrollUnderlayAlpha,"scrollUnderlayAlpha");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::moreScoreInfo,"moreScoreInfo");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::eyesores,"eyesores");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::antispam,"antispam");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::missSounds,"missSounds");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::defaultKeys,"defaultKeys");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::keyBinds,"keyBinds");
	HX_VISIT_MEMBER_NAME(ClientPrefs_obj::lastControls,"lastControls");
};

#endif

::hx::Class ClientPrefs_obj::__mClass;

static ::String ClientPrefs_obj_sStaticFields[] = {
	HX_("downScroll",0f,ba,68,84),
	HX_("windowMove",21,5b,37,d3),
	HX_("hitSounds",77,63,40,66),
	HX_("middleScroll",42,cd,58,62),
	HX_("showFPS",ec,0a,9a,7b),
	HX_("flashing",32,85,e8,99),
	HX_("globalAntialiasing",f7,9c,ed,4c),
	HX_("noteSplashes",a7,57,29,8d),
	HX_("lowQuality",8b,52,27,3e),
	HX_("framerate",8d,e5,4b,4e),
	HX_("cursing",cf,db,8f,cc),
	HX_("violence",5b,5e,88,3f),
	HX_("camZooms",71,f3,cd,90),
	HX_("hideHud",15,b9,3c,b7),
	HX_("noteOffset",25,a5,53,fe),
	HX_("arrowHSV",c2,f4,b4,fd),
	HX_("imagesPersist",3c,00,5c,08),
	HX_("ghostTapping",c6,6a,da,10),
	HX_("hideTime",ef,b5,ca,a5),
	HX_("scrollUnderlayAlpha",25,01,0d,91),
	HX_("moreScoreInfo",8b,ce,b4,ec),
	HX_("eyesores",33,d7,61,1b),
	HX_("antispam",6b,e3,27,ad),
	HX_("missSounds",e0,d4,49,2b),
	HX_("defaultKeys",55,db,c5,18),
	HX_("keyBinds",f7,b5,69,f7),
	HX_("lastControls",ec,92,4e,99),
	HX_("saveSettings",40,c9,c5,9d),
	HX_("loadPrefs",2a,94,bf,e3),
	HX_("reloadControls",ef,16,46,27),
	HX_("removeControls",da,c2,12,02),
	HX_("loadControls",bc,72,25,f1),
	::String(null())
};

void ClientPrefs_obj::__register()
{
	ClientPrefs_obj _hx_dummy;
	ClientPrefs_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ClientPrefs",c5,55,e0,8a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ClientPrefs_obj::__GetStatic;
	__mClass->mSetStaticField = &ClientPrefs_obj::__SetStatic;
	__mClass->mMarkFunc = ClientPrefs_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ClientPrefs_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ClientPrefs_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ClientPrefs_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ClientPrefs_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ClientPrefs_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ClientPrefs_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_11_boot)
HXDLIN(  11)		downScroll = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_12_boot)
HXDLIN(  12)		windowMove = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_13_boot)
HXDLIN(  13)		hitSounds = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_14_boot)
HXDLIN(  14)		middleScroll = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_15_boot)
HXDLIN(  15)		showFPS = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_16_boot)
HXDLIN(  16)		flashing = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_17_boot)
HXDLIN(  17)		globalAntialiasing = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_18_boot)
HXDLIN(  18)		noteSplashes = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_19_boot)
HXDLIN(  19)		lowQuality = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_20_boot)
HXDLIN(  20)		framerate = 60;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_21_boot)
HXDLIN(  21)		cursing = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_22_boot)
HXDLIN(  22)		violence = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_23_boot)
HXDLIN(  23)		camZooms = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_24_boot)
HXDLIN(  24)		hideHud = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_25_boot)
HXDLIN(  25)		noteOffset = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_26_boot)
HXDLIN(  26)		arrowHSV = ::Array_obj< ::Dynamic>::__new(4)->init(0,::Array_obj< int >::fromData( _hx_array_data_8ae055c5_24,3))->init(1,::Array_obj< int >::fromData( _hx_array_data_8ae055c5_25,3))->init(2,::Array_obj< int >::fromData( _hx_array_data_8ae055c5_26,3))->init(3,::Array_obj< int >::fromData( _hx_array_data_8ae055c5_27,3));
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_27_boot)
HXDLIN(  27)		imagesPersist = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_28_boot)
HXDLIN(  28)		ghostTapping = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_29_boot)
HXDLIN(  29)		hideTime = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_30_boot)
HXDLIN(  30)		scrollUnderlayAlpha = ((Float)0);
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_31_boot)
HXDLIN(  31)		moreScoreInfo = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_32_boot)
HXDLIN(  32)		eyesores = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_33_boot)
HXDLIN(  33)		antispam = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_34_boot)
HXDLIN(  34)		missSounds = true;
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_36_boot)
HXDLIN(  36)		defaultKeys = ::Array_obj< int >::fromData( _hx_array_data_8ae055c5_37,24);
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_53_boot)
HXDLIN(  53)		keyBinds = ::cpp::VirtualArray_obj::__new(12)->init(0,::cpp::VirtualArray_obj::__new(2)->init(0,::Control_obj::NOTE_LEFT_dyn())->init(1,HX_("Left",27,34,89,32)))->init(1,::cpp::VirtualArray_obj::__new(2)->init(0,::Control_obj::NOTE_DOWN_dyn())->init(1,HX_("Down",82,24,47,2d)))->init(2,::cpp::VirtualArray_obj::__new(2)->init(0,::Control_obj::NOTE_UP_dyn())->init(1,HX_("Up",7b,4a,00,00)))->init(3,::cpp::VirtualArray_obj::__new(2)->init(0,::Control_obj::NOTE_RIGHT_dyn())->init(1,HX_("Right",bc,7b,91,7c)))->init(4,::cpp::VirtualArray_obj::__new(2)->init(0,::Control_obj::UI_LEFT_dyn())->init(1,HX_("Left ",19,6e,84,05)))->init(5,::cpp::VirtualArray_obj::__new(2)->init(0,::Control_obj::UI_DOWN_dyn())->init(1,HX_("Down ",5e,cd,f8,70)))->init(6,::cpp::VirtualArray_obj::__new(2)->init(0,::Control_obj::UI_UP_dyn())->init(1,HX_("Up ",45,e1,40,00)))->init(7,::cpp::VirtualArray_obj::__new(2)->init(0,::Control_obj::UI_RIGHT_dyn())->init(1,HX_("Right ",e4,c8,ba,82)))->init(8,::cpp::VirtualArray_obj::__new(2)->init(0,::Control_obj::RESET_dyn())->init(1,HX_("Reset",af,b9,f5,79)))->init(9,::cpp::VirtualArray_obj::__new(2)->init(0,::Control_obj::ACCEPT_dyn())->init(1,HX_("Accept",28,07,9b,3f)))->init(10,::cpp::VirtualArray_obj::__new(2)->init(0,::Control_obj::BACK_dyn())->init(1,HX_("Back",47,06,ea,2b)))->init(11,::cpp::VirtualArray_obj::__new(2)->init(0,::Control_obj::PAUSE_dyn())->init(1,HX_("Pause",d6,46,85,50)));
            	}
{
            	HX_STACKFRAME(&_hx_pos_1453641688f31b8d_70_boot)
HXDLIN(  70)		lastControls = ::ClientPrefs_obj::defaultKeys->copy();
            	}
}

