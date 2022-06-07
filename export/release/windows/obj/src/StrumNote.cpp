#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_ColorSwap
#include <ColorSwap.h>
#endif
#ifndef INCLUDED_ColorSwapShader
#include <ColorSwapShader.h>
#endif
#ifndef INCLUDED_CoolUtil
#include <CoolUtil.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_Note
#include <Note.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StrumNote
#include <StrumNote.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
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
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_451d99b3fc57d4a2_9_new,"StrumNote","new",0x9acbf42d,"StrumNote.new","StrumNote.hx",9,0x345a6fe3)
static const int _hx_array_data_920159bb_3[] = {
	(int)6,
};
static const int _hx_array_data_920159bb_4[] = {
	(int)7,
};
static const int _hx_array_data_920159bb_5[] = {
	(int)5,
};
static const int _hx_array_data_920159bb_6[] = {
	(int)4,
};
static const int _hx_array_data_920159bb_7[] = {
	(int)0,
};
static const int _hx_array_data_920159bb_8[] = {
	(int)4,(int)8,
};
static const int _hx_array_data_920159bb_9[] = {
	(int)12,(int)16,
};
static const int _hx_array_data_920159bb_10[] = {
	(int)1,
};
static const int _hx_array_data_920159bb_11[] = {
	(int)5,(int)9,
};
static const int _hx_array_data_920159bb_12[] = {
	(int)13,(int)17,
};
static const int _hx_array_data_920159bb_13[] = {
	(int)2,
};
static const int _hx_array_data_920159bb_14[] = {
	(int)6,(int)10,
};
static const int _hx_array_data_920159bb_15[] = {
	(int)14,(int)18,
};
static const int _hx_array_data_920159bb_16[] = {
	(int)3,
};
static const int _hx_array_data_920159bb_17[] = {
	(int)7,(int)11,
};
static const int _hx_array_data_920159bb_18[] = {
	(int)15,(int)19,
};
HX_LOCAL_STACK_FRAME(_hx_pos_451d99b3fc57d4a2_101_postAddedToGroup,"StrumNote","postAddedToGroup",0x894c0b77,"StrumNote.postAddedToGroup","StrumNote.hx",101,0x345a6fe3)
HX_LOCAL_STACK_FRAME(_hx_pos_451d99b3fc57d4a2_109_update,"StrumNote","update",0x7186005c,"StrumNote.update","StrumNote.hx",109,0x345a6fe3)
HX_LOCAL_STACK_FRAME(_hx_pos_451d99b3fc57d4a2_125_playAnim,"StrumNote","playAnim",0x17d6df38,"StrumNote.playAnim","StrumNote.hx",125,0x345a6fe3)
HX_LOCAL_STACK_FRAME(_hx_pos_451d99b3fc57d4a2_143_updateConfirmOffset,"StrumNote","updateConfirmOffset",0x9095aeb7,"StrumNote.updateConfirmOffset","StrumNote.hx",143,0x345a6fe3)

