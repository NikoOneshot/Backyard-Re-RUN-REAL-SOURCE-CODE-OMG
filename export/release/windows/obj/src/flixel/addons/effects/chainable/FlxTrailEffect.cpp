#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_addons_effects_chainable_FlxEffectSprite
#include <flixel/addons/effects/chainable/FlxEffectSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_effects_chainable_FlxTrailEffect
#include <flixel/addons/effects/chainable/FlxTrailEffect.h>
#endif
#ifndef INCLUDED_flixel_addons_effects_chainable_IFlxEffect
#include <flixel/addons/effects/chainable/IFlxEffect.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_59dc977ba4c4032b_16_new,"flixel.addons.effects.chainable.FlxTrailEffect","new",0x201a521f,"flixel.addons.effects.chainable.FlxTrailEffect.new","flixel/addons/effects/chainable/FlxTrailEffect.hx",16,0x31a5828f)
HX_LOCAL_STACK_FRAME(_hx_pos_59dc977ba4c4032b_87_destroy,"flixel.addons.effects.chainable.FlxTrailEffect","destroy",0x49a9fa39,"flixel.addons.effects.chainable.FlxTrailEffect.destroy","flixel/addons/effects/chainable/FlxTrailEffect.hx",87,0x31a5828f)
HX_LOCAL_STACK_FRAME(_hx_pos_59dc977ba4c4032b_99_update,"flixel.addons.effects.chainable.FlxTrailEffect","update",0xc9c565aa,"flixel.addons.effects.chainable.FlxTrailEffect.update","flixel/addons/effects/chainable/FlxTrailEffect.hx",99,0x31a5828f)
HX_LOCAL_STACK_FRAME(_hx_pos_59dc977ba4c4032b_102_updateRecents,"flixel.addons.effects.chainable.FlxTrailEffect","updateRecents",0x030e56ee,"flixel.addons.effects.chainable.FlxTrailEffect.updateRecents","flixel/addons/effects/chainable/FlxTrailEffect.hx",102,0x31a5828f)
HX_LOCAL_STACK_FRAME(_hx_pos_59dc977ba4c4032b_133_apply,"flixel.addons.effects.chainable.FlxTrailEffect","apply",0xa3f534ed,"flixel.addons.effects.chainable.FlxTrailEffect.apply","flixel/addons/effects/chainable/FlxTrailEffect.hx",133,0x31a5828f)
HX_LOCAL_STACK_FRAME(_hx_pos_59dc977ba4c4032b_223_clear,"flixel.addons.effects.chainable.FlxTrailEffect","clear",0xc815210c,"flixel.addons.effects.chainable.FlxTrailEffect.clear","flixel/addons/effects/chainable/FlxTrailEffect.hx",223,0x31a5828f)
HX_LOCAL_STACK_FRAME(_hx_pos_59dc977ba4c4032b_232_disposeCachedPixels,"flixel.addons.effects.chainable.FlxTrailEffect","disposeCachedPixels",0xd3e3c7ad,"flixel.addons.effects.chainable.FlxTrailEffect.disposeCachedPixels","flixel/addons/effects/chainable/FlxTrailEffect.hx",232,0x31a5828f)
HX_LOCAL_STACK_FRAME(_hx_pos_59dc977ba4c4032b_239_set_length,"flixel.addons.effects.chainable.FlxTrailEffect","set_length",0xb02b6744,"flixel.addons.effects.chainable.FlxTrailEffect.set_length","flixel/addons/effects/chainable/FlxTrailEffect.hx",239,0x31a5828f)
HX_LOCAL_STACK_FRAME(_hx_pos_59dc977ba4c4032b_254_set_cachePixels,"flixel.addons.effects.chainable.FlxTrailEffect","set_cachePixels",0x2299f3f1,"flixel.addons.effects.chainable.FlxTrailEffect.set_cachePixels","flixel/addons/effects/chainable/FlxTrailEffect.hx",254,0x31a5828f)
namespace flixel{
namespace addons{
namespace effects{
namespace chainable{

void FlxTrailEffect_obj::__construct( ::flixel::addons::effects::chainable::FlxEffectSprite Target,::hx::Null< int >  __o_Length,::hx::Null< Float >  __o_Alpha,::hx::Null< int >  __o_FramesDelay,::hx::Null< bool >  __o_CachePixels){
            		int Length = __o_Length.Default(10);
            		Float Alpha = __o_Alpha.Default(((Float)0.5));
            		int FramesDelay = __o_FramesDelay.Default(2);
            		bool CachePixels = __o_CachePixels.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_59dc977ba4c4032b_16_new)
HXLINE(  67)		this->_colorTransform =  ::openfl::geom::ColorTransform_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null(),null(),null());
HXLINE(  66)		this->_matrix =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE(  59)		this->_currentFrames = 0;
HXLINE(  54)		this->_recentPixels = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  49)		this->_recentPositions = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  19)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  19)		point->_inPool = false;
HXDLIN(  19)		this->offset = point;
HXLINE(  18)		this->active = true;
HXLINE(  79)		this->target = Target;
HXLINE(  80)		int _hx_tmp;
HXDLIN(  80)		if ((1 > Length)) {
HXLINE(  80)			_hx_tmp = 1;
            		}
            		else {
HXLINE(  80)			_hx_tmp = Length;
            		}
