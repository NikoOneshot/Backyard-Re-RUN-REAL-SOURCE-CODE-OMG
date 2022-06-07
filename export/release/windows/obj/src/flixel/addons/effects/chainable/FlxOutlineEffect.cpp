#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_addons_effects_chainable_FlxOutlineEffect
#include <flixel/addons/effects/chainable/FlxOutlineEffect.h>
#endif
#ifndef INCLUDED_flixel_addons_effects_chainable_FlxOutlineMode
#include <flixel/addons/effects/chainable/FlxOutlineMode.h>
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
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9458337119b3f2b8_17_new,"flixel.addons.effects.chainable.FlxOutlineEffect","new",0x3212f25b,"flixel.addons.effects.chainable.FlxOutlineEffect.new","flixel/addons/effects/chainable/FlxOutlineEffect.hx",17,0x569b1153)
HX_LOCAL_STACK_FRAME(_hx_pos_9458337119b3f2b8_93_destroy,"flixel.addons.effects.chainable.FlxOutlineEffect","destroy",0x607d6875,"flixel.addons.effects.chainable.FlxOutlineEffect.destroy","flixel/addons/effects/chainable/FlxOutlineEffect.hx",93,0x569b1153)
HX_LOCAL_STACK_FRAME(_hx_pos_9458337119b3f2b8_102_update,"flixel.addons.effects.chainable.FlxOutlineEffect","update",0x2c9992ee,"flixel.addons.effects.chainable.FlxOutlineEffect.update","flixel/addons/effects/chainable/FlxOutlineEffect.hx",102,0x569b1153)
HX_LOCAL_STACK_FRAME(_hx_pos_9458337119b3f2b8_105_apply,"flixel.addons.effects.chainable.FlxOutlineEffect","apply",0x9d835c29,"flixel.addons.effects.chainable.FlxOutlineEffect.apply","flixel/addons/effects/chainable/FlxOutlineEffect.hx",105,0x569b1153)
HX_LOCAL_STACK_FRAME(_hx_pos_9458337119b3f2b8_174_drawPixelByPixel,"flixel.addons.effects.chainable.FlxOutlineEffect","drawPixelByPixel",0x45989e92,"flixel.addons.effects.chainable.FlxOutlineEffect.drawPixelByPixel","flixel/addons/effects/chainable/FlxOutlineEffect.hx",174,0x569b1153)
HX_LOCAL_STACK_FRAME(_hx_pos_9458337119b3f2b8_191_drawNormal,"flixel.addons.effects.chainable.FlxOutlineEffect","drawNormal",0x1b79d0b0,"flixel.addons.effects.chainable.FlxOutlineEffect.drawNormal","flixel/addons/effects/chainable/FlxOutlineEffect.hx",191,0x569b1153)
HX_LOCAL_STACK_FRAME(_hx_pos_9458337119b3f2b8_211_drawFast,"flixel.addons.effects.chainable.FlxOutlineEffect","drawFast",0x947c3ce5,"flixel.addons.effects.chainable.FlxOutlineEffect.drawFast","flixel/addons/effects/chainable/FlxOutlineEffect.hx",211,0x569b1153)
HX_LOCAL_STACK_FRAME(_hx_pos_9458337119b3f2b8_227_drawBorder,"flixel.addons.effects.chainable.FlxOutlineEffect","drawBorder",0x4f2aab75,"flixel.addons.effects.chainable.FlxOutlineEffect.drawBorder","flixel/addons/effects/chainable/FlxOutlineEffect.hx",227,0x569b1153)
HX_LOCAL_STACK_FRAME(_hx_pos_9458337119b3f2b8_233_surroundPixel,"flixel.addons.effects.chainable.FlxOutlineEffect","surroundPixel",0xad052aa3,"flixel.addons.effects.chainable.FlxOutlineEffect.surroundPixel","flixel/addons/effects/chainable/FlxOutlineEffect.hx",233,0x569b1153)
namespace flixel{
namespace addons{
namespace effects{
namespace chainable{

void FlxOutlineEffect_obj::__construct( ::flixel::addons::effects::chainable::FlxOutlineMode Mode,::hx::Null< int >  __o_Color,::hx::Null< int >  __o_Thickness,::hx::Null< int >  __o_Threshold,::hx::Null< Float >  __o_Quality){
            		int Color = __o_Color.Default(-1);
            		int Thickness = __o_Thickness.Default(1);
            		int Threshold = __o_Threshold.Default(0);
            		Float Quality = __o_Quality.Default(1);
            	HX_GC_STACKFRAME(&_hx_pos_9458337119b3f2b8_17_new)
HXLINE(  72)		this->_matrix =  ::openfl::geom::Matrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
HXLINE(  70)		this->_flashPoint =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  26)		this->dirty = true;
HXLINE(  20)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  20)		point->_inPool = false;
HXDLIN(  20)		this->offset = point;
HXLINE(  19)		this->active = true;
HXLINE(  85)		 ::flixel::addons::effects::chainable::FlxOutlineMode _hx_tmp;
HXDLIN(  85)		if (::hx::IsNull( Mode )) {
HXLINE(  85)			_hx_tmp = ::flixel::addons::effects::chainable::FlxOutlineMode_obj::FAST_dyn();
            		}
            		else {
HXLINE(  85)			_hx_tmp = Mode;
            		}
HXDLIN(  85)		this->mode = _hx_tmp;
HXLINE(  86)		this->color = Color;
HXLINE(  87)		this->thickness = Thickness;
HXLINE(  88)		this->threshold = Threshold;
HXLINE(  89)		this->quality = Quality;
            	}

Dynamic FlxOutlineEffect_obj::__CreateEmpty() { return new FlxOutlineEffect_obj; }

void *FlxOutlineEffect_obj::_hx_vtable = 0;

Dynamic FlxOutlineEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxOutlineEffect_obj > _hx_result = new FlxOutlineEffect_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool FlxOutlineEffect_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x28347a0d;
}

static ::flixel::addons::effects::chainable::IFlxEffect_obj _hx_flixel_addons_effects_chainable_FlxOutlineEffect__hx_flixel_addons_effects_chainable_IFlxEffect= {
	( void (::hx::Object::*)())&::flixel::addons::effects::chainable::FlxOutlineEffect_obj::destroy,
	( void (::hx::Object::*)(Float))&::flixel::addons::effects::chainable::FlxOutlineEffect_obj::update,
	(  ::openfl::display::BitmapData (::hx::Object::*)( ::openfl::display::BitmapData))&::flixel::addons::effects::chainable::FlxOutlineEffect_obj::apply,
};

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_addons_effects_chainable_FlxOutlineEffect__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::addons::effects::chainable::FlxOutlineEffect_obj::destroy,
};