void StrumNote_obj::__construct(Float x,Float y,int leData,int player){
            	HX_GC_STACKFRAME(&_hx_pos_451d99b3fc57d4a2_9_new)
HXLINE(  14)		this->charactersCustomizableNotes = ::Array_obj< ::String >::__new(0);
HXLINE(  13)		this->noteData = 0;
HXLINE(  12)		this->resetAnim = ((Float)0);
HXLINE(  19)		::String library = null();
HXDLIN(  19)		this->charactersCustomizableNotes = ::CoolUtil_obj::coolTextFile(::Paths_obj::getPath(((HX_("data/",c5,0e,88,d4) + HX_("charactersCustomizableNotes",1b,1a,da,f3)) + HX_(".txt",02,3f,c0,1e)),HX_("TEXT",ad,94,ba,37),library));
HXLINE(  20)		this->colorSwap =  ::ColorSwap_obj::__alloc( HX_CTX );
HXLINE(  21)		this->shader = this->colorSwap->shader;
HXLINE(  22)		this->noteData = leData;
HXLINE(  23)		this->player = player;
HXLINE(  24)		this->noteData = leData;
HXLINE(  25)		super::__construct(x,y,null());
HXLINE(  27)		::String skin = HX_("NOTE_assets",70,3c,09,f7);
HXLINE(  28)		bool _hx_tmp;
HXDLIN(  28)		bool _hx_tmp1;
HXDLIN(  28)		if (::hx::IsNotNull( ::PlayState_obj::SONG->__Field(HX_("arrowSkin",e6,d4,f8,07),::hx::paccDynamic) )) {
HXLINE(  28)			_hx_tmp1 = (( (::String)(::PlayState_obj::SONG->__Field(HX_("arrowSkin",e6,d4,f8,07),::hx::paccDynamic)) ).length > 1);
            		}
            		else {
HXLINE(  28)			_hx_tmp1 = false;
            		}
HXDLIN(  28)		if (_hx_tmp1) {
HXLINE(  28)			_hx_tmp = (player != 1);
            		}
            		else {
HXLINE(  28)			_hx_tmp = false;
            		}
HXDLIN(  28)		if (_hx_tmp) {
HXLINE(  28)			skin = ( (::String)(::PlayState_obj::SONG->__Field(HX_("arrowSkin",e6,d4,f8,07),::hx::paccDynamic)) );
            		}
HXLINE(  29)		bool _hx_tmp2;
HXDLIN(  29)		bool _hx_tmp3;
HXDLIN(  29)		if (::hx::IsNotNull( ::PlayState_obj::SONG->__Field(HX_("arrowPlayerSkin",a7,e5,6a,43),::hx::paccDynamic) )) {
HXLINE(  29)			_hx_tmp3 = (( (::String)(::PlayState_obj::SONG->__Field(HX_("arrowPlayerSkin",a7,e5,6a,43),::hx::paccDynamic)) ).length > 1);
            		}
            		else {
HXLINE(  29)			_hx_tmp3 = false;
            		}
HXDLIN(  29)		if (_hx_tmp3) {
HXLINE(  29)			_hx_tmp2 = (player == 1);
            		}
            		else {
HXLINE(  29)			_hx_tmp2 = false;
            		}
HXDLIN(  29)		if (_hx_tmp2) {
HXLINE(  29)			skin = ( (::String)(::PlayState_obj::SONG->__Field(HX_("arrowPlayerSkin",a7,e5,6a,43),::hx::paccDynamic)) );
            		}
HXLINE(  31)		if (::PlayState_obj::isPixelStage) {
HXLINE(  33)			::String key = (HX_("pixelUI/",95,50,4f,7e) + skin);
HXDLIN(  33)			::String library = null();
HXDLIN(  33)			 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(key);
HXDLIN(  33)			 ::Dynamic _hx_tmp;
HXDLIN(  33)			if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  33)				_hx_tmp = imageToReturn;
            			}
            			else {
HXLINE(  33)				_hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            			}
HXDLIN(  33)			this->loadGraphic(_hx_tmp,null(),null(),null(),null(),null());
HXLINE(  34)			this->set_width((this->get_width() / ( (Float)(4) )));
HXLINE(  35)			this->set_height((this->get_height() / ( (Float)(5) )));
HXLINE(  36)			::String key1 = (HX_("pixelUI/",95,50,4f,7e) + skin);
HXDLIN(  36)			::String library1 = null();
HXDLIN(  36)			 ::flixel::graphics::FlxGraphic imageToReturn1 = ::Paths_obj::addCustomGraphic(key1);
HXDLIN(  36)			 ::Dynamic _hx_tmp1;
HXDLIN(  36)			if (::hx::IsNotNull( imageToReturn1 )) {
HXLINE(  36)				_hx_tmp1 = imageToReturn1;
            			}
            			else {
HXLINE(  36)				_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + key1) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library1);
            			}