HXDLIN(  80)		this->set_length(_hx_tmp);
HXLINE(  81)		this->framesDelay = FramesDelay;
HXLINE(  82)		this->alpha = Alpha;
HXLINE(  83)		this->set_cachePixels(CachePixels);
            	}

Dynamic FlxTrailEffect_obj::__CreateEmpty() { return new FlxTrailEffect_obj; }

void *FlxTrailEffect_obj::_hx_vtable = 0;

Dynamic FlxTrailEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxTrailEffect_obj > _hx_result = new FlxTrailEffect_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool FlxTrailEffect_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x46d43c6d;
}

static ::flixel::addons::effects::chainable::IFlxEffect_obj _hx_flixel_addons_effects_chainable_FlxTrailEffect__hx_flixel_addons_effects_chainable_IFlxEffect= {
	( void (::hx::Object::*)())&::flixel::addons::effects::chainable::FlxTrailEffect_obj::destroy,
	( void (::hx::Object::*)(Float))&::flixel::addons::effects::chainable::FlxTrailEffect_obj::update,
	(  ::openfl::display::BitmapData (::hx::Object::*)( ::openfl::display::BitmapData))&::flixel::addons::effects::chainable::FlxTrailEffect_obj::apply,
};

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_addons_effects_chainable_FlxTrailEffect__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::addons::effects::chainable::FlxTrailEffect_obj::destroy,
};

void *FlxTrailEffect_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x4a1f9502: return &_hx_flixel_addons_effects_chainable_FlxTrailEffect__hx_flixel_addons_effects_chainable_IFlxEffect;
		case (int)0xd4fe2fcd: return &_hx_flixel_addons_effects_chainable_FlxTrailEffect__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxTrailEffect_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_59dc977ba4c4032b_87_destroy)
HXLINE(  88)		this->disposeCachedPixels();
HXLINE(  89)		this->_recentPixels = null();
HXLINE(  90)		this->_recentPositions = ::flixel::util::FlxDestroyUtil_obj::putArray(this->_recentPositions);
HXLINE(  92)		this->_matrix = null();
HXLINE(  93)		this->_colorTransform = null();
HXLINE(  95)		this->offset = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->offset)) );
HXLINE(  96)		this->_pixels = ::flixel::util::FlxDestroyUtil_obj::dispose(this->_pixels);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTrailEffect_obj,destroy,(void))

void FlxTrailEffect_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_59dc977ba4c4032b_99_update)
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTrailEffect_obj,update,(void))