void *FlxOutlineEffect_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x4a1f9502: return &_hx_flixel_addons_effects_chainable_FlxOutlineEffect__hx_flixel_addons_effects_chainable_IFlxEffect;
		case (int)0xd4fe2fcd: return &_hx_flixel_addons_effects_chainable_FlxOutlineEffect__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxOutlineEffect_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_9458337119b3f2b8_93_destroy)
HXLINE(  94)		this->_pixels = ::flixel::util::FlxDestroyUtil_obj::dispose(this->_pixels);
HXLINE(  95)		this->_borderPixels = ::flixel::util::FlxDestroyUtil_obj::dispose(this->_borderPixels);
HXLINE(  97)		this->_flashPoint = null();
HXLINE(  98)		this->_matrix = null();
HXLINE(  99)		this->offset = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->offset)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxOutlineEffect_obj,destroy,(void))

void FlxOutlineEffect_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_9458337119b3f2b8_102_update)
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxOutlineEffect_obj,update,(void))

 ::openfl::display::BitmapData FlxOutlineEffect_obj::apply( ::openfl::display::BitmapData bitmapData){
            	HX_GC_STACKFRAME(&_hx_pos_9458337119b3f2b8_105_apply)
HXLINE( 106)		if (this->dirty) {
HXLINE( 108)			int brush = (this->thickness * 2);
HXLINE( 110)			bool _hx_tmp;
HXDLIN( 110)			bool _hx_tmp1;
HXDLIN( 110)			if (::hx::IsNotNull( this->_pixels )) {
HXLINE( 110)				_hx_tmp1 = (this->_pixels->width < (bitmapData->width + brush));
            			}
            			else {
HXLINE( 110)				_hx_tmp1 = true;
            			}
HXDLIN( 110)			if (!(_hx_tmp1)) {
HXLINE( 110)				_hx_tmp = (this->_pixels->height < (bitmapData->height + brush));
            			}
            			else {
HXLINE( 110)				_hx_tmp = true;
            			}
HXDLIN( 110)			if (_hx_tmp) {
HXLINE( 112)				::flixel::util::FlxDestroyUtil_obj::dispose(this->_pixels);
HXLINE( 113)				this->_pixels =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,(bitmapData->width + brush),(bitmapData->height + brush),true,this->color);
            			}
            			else {
HXLINE( 117)				this->_pixels->fillRect(this->_pixels->rect,this->color);
            			}
HXLINE( 120)			if (::hx::IsPointerEq( this->mode,::flixel::addons::effects::chainable::FlxOutlineMode_obj::PIXEL_BY_PIXEL_dyn() )) {
HXLINE( 122)				this->drawPixelByPixel(bitmapData);
            			}
            			else {
HXLINE( 126)				bool _hx_tmp;
HXDLIN( 126)				bool _hx_tmp1;
HXDLIN( 126)				if (::hx::IsNotNull( this->_borderPixels )) {
HXLINE( 126)					_hx_tmp1 = (this->_borderPixels->width < bitmapData->width);
            				}
            				else {
HXLINE( 126)					_hx_tmp1 = true;
            				}
HXDLIN( 126)				if (!(_hx_tmp1)) {
HXLINE( 126)					_hx_tmp = (this->_borderPixels->height < bitmapData->height);
            				}
            				else {
HXLINE( 126)					_hx_tmp = true;
            				}
HXDLIN( 126)				if (_hx_tmp) {
HXLINE( 128)					::flixel::util::FlxDestroyUtil_obj::dispose(this->_borderPixels);
HXLINE( 129)					this->_borderPixels =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,bitmapData->width,bitmapData->height,true,0);
            				}
            				else {
HXLINE( 133)					this->_borderPixels->fillRect(this->_borderPixels->rect,0);
            				}
HXLINE( 136)				this->_flashPoint->setTo(( (Float)(0) ),( (Float)(0) ));
HXLINE( 137)				this->_borderPixels->copyPixels(this->_pixels,this->_pixels->rect,this->_flashPoint,bitmapData,null(),true);
HXLINE( 138)				this->_pixels->fillRect(this->_pixels->rect,0);
HXLINE( 140)				this->_matrix->identity();
HXLINE( 141)				this->_matrix->translate(( (Float)(this->thickness) ),( (Float)(this->thickness) ));
HXLINE( 143)				int iterations = ::Std_obj::_hx_int(::Math_obj::max(( (Float)(1) ),(( (Float)(this->thickness) ) * this->quality)));
HXLINE( 144)				switch((int)(this->mode->_hx_getIndex())){
            					case (int)0: {
HXLINE( 150)						this->drawFast(iterations);
            					}
            					break;
            					case (int)1: {
HXLINE( 147)						this->drawNormal(iterations);
            					}
            					break;
            					case (int)2: {
            					}
            					break;
            				}
            			}