HXDLIN(  36)			int _hx_tmp2 = ::Math_obj::floor(this->get_width());
HXDLIN(  36)			this->loadGraphic(_hx_tmp1,true,_hx_tmp2,::Math_obj::floor(this->get_height()),null(),null());
HXLINE(  37)			this->animation->add(HX_("green",c3,0e,ed,99),::Array_obj< int >::fromData( _hx_array_data_920159bb_3,1),null(),null(),null(),null());
HXLINE(  38)			this->animation->add(HX_("red",51,d9,56,00),::Array_obj< int >::fromData( _hx_array_data_920159bb_4,1),null(),null(),null(),null());
HXLINE(  39)			this->animation->add(HX_("blue",9a,42,19,41),::Array_obj< int >::fromData( _hx_array_data_920159bb_5,1),null(),null(),null(),null());
HXLINE(  40)			this->animation->add(HX_("purple",3c,f6,89,71),::Array_obj< int >::fromData( _hx_array_data_920159bb_6,1),null(),null(),null(),null());
HXLINE(  42)			this->set_antialiasing(false);
HXLINE(  43)			Float _hx_tmp3 = this->get_width();
HXDLIN(  43)			this->setGraphicSize(::Std_obj::_hx_int((_hx_tmp3 * ::PlayState_obj::daPixelZoom)),null());
HXLINE(  45)			Float _hx_switch_0 = ::Math_obj::abs(( (Float)(leData) ));
            			if (  (_hx_switch_0==( (Float)(0) )) ){
HXLINE(  48)				this->animation->add(HX_("static",ae,dc,fb,05),::Array_obj< int >::fromData( _hx_array_data_920159bb_7,1),null(),null(),null(),null());
HXLINE(  49)				this->animation->add(HX_("pressed",a2,d2,e6,39),::Array_obj< int >::fromData( _hx_array_data_920159bb_8,2),12,false,null(),null());
HXLINE(  50)				this->animation->add(HX_("confirm",00,9d,39,10),::Array_obj< int >::fromData( _hx_array_data_920159bb_9,2),24,false,null(),null());
HXLINE(  47)				goto _hx_goto_0;
            			}
            			if (  (_hx_switch_0==( (Float)(1) )) ){
HXLINE(  52)				this->animation->add(HX_("static",ae,dc,fb,05),::Array_obj< int >::fromData( _hx_array_data_920159bb_10,1),null(),null(),null(),null());
HXLINE(  53)				this->animation->add(HX_("pressed",a2,d2,e6,39),::Array_obj< int >::fromData( _hx_array_data_920159bb_11,2),12,false,null(),null());
HXLINE(  54)				this->animation->add(HX_("confirm",00,9d,39,10),::Array_obj< int >::fromData( _hx_array_data_920159bb_12,2),24,false,null(),null());
HXLINE(  51)				goto _hx_goto_0;
            			}
            			if (  (_hx_switch_0==( (Float)(2) )) ){
HXLINE(  56)				this->animation->add(HX_("static",ae,dc,fb,05),::Array_obj< int >::fromData( _hx_array_data_920159bb_13,1),null(),null(),null(),null());
HXLINE(  57)				this->animation->add(HX_("pressed",a2,d2,e6,39),::Array_obj< int >::fromData( _hx_array_data_920159bb_14,2),12,false,null(),null());
HXLINE(  58)				this->animation->add(HX_("confirm",00,9d,39,10),::Array_obj< int >::fromData( _hx_array_data_920159bb_15,2),12,false,null(),null());
HXLINE(  55)				goto _hx_goto_0;
            			}
            			if (  (_hx_switch_0==( (Float)(3) )) ){
HXLINE(  60)				this->animation->add(HX_("static",ae,dc,fb,05),::Array_obj< int >::fromData( _hx_array_data_920159bb_16,1),null(),null(),null(),null());
HXLINE(  61)				this->animation->add(HX_("pressed",a2,d2,e6,39),::Array_obj< int >::fromData( _hx_array_data_920159bb_17,2),12,false,null(),null());
HXLINE(  62)				this->animation->add(HX_("confirm",00,9d,39,10),::Array_obj< int >::fromData( _hx_array_data_920159bb_18,2),24,false,null(),null());
HXLINE(  59)				goto _hx_goto_0;
            			}
            			_hx_goto_0:;
            		}
            		else {
HXLINE(  67)			::String library = null();
HXDLIN(  67)			 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::addCustomGraphic(skin);
HXDLIN(  67)			bool xmlExists = false;
HXDLIN(  67)			if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + skin) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE(  67)				xmlExists = true;
            			}
HXDLIN(  67)			 ::Dynamic _hx_tmp;
HXDLIN(  67)			if (::hx::IsNotNull( imageLoaded )) {
HXLINE(  67)				_hx_tmp = imageLoaded;
            			}
            			else {
HXLINE(  67)				 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(skin);
HXDLIN(  67)				if (::hx::IsNotNull( imageToReturn )) {
HXLINE(  67)					_hx_tmp = imageToReturn;
            				}
            				else {
HXLINE(  67)					_hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + skin) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            				}
            			}