void FlxTrailEffect_obj::updateRecents(){
            	HX_STACKFRAME(&_hx_pos_59dc977ba4c4032b_102_updateRecents)
HXLINE( 103)		this->_currentFrames++;
HXLINE( 105)		if ((this->_currentFrames >= this->framesDelay)) {
HXLINE( 107)			 ::flixel::math::FlxPoint p = null();
HXLINE( 108)			if ((this->_recentPositions->length >= this->length)) {
HXLINE( 110)				p = this->_recentPositions->shift().StaticCast<  ::flixel::math::FlxPoint >();
            			}
            			else {
HXLINE( 114)				 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 114)				point->_inPool = false;
HXDLIN( 114)				p = point;
            			}
HXLINE( 116)			p->set(this->target->x,this->target->y);
HXLINE( 117)			this->_recentPositions->push(p);
HXLINE( 119)			if (this->cachePixels) {
HXLINE( 121)				if ((this->_recentPixels->length >= this->length)) {
HXLINE( 123)					::flixel::util::FlxDestroyUtil_obj::dispose(this->_recentPixels->shift().StaticCast<  ::openfl::display::BitmapData >());
            				}
HXLINE( 125)				::Array< ::Dynamic> _hx_tmp = this->_recentPixels;
HXDLIN( 125)				_hx_tmp->push(this->target->get_pixels()->clone());
            			}
HXLINE( 128)			this->_currentFrames = 0;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTrailEffect_obj,updateRecents,(void))

 ::openfl::display::BitmapData FlxTrailEffect_obj::apply( ::openfl::display::BitmapData bitmapData){
            	HX_GC_STACKFRAME(&_hx_pos_59dc977ba4c4032b_133_apply)
HXLINE( 134)		this->updateRecents();
HXLINE( 136)		if ((this->_recentPositions->length < 1)) {
HXLINE( 137)			return bitmapData;
            		}
HXLINE( 139)		Float minX = ( (Float)(0) );
HXLINE( 140)		Float maxX = ( (Float)(0) );
HXLINE( 141)		Float minY = ( (Float)(0) );
HXLINE( 142)		Float maxY = ( (Float)(0) );
HXLINE( 144)		int ww = bitmapData->width;
HXLINE( 145)		int hh = bitmapData->height;
HXLINE( 147)		{
HXLINE( 147)			int _g = 0;
HXDLIN( 147)			int _g1 = this->_recentPositions->length;
HXDLIN( 147)			while((_g < _g1)){
HXLINE( 147)				_g = (_g + 1);
HXDLIN( 147)				int i = (_g - 1);
HXLINE( 149)				if (this->cachePixels) {
HXLINE( 151)					ww = this->_recentPixels->__get(i).StaticCast<  ::openfl::display::BitmapData >()->width;
HXLINE( 152)					hh = this->_recentPixels->__get(i).StaticCast<  ::openfl::display::BitmapData >()->height;
            				}
HXLINE( 155)				minX = ::Math_obj::min((this->_recentPositions->__get(i).StaticCast<  ::flixel::math::FlxPoint >()->x - this->target->x),::Math_obj::min(minX,( (Float)(0) )));
HXLINE( 156)				minY = ::Math_obj::min((this->_recentPositions->__get(i).StaticCast<  ::flixel::math::FlxPoint >()->y - this->target->y),::Math_obj::min(minY,( (Float)(0) )));
HXLINE( 157)				maxX = ::Math_obj::max(((this->_recentPositions->__get(i).StaticCast<  ::flixel::math::FlxPoint >()->x - this->target->x) + ww),::Math_obj::max(maxX,( (Float)(0) )));
HXLINE( 158)				maxY = ::Math_obj::max(((this->_recentPositions->__get(i).StaticCast<  ::flixel::math::FlxPoint >()->y - this->target->y) + hh),::Math_obj::max(maxY,( (Float)(0) )));
            			}
            		}
HXLINE( 161)		this->offset->set(minX,minY);
HXLINE( 163)		bool _hx_tmp;
HXDLIN( 163)		bool _hx_tmp1;
HXDLIN( 163)		bool _hx_tmp2;
HXDLIN( 163)		bool _hx_tmp3;
HXDLIN( 163)		if (!(this->cachePixels)) {
HXLINE( 163)			_hx_tmp3 = (minX == 0);
            		}
            		else {
HXLINE( 163)			_hx_tmp3 = false;
            		}
HXDLIN( 163)		if (_hx_tmp3) {
HXLINE( 163)			_hx_tmp2 = (minY == 0);
            		}
            		else {
HXLINE( 163)			_hx_tmp2 = false;
            		}
HXDLIN( 163)		if (_hx_tmp2) {
HXLINE( 163)			_hx_tmp1 = (maxX == 0);
            		}
            		else {
HXLINE( 163)			_hx_tmp1 = false;
            		}
HXDLIN( 163)		if (_hx_tmp1) {
HXLINE( 163)			_hx_tmp = (maxY == 0);
            		}
            		else {
HXLINE( 163)			_hx_tmp = false;
            		}
HXDLIN( 163)		if (_hx_tmp) {
HXLINE( 165)			return bitmapData;
            		}
HXLINE( 168)		if (::hx::IsNull( this->_pixels )) {
HXLINE( 170)			::flixel::util::FlxDestroyUtil_obj::dispose(this->_pixels);
HXLINE( 171)			int _hx_tmp = ::Std_obj::_hx_int((maxX - minX));
HXDLIN( 171)			this->_pixels =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,_hx_tmp,::Std_obj::_hx_int((maxY - minY)),true,0);
            		}
            		else {
HXLINE( 175)			int w = ::Std_obj::_hx_int(::Math_obj::max(( (Float)(this->_pixels->width) ),(maxX - minX)));
HXLINE( 176)			int h = ::Std_obj::_hx_int(::Math_obj::max(( (Float)(this->_pixels->height) ),(maxY - minY)));
HXLINE( 177)			bool _hx_tmp;
HXDLIN( 177)			if ((this->_pixels->width >= w)) {
HXLINE( 177)				_hx_tmp = (this->_pixels->height < h);
            			}
            			else {
HXLINE( 177)				_hx_tmp = true;
            			}
HXDLIN( 177)			if (_hx_tmp) {
HXLINE( 179)				this->_pixels =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,w,h,true,0);
            			}
            			else {
HXLINE( 183)				this->_pixels->fillRect(this->_pixels->rect,0);
            			}
            		}