HXLINE( 156)			this->dirty = false;
            		}
HXLINE( 159)		if (::hx::IsNotNull( this->_pixels )) {
HXLINE( 161)			this->offset->set(-(this->thickness),-(this->thickness));
HXLINE( 163)			this->_flashPoint->setTo(( (Float)(this->thickness) ),( (Float)(this->thickness) ));
HXLINE( 164)			this->_pixels->copyPixels(bitmapData,bitmapData->rect,this->_flashPoint,null(),null(),true);
HXLINE( 166)			::flixel::util::FlxDestroyUtil_obj::dispose(bitmapData);
HXLINE( 167)			return this->_pixels->clone();
            		}
HXLINE( 170)		return bitmapData;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxOutlineEffect_obj,apply,return )

void FlxOutlineEffect_obj::drawPixelByPixel( ::openfl::display::BitmapData bitmapData){
            	HX_STACKFRAME(&_hx_pos_9458337119b3f2b8_174_drawPixelByPixel)
HXLINE( 175)		this->_pixels->fillRect(this->_pixels->rect,0);
HXLINE( 177)		{
HXLINE( 177)			int _g = 0;
HXDLIN( 177)			int _g1 = bitmapData->height;
HXDLIN( 177)			while((_g < _g1)){
HXLINE( 177)				_g = (_g + 1);
HXDLIN( 177)				int y = (_g - 1);
HXLINE( 179)				{
HXLINE( 179)					int _g1 = 0;
HXDLIN( 179)					int _g2 = bitmapData->width;
HXDLIN( 179)					while((_g1 < _g2)){
HXLINE( 179)						_g1 = (_g1 + 1);
HXDLIN( 179)						int x = (_g1 - 1);
HXLINE( 181)						int c = bitmapData->getPixel32(x,y);
HXLINE( 182)						if ((((c >> 24) & 255) > this->threshold)) {
HXLINE( 184)							this->surroundPixel(x,y,( (Float)((this->thickness * 2)) ));
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxOutlineEffect_obj,drawPixelByPixel,(void))

void FlxOutlineEffect_obj::drawNormal(int iterations){
            	HX_STACKFRAME(&_hx_pos_9458337119b3f2b8_191_drawNormal)
HXLINE( 192)		Float delta = (( (Float)(this->thickness) ) / ( (Float)(iterations) ));
HXLINE( 193)		Float curDelta = delta;
HXLINE( 194)		{
HXLINE( 194)			int _g = 0;
HXDLIN( 194)			int _g1 = iterations;
HXDLIN( 194)			while((_g < _g1)){
HXLINE( 194)				_g = (_g + 1);
HXDLIN( 194)				int i = (_g - 1);
HXLINE( 196)				{
HXLINE( 196)					this->_matrix->translate(-(curDelta),-(curDelta));
HXDLIN( 196)					this->_pixels->draw(this->_borderPixels,this->_matrix,null(),null(),null(),null());
            				}
HXLINE( 197)				{
HXLINE( 197)					this->_matrix->translate(curDelta,( (Float)(0) ));
HXDLIN( 197)					this->_pixels->draw(this->_borderPixels,this->_matrix,null(),null(),null(),null());
            				}
HXLINE( 198)				{
HXLINE( 198)					this->_matrix->translate(curDelta,( (Float)(0) ));
HXDLIN( 198)					this->_pixels->draw(this->_borderPixels,this->_matrix,null(),null(),null(),null());
            				}
HXLINE( 199)				{
HXLINE( 199)					this->_matrix->translate(( (Float)(0) ),curDelta);
HXDLIN( 199)					this->_pixels->draw(this->_borderPixels,this->_matrix,null(),null(),null(),null());
            				}
HXLINE( 200)				{
HXLINE( 200)					this->_matrix->translate(( (Float)(0) ),curDelta);
HXDLIN( 200)					this->_pixels->draw(this->_borderPixels,this->_matrix,null(),null(),null(),null());
            				}
HXLINE( 201)				{
HXLINE( 201)					this->_matrix->translate(-(curDelta),( (Float)(0) ));
HXDLIN( 201)					this->_pixels->draw(this->_borderPixels,this->_matrix,null(),null(),null(),null());
            				}
HXLINE( 202)				{
HXLINE( 202)					this->_matrix->translate(-(curDelta),( (Float)(0) ));
HXDLIN( 202)					this->_pixels->draw(this->_borderPixels,this->_matrix,null(),null(),null(),null());
            				}
HXLINE( 203)				{
HXLINE( 203)					this->_matrix->translate(( (Float)(0) ),-(curDelta));
HXDLIN( 203)					this->_pixels->draw(this->_borderPixels,this->_matrix,null(),null(),null(),null());
            				}
HXLINE( 205)				this->_matrix->translate(curDelta,( (Float)(0) ));
HXLINE( 206)				curDelta = (curDelta + delta);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxOutlineEffect_obj,drawNormal,(void))

void FlxOutlineEffect_obj::drawFast(int iterations){
            	HX_STACKFRAME(&_hx_pos_9458337119b3f2b8_211_drawFast)
HXLINE( 212)		Float delta = (( (Float)(this->thickness) ) / ( (Float)(iterations) ));
HXLINE( 213)		Float curDelta = delta;
HXLINE( 214)		{
HXLINE( 214)			int _g = 0;
HXDLIN( 214)			int _g1 = iterations;
HXDLIN( 214)			while((_g < _g1)){
HXLINE( 214)				_g = (_g + 1);
HXDLIN( 214)				int i = (_g - 1);
HXLINE( 216)				{
HXLINE( 216)					this->_matrix->translate(-(curDelta),-(curDelta));
HXDLIN( 216)					this->_pixels->draw(this->_borderPixels,this->_matrix,null(),null(),null(),null());
            				}
HXLINE( 217)				{
HXLINE( 217)					this->_matrix->translate((curDelta * ( (Float)(2) )),( (Float)(0) ));
HXDLIN( 217)					this->_pixels->draw(this->_borderPixels,this->_matrix,null(),null(),null(),null());
            				}
HXLINE( 218)				{
HXLINE( 218)					this->_matrix->translate(( (Float)(0) ),(curDelta * ( (Float)(2) )));
HXDLIN( 218)					this->_pixels->draw(this->_borderPixels,this->_matrix,null(),null(),null(),null());
            				}
HXLINE( 219)				{
HXLINE( 219)					this->_matrix->translate((-(curDelta) * ( (Float)(2) )),( (Float)(0) ));
HXDLIN( 219)					this->_pixels->draw(this->_borderPixels,this->_matrix,null(),null(),null(),null());
            				}
HXLINE( 221)				this->_matrix->translate(curDelta,-(curDelta));
HXLINE( 222)				curDelta = (curDelta + delta);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxOutlineEffect_obj,drawFast,(void))

void FlxOutlineEffect_obj::drawBorder(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_9458337119b3f2b8_227_drawBorder)
HXLINE( 228)		this->_matrix->translate(x,y);
HXLINE( 229)		this->_pixels->draw(this->_borderPixels,this->_matrix,null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxOutlineEffect_obj,drawBorder,(void))

 ::openfl::display::BitmapData FlxOutlineEffect_obj::surroundPixel(int x,int y,Float brush){
            	HX_GC_STACKFRAME(&_hx_pos_9458337119b3f2b8_233_surroundPixel)
HXLINE( 234)		 ::openfl::display::BitmapData _hx_tmp = this->_pixels;
HXDLIN( 234)		_hx_tmp->fillRect( ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,x,y,brush,brush),this->color);
HXLINE( 235)		return this->_pixels;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxOutlineEffect_obj,surroundPixel,return )


::hx::ObjectPtr< FlxOutlineEffect_obj > FlxOutlineEffect_obj::__new( ::flixel::addons::effects::chainable::FlxOutlineMode Mode,::hx::Null< int >  __o_Color,::hx::Null< int >  __o_Thickness,::hx::Null< int >  __o_Threshold,::hx::Null< Float >  __o_Quality) {
	::hx::ObjectPtr< FlxOutlineEffect_obj > __this = new FlxOutlineEffect_obj();
	__this->__construct(Mode,__o_Color,__o_Thickness,__o_Threshold,__o_Quality);
	return __this;
}

::hx::ObjectPtr< FlxOutlineEffect_obj > FlxOutlineEffect_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::effects::chainable::FlxOutlineMode Mode,::hx::Null< int >  __o_Color,::hx::Null< int >  __o_Thickness,::hx::Null< int >  __o_Threshold,::hx::Null< Float >  __o_Quality) {
	FlxOutlineEffect_obj *__this = (FlxOutlineEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxOutlineEffect_obj), true, "flixel.addons.effects.chainable.FlxOutlineEffect"));
	*(void **)__this = FlxOutlineEffect_obj::_hx_vtable;
	__this->__construct(Mode,__o_Color,__o_Thickness,__o_Threshold,__o_Quality);
	return __this;
}

FlxOutlineEffect_obj::FlxOutlineEffect_obj()
{
}

void FlxOutlineEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxOutlineEffect);
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(mode,"mode");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(thickness,"thickness");
	HX_MARK_MEMBER_NAME(threshold,"threshold");
	HX_MARK_MEMBER_NAME(quality,"quality");
	HX_MARK_MEMBER_NAME(_pixels,"_pixels");
	HX_MARK_MEMBER_NAME(_borderPixels,"_borderPixels");
	HX_MARK_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_MARK_MEMBER_NAME(_matrix,"_matrix");
	HX_MARK_END_CLASS();
}

void FlxOutlineEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(mode,"mode");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(thickness,"thickness");
	HX_VISIT_MEMBER_NAME(threshold,"threshold");
	HX_VISIT_MEMBER_NAME(quality,"quality");
	HX_VISIT_MEMBER_NAME(_pixels,"_pixels");
	HX_VISIT_MEMBER_NAME(_borderPixels,"_borderPixels");
	HX_VISIT_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_VISIT_MEMBER_NAME(_matrix,"_matrix");
}

::hx::Val FlxOutlineEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mode") ) { return ::hx::Val( mode ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { return ::hx::Val( dirty ); }
		if (HX_FIELD_EQ(inName,"color") ) { return ::hx::Val( color ); }
		if (HX_FIELD_EQ(inName,"apply") ) { return ::hx::Val( apply_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return ::hx::Val( active ); }
		if (HX_FIELD_EQ(inName,"offset") ) { return ::hx::Val( offset ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { return ::hx::Val( quality ); }
		if (HX_FIELD_EQ(inName,"_pixels") ) { return ::hx::Val( _pixels ); }
		if (HX_FIELD_EQ(inName,"_matrix") ) { return ::hx::Val( _matrix ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"drawFast") ) { return ::hx::Val( drawFast_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"thickness") ) { return ::hx::Val( thickness ); }
		if (HX_FIELD_EQ(inName,"threshold") ) { return ::hx::Val( threshold ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"drawNormal") ) { return ::hx::Val( drawNormal_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawBorder") ) { return ::hx::Val( drawBorder_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { return ::hx::Val( _flashPoint ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_borderPixels") ) { return ::hx::Val( _borderPixels ); }
		if (HX_FIELD_EQ(inName,"surroundPixel") ) { return ::hx::Val( surroundPixel_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"drawPixelByPixel") ) { return ::hx::Val( drawPixelByPixel_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxOutlineEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"mode") ) { mode=inValue.Cast<  ::flixel::addons::effects::chainable::FlxOutlineMode >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { quality=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pixels") ) { _pixels=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"thickness") ) { thickness=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"threshold") ) { threshold=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { _flashPoint=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_borderPixels") ) { _borderPixels=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxOutlineEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("active",c6,41,46,16));
	outFields->push(HX_("offset",93,97,3f,60));
	outFields->push(HX_("dirty",12,50,d0,d9));
	outFields->push(HX_("mode",63,d3,60,48));
	outFields->push(HX_("color",63,71,5c,4a));
	outFields->push(HX_("thickness",74,f1,66,5a));
	outFields->push(HX_("threshold",ab,c3,a3,34));
	outFields->push(HX_("quality",bf,04,4c,44));
	outFields->push(HX_("_pixels",cc,00,21,fb));
	outFields->push(HX_("_borderPixels",18,bc,51,cc));
	outFields->push(HX_("_flashPoint",9f,1d,2a,b7));
	outFields->push(HX_("_matrix",e0,47,3f,2a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxOutlineEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(FlxOutlineEffect_obj,active),HX_("active",c6,41,46,16)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxOutlineEffect_obj,offset),HX_("offset",93,97,3f,60)},
	{::hx::fsBool,(int)offsetof(FlxOutlineEffect_obj,dirty),HX_("dirty",12,50,d0,d9)},
	{::hx::fsObject /*  ::flixel::addons::effects::chainable::FlxOutlineMode */ ,(int)offsetof(FlxOutlineEffect_obj,mode),HX_("mode",63,d3,60,48)},
	{::hx::fsInt,(int)offsetof(FlxOutlineEffect_obj,color),HX_("color",63,71,5c,4a)},
	{::hx::fsInt,(int)offsetof(FlxOutlineEffect_obj,thickness),HX_("thickness",74,f1,66,5a)},
	{::hx::fsInt,(int)offsetof(FlxOutlineEffect_obj,threshold),HX_("threshold",ab,c3,a3,34)},
	{::hx::fsFloat,(int)offsetof(FlxOutlineEffect_obj,quality),HX_("quality",bf,04,4c,44)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(FlxOutlineEffect_obj,_pixels),HX_("_pixels",cc,00,21,fb)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(FlxOutlineEffect_obj,_borderPixels),HX_("_borderPixels",18,bc,51,cc)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(FlxOutlineEffect_obj,_flashPoint),HX_("_flashPoint",9f,1d,2a,b7)},
	{::hx::fsObject /*  ::openfl::geom::Matrix */ ,(int)offsetof(FlxOutlineEffect_obj,_matrix),HX_("_matrix",e0,47,3f,2a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxOutlineEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxOutlineEffect_obj_sMemberFields[] = {
	HX_("active",c6,41,46,16),
	HX_("offset",93,97,3f,60),
	HX_("dirty",12,50,d0,d9),
	HX_("mode",63,d3,60,48),
	HX_("color",63,71,5c,4a),
	HX_("thickness",74,f1,66,5a),
	HX_("threshold",ab,c3,a3,34),
	HX_("quality",bf,04,4c,44),
	HX_("_pixels",cc,00,21,fb),
	HX_("_borderPixels",18,bc,51,cc),
	HX_("_flashPoint",9f,1d,2a,b7),
	HX_("_matrix",e0,47,3f,2a),
	HX_("destroy",fa,2c,86,24),
	HX_("update",09,86,05,87),
	HX_("apply",6e,85,3b,24),
	HX_("drawPixelByPixel",6d,a1,07,ab),
	HX_("drawNormal",4b,ed,2c,72),
	HX_("drawFast",c0,6c,1f,58),
	HX_("drawBorder",10,c8,dd,a5),
	HX_("surroundPixel",e8,a0,9f,30),
	::String(null()) };

::hx::Class FlxOutlineEffect_obj::__mClass;

void FlxOutlineEffect_obj::__register()
{
	FlxOutlineEffect_obj _hx_dummy;
	FlxOutlineEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.effects.chainable.FlxOutlineEffect",e9,28,c6,08);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxOutlineEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxOutlineEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxOutlineEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxOutlineEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace effects
} // end namespace chainable