HXDLIN(  67)			::String _hx_tmp1;
HXDLIN(  67)			if (xmlExists) {
HXLINE(  67)				_hx_tmp1 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + skin) + HX_(".xml",69,3e,c3,1e))));
            			}
            			else {
HXLINE(  67)				_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + skin) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            			}
HXDLIN(  67)			this->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE(  68)			this->animation->addByPrefix(HX_("green",c3,0e,ed,99),HX_("arrowUP",64,88,b8,43),null(),null(),null(),null());
HXLINE(  69)			this->animation->addByPrefix(HX_("blue",9a,42,19,41),HX_("arrowDOWN",ab,52,f9,fd),null(),null(),null(),null());
HXLINE(  70)			this->animation->addByPrefix(HX_("purple",3c,f6,89,71),HX_("arrowLEFT",50,62,3b,03),null(),null(),null(),null());
HXLINE(  71)			this->animation->addByPrefix(HX_("red",51,d9,56,00),HX_("arrowRIGHT",53,b1,c7,47),null(),null(),null(),null());
HXLINE(  73)			this->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE(  74)			this->setGraphicSize(::Std_obj::_hx_int((this->get_width() * ((Float)0.7))),null());
HXLINE(  76)			Float _hx_switch_1 = ::Math_obj::abs(( (Float)(leData) ));
            			if (  (_hx_switch_1==( (Float)(0) )) ){
HXLINE(  79)				this->animation->addByPrefix(HX_("static",ae,dc,fb,05),HX_("arrowLEFT",50,62,3b,03),null(),null(),null(),null());
HXLINE(  80)				this->animation->addByPrefix(HX_("pressed",a2,d2,e6,39),HX_("left press",aa,26,70,8e),24,false,null(),null());
HXLINE(  81)				this->animation->addByPrefix(HX_("confirm",00,9d,39,10),HX_("left confirm",e7,c7,19,fe),24,false,null(),null());
HXLINE(  78)				goto _hx_goto_1;
            			}
            			if (  (_hx_switch_1==( (Float)(1) )) ){
HXLINE(  83)				this->animation->addByPrefix(HX_("static",ae,dc,fb,05),HX_("arrowDOWN",ab,52,f9,fd),null(),null(),null(),null());
HXLINE(  84)				this->animation->addByPrefix(HX_("pressed",a2,d2,e6,39),HX_("down press",45,4d,63,9c),24,false,null(),null());
HXLINE(  85)				this->animation->addByPrefix(HX_("confirm",00,9d,39,10),HX_("down confirm",42,0b,18,cc),24,false,null(),null());
HXLINE(  82)				goto _hx_goto_1;
            			}
            			if (  (_hx_switch_1==( (Float)(2) )) ){
HXLINE(  87)				this->animation->addByPrefix(HX_("static",ae,dc,fb,05),HX_("arrowUP",64,88,b8,43),null(),null(),null(),null());
HXLINE(  88)				this->animation->addByPrefix(HX_("pressed",a2,d2,e6,39),HX_("up press",fe,fb,65,e9),24,false,null(),null());
HXLINE(  89)				this->animation->addByPrefix(HX_("confirm",00,9d,39,10),HX_("up confirm",3b,9a,2e,62),24,false,null(),null());
HXLINE(  86)				goto _hx_goto_1;
            			}
            			if (  (_hx_switch_1==( (Float)(3) )) ){
HXLINE(  91)				this->animation->addByPrefix(HX_("static",ae,dc,fb,05),HX_("arrowRIGHT",53,b1,c7,47),null(),null(),null(),null());
HXLINE(  92)				this->animation->addByPrefix(HX_("pressed",a2,d2,e6,39),HX_("right press",3f,38,e4,c8),24,false,null(),null());
HXLINE(  93)				this->animation->addByPrefix(HX_("confirm",00,9d,39,10),HX_("right confirm",bc,28,e5,ca),24,false,null(),null());
HXLINE(  90)				goto _hx_goto_1;
            			}
            			_hx_goto_1:;
            		}
HXLINE(  97)		this->updateHitbox();
HXLINE(  98)		this->scrollFactor->set(null(),null());
            	}

Dynamic StrumNote_obj::__CreateEmpty() { return new StrumNote_obj; }

void *StrumNote_obj::_hx_vtable = 0;

Dynamic StrumNote_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< StrumNote_obj > _hx_result = new StrumNote_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool StrumNote_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5544cefb) {
		if (inClassId<=(int)0x2c01639b) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c01639b;
		} else {
			return inClassId==(int)0x5544cefb;
		}
	} else {
		return inClassId==(int)0x7ccf8994 || inClassId==(int)0x7dab0655;
	}
}