HXLINE( 187)		Float alphaDiff = (this->alpha / ( (Float)(this->_recentPositions->length) ));
HXLINE( 189)		this->_pixels->lock();
HXLINE( 190)		{
HXLINE( 190)			int _g2 = 0;
HXDLIN( 190)			int _g3 = this->_recentPositions->length;
HXDLIN( 190)			while((_g2 < _g3)){
HXLINE( 190)				_g2 = (_g2 + 1);
HXDLIN( 190)				int i = (_g2 - 1);
HXLINE( 192)				this->_colorTransform->alphaMultiplier = (alphaDiff * ( (Float)(i) ));
HXLINE( 193)				this->_matrix->tx = ((this->_recentPositions->__get(i).StaticCast<  ::flixel::math::FlxPoint >()->x - this->target->x) - this->offset->x);
HXLINE( 194)				this->_matrix->ty = ((this->_recentPositions->__get(i).StaticCast<  ::flixel::math::FlxPoint >()->y - this->target->y) - this->offset->y);
HXLINE( 196)				bool _hx_tmp;
HXDLIN( 196)				bool _hx_tmp1;
HXDLIN( 196)				if (!(this->cachePixels)) {
HXLINE( 196)					_hx_tmp1 = (this->_matrix->tx != 0);
            				}
            				else {
HXLINE( 196)					_hx_tmp1 = true;
            				}
HXDLIN( 196)				if (!(_hx_tmp1)) {
HXLINE( 196)					_hx_tmp = (this->_matrix->ty != 0);
            				}
            				else {
HXLINE( 196)					_hx_tmp = true;
            				}
HXDLIN( 196)				if (_hx_tmp) {
HXLINE( 198)					bool _hx_tmp;
HXDLIN( 198)					if (this->cachePixels) {
HXLINE( 198)						_hx_tmp = (this->_recentPixels->length > i);
            					}
            					else {
HXLINE( 198)						_hx_tmp = false;
            					}
HXDLIN( 198)					if (_hx_tmp) {
HXLINE( 200)						this->_pixels->draw(this->_recentPixels->__get(i).StaticCast<  ::openfl::display::BitmapData >(),this->_matrix,this->_colorTransform,null(),null(),null());
            					}
            					else {
HXLINE( 204)						this->_pixels->draw(bitmapData,this->_matrix,this->_colorTransform,null(),null(),null());
            					}
            				}
            			}
            		}
HXLINE( 209)		this->_matrix->tx = -(this->offset->x);
HXLINE( 210)		this->_matrix->ty = -(this->offset->y);
HXLINE( 212)		this->_pixels->draw(bitmapData,this->_matrix,null(),null(),null(),null());
HXLINE( 213)		this->_pixels->unlock(null());
HXLINE( 215)		::flixel::util::FlxDestroyUtil_obj::dispose(bitmapData);
HXLINE( 217)		return this->_pixels->clone();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTrailEffect_obj,apply,return )

void FlxTrailEffect_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_59dc977ba4c4032b_223_clear)
HXDLIN( 223)		if ((this->_recentPositions->length > 0)) {
HXLINE( 225)			::flixel::util::FlxDestroyUtil_obj::putArray(this->_recentPositions);
HXLINE( 226)			this->disposeCachedPixels();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTrailEffect_obj,clear,(void))

void FlxTrailEffect_obj::disposeCachedPixels(){
            	HX_STACKFRAME(&_hx_pos_59dc977ba4c4032b_232_disposeCachedPixels)
HXDLIN( 232)		while((this->_recentPixels->length > 0)){
HXLINE( 234)			::flixel::util::FlxDestroyUtil_obj::dispose(this->_recentPixels->shift().StaticCast<  ::openfl::display::BitmapData >());
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTrailEffect_obj,disposeCachedPixels,(void))

int FlxTrailEffect_obj::set_length(int Value){
            	HX_STACKFRAME(&_hx_pos_59dc977ba4c4032b_239_set_length)
HXLINE( 240)		if ((1 > Value)) {
HXLINE( 240)			Value = 1;
            		}
HXLINE( 241)		while((Value < this->_recentPositions->length)){
HXLINE( 243)			this->_recentPositions->shift().StaticCast<  ::flixel::math::FlxPoint >();
HXLINE( 244)			if ((this->_recentPixels->length > this->_recentPositions->length)) {
HXLINE( 246)				this->_recentPixels->shift().StaticCast<  ::openfl::display::BitmapData >();
            			}
            		}
HXLINE( 250)		return (this->length = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTrailEffect_obj,set_length,return )

bool FlxTrailEffect_obj::set_cachePixels(bool Value){
            	HX_STACKFRAME(&_hx_pos_59dc977ba4c4032b_254_set_cachePixels)
HXLINE( 255)		if (!(Value)) {
HXLINE( 257)			this->disposeCachedPixels();
            		}
HXLINE( 259)		return (this->cachePixels = Value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTrailEffect_obj,set_cachePixels,return )


::hx::ObjectPtr< FlxTrailEffect_obj > FlxTrailEffect_obj::__new( ::flixel::addons::effects::chainable::FlxEffectSprite Target,::hx::Null< int >  __o_Length,::hx::Null< Float >  __o_Alpha,::hx::Null< int >  __o_FramesDelay,::hx::Null< bool >  __o_CachePixels) {
	::hx::ObjectPtr< FlxTrailEffect_obj > __this = new FlxTrailEffect_obj();
	__this->__construct(Target,__o_Length,__o_Alpha,__o_FramesDelay,__o_CachePixels);
	return __this;
}

::hx::ObjectPtr< FlxTrailEffect_obj > FlxTrailEffect_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::effects::chainable::FlxEffectSprite Target,::hx::Null< int >  __o_Length,::hx::Null< Float >  __o_Alpha,::hx::Null< int >  __o_FramesDelay,::hx::Null< bool >  __o_CachePixels) {
	FlxTrailEffect_obj *__this = (FlxTrailEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxTrailEffect_obj), true, "flixel.addons.effects.chainable.FlxTrailEffect"));
	*(void **)__this = FlxTrailEffect_obj::_hx_vtable;
	__this->__construct(Target,__o_Length,__o_Alpha,__o_FramesDelay,__o_CachePixels);
	return __this;
}