void StrumNote_obj::postAddedToGroup(){
            	HX_STACKFRAME(&_hx_pos_451d99b3fc57d4a2_101_postAddedToGroup)
HXLINE( 102)		this->playAnim(HX_("static",ae,dc,fb,05),null());
HXLINE( 103)		this->set_x((this->x + (::Note_obj::swagWidth * ( (Float)(this->noteData) ))));
HXLINE( 104)		this->set_x((this->x + 50));
HXLINE( 105)		this->set_x((this->x + ((( (Float)(::flixel::FlxG_obj::width) ) / ( (Float)(2) )) * ( (Float)(this->player) ))));
HXLINE( 106)		this->ID = this->noteData;
            	}


HX_DEFINE_DYNAMIC_FUNC0(StrumNote_obj,postAddedToGroup,(void))

void StrumNote_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_451d99b3fc57d4a2_109_update)
HXLINE( 110)		if ((this->resetAnim > 0)) {
HXLINE( 111)			 ::StrumNote _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 111)			_hx_tmp->resetAnim = (_hx_tmp->resetAnim - elapsed);
HXLINE( 112)			if ((this->resetAnim <= 0)) {
HXLINE( 113)				this->playAnim(HX_("static",ae,dc,fb,05),null());
HXLINE( 114)				this->resetAnim = ( (Float)(0) );
            			}
            		}
HXLINE( 122)		this->super::update(elapsed);
            	}