FlxTrailEffect_obj::FlxTrailEffect_obj()
{
}

void FlxTrailEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTrailEffect);
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(target,"target");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(framesDelay,"framesDelay");
	HX_MARK_MEMBER_NAME(cachePixels,"cachePixels");
	HX_MARK_MEMBER_NAME(_recentPositions,"_recentPositions");
	HX_MARK_MEMBER_NAME(_recentPixels,"_recentPixels");
	HX_MARK_MEMBER_NAME(_currentFrames,"_currentFrames");
	HX_MARK_MEMBER_NAME(_pixels,"_pixels");
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	HX_MARK_MEMBER_NAME(_colorTransform,"_colorTransform");
	HX_MARK_END_CLASS();
}

void FlxTrailEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(target,"target");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(framesDelay,"framesDelay");
	HX_VISIT_MEMBER_NAME(cachePixels,"cachePixels");
	HX_VISIT_MEMBER_NAME(_recentPositions,"_recentPositions");
	HX_VISIT_MEMBER_NAME(_recentPixels,"_recentPixels");
	HX_VISIT_MEMBER_NAME(_currentFrames,"_currentFrames");
	HX_VISIT_MEMBER_NAME(_pixels,"_pixels");
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
	HX_VISIT_MEMBER_NAME(_colorTransform,"_colorTransform");
}

::hx::Val FlxTrailEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { return ::hx::Val( alpha ); }
		if (HX_FIELD_EQ(inName,"apply") ) { return ::hx::Val( apply_dyn() ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return ::hx::Val( active ); }
		if (HX_FIELD_EQ(inName,"offset") ) { return ::hx::Val( offset ); }
		if (HX_FIELD_EQ(inName,"target") ) { return ::hx::Val( target ); }
		if (HX_FIELD_EQ(inName,"length") ) { return ::hx::Val( length ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_pixels") ) { return ::hx::Val( _pixels ); }
		if (HX_FIELD_EQ(inName,"_matrix") ) { return ::hx::Val( _matrix ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_length") ) { return ::hx::Val( set_length_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"framesDelay") ) { return ::hx::Val( framesDelay ); }
		if (HX_FIELD_EQ(inName,"cachePixels") ) { return ::hx::Val( cachePixels ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_recentPixels") ) { return ::hx::Val( _recentPixels ); }
		if (HX_FIELD_EQ(inName,"updateRecents") ) { return ::hx::Val( updateRecents_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_currentFrames") ) { return ::hx::Val( _currentFrames ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_colorTransform") ) { return ::hx::Val( _colorTransform ); }
		if (HX_FIELD_EQ(inName,"set_cachePixels") ) { return ::hx::Val( set_cachePixels_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_recentPositions") ) { return ::hx::Val( _recentPositions ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"disposeCachedPixels") ) { return ::hx::Val( disposeCachedPixels_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxTrailEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { alpha=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"target") ) { target=inValue.Cast<  ::flixel::addons::effects::chainable::FlxEffectSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_length(inValue.Cast< int >()) );length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_pixels") ) { _pixels=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"framesDelay") ) { framesDelay=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"cachePixels") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_cachePixels(inValue.Cast< bool >()) );cachePixels=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_recentPixels") ) { _recentPixels=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_currentFrames") ) { _currentFrames=inValue.Cast< int >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_colorTransform") ) { _colorTransform=inValue.Cast<  ::openfl::geom::ColorTransform >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_recentPositions") ) { _recentPositions=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTrailEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("active",c6,41,46,16));
	outFields->push(HX_("offset",93,97,3f,60));
	outFields->push(HX_("target",51,f3,ec,86));
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("alpha",5e,a7,96,21));
	outFields->push(HX_("framesDelay",fd,1d,12,0f));
	outFields->push(HX_("cachePixels",0f,1b,4b,ab));
	outFields->push(HX_("_recentPositions",10,4e,ba,ee));
	outFields->push(HX_("_recentPixels",07,b9,1d,c4));
	outFields->push(HX_("_currentFrames",00,21,34,ce));
	outFields->push(HX_("_pixels",cc,00,21,fb));
	outFields->push(HX_("_matrix",e0,47,3f,2a));
	outFields->push(HX_("_colorTransform",28,20,a0,f6));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxTrailEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(FlxTrailEffect_obj,active),HX_("active",c6,41,46,16)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxTrailEffect_obj,offset),HX_("offset",93,97,3f,60)},
	{::hx::fsObject /*  ::flixel::addons::effects::chainable::FlxEffectSprite */ ,(int)offsetof(FlxTrailEffect_obj,target),HX_("target",51,f3,ec,86)},
	{::hx::fsInt,(int)offsetof(FlxTrailEffect_obj,length),HX_("length",e6,94,07,9f)},
	{::hx::fsFloat,(int)offsetof(FlxTrailEffect_obj,alpha),HX_("alpha",5e,a7,96,21)},
	{::hx::fsInt,(int)offsetof(FlxTrailEffect_obj,framesDelay),HX_("framesDelay",fd,1d,12,0f)},
	{::hx::fsBool,(int)offsetof(FlxTrailEffect_obj,cachePixels),HX_("cachePixels",0f,1b,4b,ab)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxTrailEffect_obj,_recentPositions),HX_("_recentPositions",10,4e,ba,ee)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(FlxTrailEffect_obj,_recentPixels),HX_("_recentPixels",07,b9,1d,c4)},
	{::hx::fsInt,(int)offsetof(FlxTrailEffect_obj,_currentFrames),HX_("_currentFrames",00,21,34,ce)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(FlxTrailEffect_obj,_pixels),HX_("_pixels",cc,00,21,fb)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(int)offsetof(FlxTrailEffect_obj,_matrix),HX_("_matrix",e0,47,3f,2a)},
	{::hx::fsObject /*  ::openfl::geom::ColorTransform */ ,(int)offsetof(FlxTrailEffect_obj,_colorTransform),HX_("_colorTransform",28,20,a0,f6)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxTrailEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxTrailEffect_obj_sMemberFields[] = {
	HX_("active",c6,41,46,16),
	HX_("offset",93,97,3f,60),
	HX_("target",51,f3,ec,86),
	HX_("length",e6,94,07,9f),
	HX_("alpha",5e,a7,96,21),
	HX_("framesDelay",fd,1d,12,0f),
	HX_("cachePixels",0f,1b,4b,ab),
	HX_("_recentPositions",10,4e,ba,ee),
	HX_("_recentPixels",07,b9,1d,c4),
	HX_("_currentFrames",00,21,34,ce),
	HX_("_pixels",cc,00,21,fb),
	HX_("_matrix",e0,47,3f,2a),
	HX_("_colorTransform",28,20,a0,f6),
	HX_("destroy",fa,2c,86,24),
	HX_("update",09,86,05,87),
	HX_("updateRecents",6f,90,ca,f5),
	HX_("apply",6e,85,3b,24),
	HX_("clear",8d,71,5b,48),
	HX_("disposeCachedPixels",ee,97,61,b7),
	HX_("set_length",23,a3,0c,93),
	HX_("set_cachePixels",b2,4f,f8,67),
	::String(null()) };

::hx::Class FlxTrailEffect_obj::__mClass;

void FlxTrailEffect_obj::__register()
{
	FlxTrailEffect_obj _hx_dummy;
	FlxTrailEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.effects.chainable.FlxTrailEffect",ad,56,a9,e6);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxTrailEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxTrailEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTrailEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTrailEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace effects
} // end namespace chainable