void StrumNote_obj::playAnim(::String anim, ::Dynamic __o_force){
            		 ::Dynamic force = __o_force;
            		if (::hx::IsNull(__o_force)) force = false;
            	HX_STACKFRAME(&_hx_pos_451d99b3fc57d4a2_125_playAnim)
HXLINE( 126)		this->animation->play(anim,force,null(),null());
HXLINE( 127)		this->centerOffsets(null());
HXLINE( 128)		bool _hx_tmp;
HXDLIN( 128)		if (::hx::IsNotNull( this->animation->_curAnim )) {
HXLINE( 128)			_hx_tmp = (this->animation->_curAnim->name == HX_("static",ae,dc,fb,05));
            		}
            		else {
HXLINE( 128)			_hx_tmp = true;
            		}
HXDLIN( 128)		if (_hx_tmp) {
HXLINE( 129)			this->colorSwap->set_hue(( (Float)(0) ));
HXLINE( 130)			this->colorSwap->set_saturation(( (Float)(0) ));
HXLINE( 131)			this->colorSwap->set_brightness(( (Float)(0) ));
            		}
            		else {
HXLINE( 133)			this->colorSwap->set_hue((( (Float)(::ClientPrefs_obj::arrowHSV->__get(::hx::Mod(this->noteData,4)).StaticCast< ::Array< int > >()->__get(0)) ) / ( (Float)(360) )));
HXLINE( 134)			this->colorSwap->set_saturation((( (Float)(::ClientPrefs_obj::arrowHSV->__get(::hx::Mod(this->noteData,4)).StaticCast< ::Array< int > >()->__get(1)) ) / ( (Float)(100) )));
HXLINE( 135)			this->colorSwap->set_brightness((( (Float)(::ClientPrefs_obj::arrowHSV->__get(::hx::Mod(this->noteData,4)).StaticCast< ::Array< int > >()->__get(2)) ) / ( (Float)(100) )));
HXLINE( 137)			bool _hx_tmp;
HXDLIN( 137)			if ((this->animation->_curAnim->name == HX_("confirm",00,9d,39,10))) {
HXLINE( 137)				_hx_tmp = !(::PlayState_obj::isPixelStage);
            			}
            			else {
HXLINE( 137)				_hx_tmp = false;
            			}
HXDLIN( 137)			if (_hx_tmp) {
HXLINE( 138)				this->updateConfirmOffset();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(StrumNote_obj,playAnim,(void))

void StrumNote_obj::updateConfirmOffset(){
            	HX_STACKFRAME(&_hx_pos_451d99b3fc57d4a2_143_updateConfirmOffset)
HXLINE( 144)		this->centerOffsets(null());
HXLINE( 145)		 ::flixel::math::FlxPoint fh = this->offset;
HXDLIN( 145)		fh->set_x((fh->x - ( (Float)(13) )));
HXLINE( 146)		 ::flixel::math::FlxPoint fh1 = this->offset;
HXDLIN( 146)		fh1->set_y((fh1->y - ( (Float)(13) )));
            	}


HX_DEFINE_DYNAMIC_FUNC0(StrumNote_obj,updateConfirmOffset,(void))


::hx::ObjectPtr< StrumNote_obj > StrumNote_obj::__new(Float x,Float y,int leData,int player) {
	::hx::ObjectPtr< StrumNote_obj > __this = new StrumNote_obj();
	__this->__construct(x,y,leData,player);
	return __this;
}

::hx::ObjectPtr< StrumNote_obj > StrumNote_obj::__alloc(::hx::Ctx *_hx_ctx,Float x,Float y,int leData,int player) {
	StrumNote_obj *__this = (StrumNote_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(StrumNote_obj), true, "StrumNote"));
	*(void **)__this = StrumNote_obj::_hx_vtable;
	__this->__construct(x,y,leData,player);
	return __this;
}

StrumNote_obj::StrumNote_obj()
{
}

void StrumNote_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(StrumNote);
	HX_MARK_MEMBER_NAME(colorSwap,"colorSwap");
	HX_MARK_MEMBER_NAME(resetAnim,"resetAnim");
	HX_MARK_MEMBER_NAME(noteData,"noteData");
	HX_MARK_MEMBER_NAME(charactersCustomizableNotes,"charactersCustomizableNotes");
	HX_MARK_MEMBER_NAME(player,"player");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void StrumNote_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(colorSwap,"colorSwap");
	HX_VISIT_MEMBER_NAME(resetAnim,"resetAnim");
	HX_VISIT_MEMBER_NAME(noteData,"noteData");
	HX_VISIT_MEMBER_NAME(charactersCustomizableNotes,"charactersCustomizableNotes");
	HX_VISIT_MEMBER_NAME(player,"player");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val StrumNote_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { return ::hx::Val( player ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"noteData") ) { return ::hx::Val( noteData ); }
		if (HX_FIELD_EQ(inName,"playAnim") ) { return ::hx::Val( playAnim_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"colorSwap") ) { return ::hx::Val( colorSwap ); }
		if (HX_FIELD_EQ(inName,"resetAnim") ) { return ::hx::Val( resetAnim ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"postAddedToGroup") ) { return ::hx::Val( postAddedToGroup_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"updateConfirmOffset") ) { return ::hx::Val( updateConfirmOffset_dyn() ); }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"charactersCustomizableNotes") ) { return ::hx::Val( charactersCustomizableNotes ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val StrumNote_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"player") ) { player=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"noteData") ) { noteData=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"colorSwap") ) { colorSwap=inValue.Cast<  ::ColorSwap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"resetAnim") ) { resetAnim=inValue.Cast< Float >(); return inValue; }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"charactersCustomizableNotes") ) { charactersCustomizableNotes=inValue.Cast< ::Array< ::String > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void StrumNote_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("colorSwap",96,b5,cb,27));
	outFields->push(HX_("resetAnim",80,8f,5d,86));
	outFields->push(HX_("noteData",3c,7b,96,51));
	outFields->push(HX_("charactersCustomizableNotes",1b,1a,da,f3));
	outFields->push(HX_("player",61,eb,b8,37));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo StrumNote_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::ColorSwap */ ,(int)offsetof(StrumNote_obj,colorSwap),HX_("colorSwap",96,b5,cb,27)},
	{::hx::fsFloat,(int)offsetof(StrumNote_obj,resetAnim),HX_("resetAnim",80,8f,5d,86)},
	{::hx::fsInt,(int)offsetof(StrumNote_obj,noteData),HX_("noteData",3c,7b,96,51)},
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(StrumNote_obj,charactersCustomizableNotes),HX_("charactersCustomizableNotes",1b,1a,da,f3)},
	{::hx::fsInt,(int)offsetof(StrumNote_obj,player),HX_("player",61,eb,b8,37)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *StrumNote_obj_sStaticStorageInfo = 0;
#endif

static ::String StrumNote_obj_sMemberFields[] = {
	HX_("colorSwap",96,b5,cb,27),
	HX_("resetAnim",80,8f,5d,86),
	HX_("noteData",3c,7b,96,51),
	HX_("charactersCustomizableNotes",1b,1a,da,f3),
	HX_("player",61,eb,b8,37),
	HX_("postAddedToGroup",64,4b,92,b7),
	HX_("update",09,86,05,87),
	HX_("playAnim",25,ea,84,30),
	HX_("updateConfirmOffset",ea,60,28,53),
	::String(null()) };

::hx::Class StrumNote_obj::__mClass;

void StrumNote_obj::__register()
{
	StrumNote_obj _hx_dummy;
	StrumNote_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("StrumNote",bb,59,01,92);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(StrumNote_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< StrumNote_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = StrumNote_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = StrumNote_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

