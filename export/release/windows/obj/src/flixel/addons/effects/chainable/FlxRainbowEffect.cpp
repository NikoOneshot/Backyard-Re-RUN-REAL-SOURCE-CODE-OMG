#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_addons_effects_chainable_FlxRainbowEffect
#include <flixel/addons/effects/chainable/FlxRainbowEffect.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e8eb35e29ad8d685_16_new,"flixel.addons.effects.chainable.FlxRainbowEffect","new",0xb2d5850f,"flixel.addons.effects.chainable.FlxRainbowEffect.new","flixel/addons/effects/chainable/FlxRainbowEffect.hx",16,0x7070511f)
HX_LOCAL_STACK_FRAME(_hx_pos_e8eb35e29ad8d685_73_destroy,"flixel.addons.effects.chainable.FlxRainbowEffect","destroy",0x8f116529,"flixel.addons.effects.chainable.FlxRainbowEffect.destroy","flixel/addons/effects/chainable/FlxRainbowEffect.hx",73,0x7070511f)
HX_LOCAL_STACK_FRAME(_hx_pos_e8eb35e29ad8d685_80_update,"flixel.addons.effects.chainable.FlxRainbowEffect","update",0x0938a8ba,"flixel.addons.effects.chainable.FlxRainbowEffect.update","flixel/addons/effects/chainable/FlxRainbowEffect.hx",80,0x7070511f)
HX_LOCAL_STACK_FRAME(_hx_pos_e8eb35e29ad8d685_91_apply,"flixel.addons.effects.chainable.FlxRainbowEffect","apply",0xc21703dd,"flixel.addons.effects.chainable.FlxRainbowEffect.apply","flixel/addons/effects/chainable/FlxRainbowEffect.hx",91,0x7070511f)
namespace flixel{
namespace addons{
namespace effects{
namespace chainable{

void FlxRainbowEffect_obj::__construct(::hx::Null< Float >  __o_Alpha,::hx::Null< Float >  __o_Brightness,::hx::Null< Float >  __o_Speed,::hx::Null< int >  __o_StartHue){
            		Float Alpha = __o_Alpha.Default(1);
            		Float Brightness = __o_Brightness.Default(1);
            		Float Speed = __o_Speed.Default(5);
            		int StartHue = __o_StartHue.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_e8eb35e29ad8d685_16_new)
HXLINE(  49)		this->_flashPoint =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  44)		this->_time = ((Float)0);
HXLINE(  39)		this->_hue = 0;
HXLINE(  34)		this->brightness = ((Float)1);
HXLINE(  29)		this->alpha = ((Float)1);
HXLINE(  24)		this->speed = ((Float)5);
HXLINE(  18)		this->active = true;
HXLINE(  66)		this->alpha = Alpha;
HXLINE(  67)		this->brightness = Brightness;
HXLINE(  68)		this->speed = Speed;
HXLINE(  69)		Float lowerBound;
HXDLIN(  69)		if ((StartHue < 0)) {
HXLINE(  69)			lowerBound = ( (Float)(0) );
            		}
            		else {
HXLINE(  69)			lowerBound = ( (Float)(StartHue) );
            		}
HXDLIN(  69)		Float _hx_tmp;
HXDLIN(  69)		if ((lowerBound > 360)) {
HXLINE(  69)			_hx_tmp = ( (Float)(360) );
            		}
            		else {
HXLINE(  69)			_hx_tmp = lowerBound;
            		}
HXDLIN(  69)		this->_time = ( (Float)((this->_hue = ::Std_obj::_hx_int(_hx_tmp))) );
            	}

Dynamic FlxRainbowEffect_obj::__CreateEmpty() { return new FlxRainbowEffect_obj; }

void *FlxRainbowEffect_obj::_hx_vtable = 0;

Dynamic FlxRainbowEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxRainbowEffect_obj > _hx_result = new FlxRainbowEffect_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool FlxRainbowEffect_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2ea2a2c1;
}

static ::flixel::addons::effects::chainable::IFlxEffect_obj _hx_flixel_addons_effects_chainable_FlxRainbowEffect__hx_flixel_addons_effects_chainable_IFlxEffect= {
	( void (::hx::Object::*)())&::flixel::addons::effects::chainable::FlxRainbowEffect_obj::destroy,
	( void (::hx::Object::*)(Float))&::flixel::addons::effects::chainable::FlxRainbowEffect_obj::update,
	(  ::openfl::display::BitmapData (::hx::Object::*)( ::openfl::display::BitmapData))&::flixel::addons::effects::chainable::FlxRainbowEffect_obj::apply,
};

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_addons_effects_chainable_FlxRainbowEffect__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::addons::effects::chainable::FlxRainbowEffect_obj::destroy,
};

void *FlxRainbowEffect_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x4a1f9502: return &_hx_flixel_addons_effects_chainable_FlxRainbowEffect__hx_flixel_addons_effects_chainable_IFlxEffect;
		case (int)0xd4fe2fcd: return &_hx_flixel_addons_effects_chainable_FlxRainbowEffect__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxRainbowEffect_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_e8eb35e29ad8d685_73_destroy)
HXLINE(  74)		this->_flashPoint = null();
HXLINE(  76)		this->_pixels = ::flixel::util::FlxDestroyUtil_obj::dispose(this->_pixels);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxRainbowEffect_obj,destroy,(void))

void FlxRainbowEffect_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_e8eb35e29ad8d685_80_update)
HXLINE(  81)		 ::flixel::addons::effects::chainable::FlxRainbowEffect _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  81)		_hx_tmp->_time = (_hx_tmp->_time + this->speed);
HXLINE(  82)		this->_hue = ::Std_obj::_hx_int(this->_time);
HXLINE(  83)		if ((this->_hue > 360)) {
HXLINE(  85)			this->_hue = 0;
HXLINE(  86)			 ::flixel::addons::effects::chainable::FlxRainbowEffect _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  86)			_hx_tmp->_time = (_hx_tmp->_time - ( (Float)(360) ));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxRainbowEffect_obj,update,(void))

 ::openfl::display::BitmapData FlxRainbowEffect_obj::apply( ::openfl::display::BitmapData bitmapData){
            	HX_GC_STACKFRAME(&_hx_pos_e8eb35e29ad8d685_91_apply)
HXLINE(  92)		bool _hx_tmp;
HXDLIN(  92)		bool _hx_tmp1;
HXDLIN(  92)		if (::hx::IsNotNull( this->_pixels )) {
HXLINE(  92)			_hx_tmp1 = (this->_pixels->width < bitmapData->width);
            		}
            		else {
HXLINE(  92)			_hx_tmp1 = true;
            		}
HXDLIN(  92)		if (!(_hx_tmp1)) {
HXLINE(  92)			_hx_tmp = (this->_pixels->height < bitmapData->height);
            		}
            		else {
HXLINE(  92)			_hx_tmp = true;
            		}
HXDLIN(  92)		if (_hx_tmp) {
HXLINE(  94)			::flixel::util::FlxDestroyUtil_obj::dispose(this->_pixels);
HXLINE(  95)			int bitmapData1 = bitmapData->width;
HXDLIN(  95)			int bitmapData2 = bitmapData->height;
HXDLIN(  95)			this->_pixels =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,bitmapData1,bitmapData2,true,::flixel::util::_FlxColor::FlxColor_Impl__obj::fromHSB(( (Float)(this->_hue) ),( (Float)(1) ),this->brightness,this->alpha));
            		}
            		else {
HXLINE(  99)			 ::openfl::display::BitmapData _hx_tmp = this->_pixels;
HXDLIN(  99)			 ::openfl::geom::Rectangle _hx_tmp1 = this->_pixels->rect;
HXDLIN(  99)			_hx_tmp->fillRect(_hx_tmp1,::flixel::util::_FlxColor::FlxColor_Impl__obj::fromHSB(( (Float)(this->_hue) ),( (Float)(1) ),this->brightness,this->alpha));
            		}
HXLINE( 102)		bitmapData->copyPixels(this->_pixels,this->_pixels->rect,this->_flashPoint,bitmapData,null(),true);
HXLINE( 104)		return bitmapData;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxRainbowEffect_obj,apply,return )


::hx::ObjectPtr< FlxRainbowEffect_obj > FlxRainbowEffect_obj::__new(::hx::Null< Float >  __o_Alpha,::hx::Null< Float >  __o_Brightness,::hx::Null< Float >  __o_Speed,::hx::Null< int >  __o_StartHue) {
	::hx::ObjectPtr< FlxRainbowEffect_obj > __this = new FlxRainbowEffect_obj();
	__this->__construct(__o_Alpha,__o_Brightness,__o_Speed,__o_StartHue);
	return __this;
}

::hx::ObjectPtr< FlxRainbowEffect_obj > FlxRainbowEffect_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_Alpha,::hx::Null< Float >  __o_Brightness,::hx::Null< Float >  __o_Speed,::hx::Null< int >  __o_StartHue) {
	FlxRainbowEffect_obj *__this = (FlxRainbowEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxRainbowEffect_obj), true, "flixel.addons.effects.chainable.FlxRainbowEffect"));
	*(void **)__this = FlxRainbowEffect_obj::_hx_vtable;
	__this->__construct(__o_Alpha,__o_Brightness,__o_Speed,__o_StartHue);
	return __this;
}

FlxRainbowEffect_obj::FlxRainbowEffect_obj()
{
}

void FlxRainbowEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxRainbowEffect);
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(brightness,"brightness");
	HX_MARK_MEMBER_NAME(_hue,"_hue");
	HX_MARK_MEMBER_NAME(_time,"_time");
	HX_MARK_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_MARK_MEMBER_NAME(_pixels,"_pixels");
	HX_MARK_END_CLASS();
}

void FlxRainbowEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(brightness,"brightness");
	HX_VISIT_MEMBER_NAME(_hue,"_hue");
	HX_VISIT_MEMBER_NAME(_time,"_time");
	HX_VISIT_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_VISIT_MEMBER_NAME(_pixels,"_pixels");
}

::hx::Val FlxRainbowEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_hue") ) { return ::hx::Val( _hue ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { return ::hx::Val( speed ); }
		if (HX_FIELD_EQ(inName,"alpha") ) { return ::hx::Val( alpha ); }
		if (HX_FIELD_EQ(inName,"_time") ) { return ::hx::Val( _time ); }
		if (HX_FIELD_EQ(inName,"apply") ) { return ::hx::Val( apply_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return ::hx::Val( active ); }
		if (HX_FIELD_EQ(inName,"offset") ) { return ::hx::Val( offset ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_pixels") ) { return ::hx::Val( _pixels ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"brightness") ) { return ::hx::Val( brightness ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { return ::hx::Val( _flashPoint ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxRainbowEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_hue") ) { _hue=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { alpha=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_time") ) { _time=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_pixels") ) { _pixels=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"brightness") ) { brightness=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { _flashPoint=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxRainbowEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("active",c6,41,46,16));
	outFields->push(HX_("offset",93,97,3f,60));
	outFields->push(HX_("speed",87,97,69,81));
	outFields->push(HX_("alpha",5e,a7,96,21));
	outFields->push(HX_("brightness",d1,8d,71,65));
	outFields->push(HX_("_hue",b9,95,1a,3f));
	outFields->push(HX_("_time",ec,e7,0d,00));
	outFields->push(HX_("_flashPoint",9f,1d,2a,b7));
	outFields->push(HX_("_pixels",cc,00,21,fb));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxRainbowEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(FlxRainbowEffect_obj,active),HX_("active",c6,41,46,16)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxRainbowEffect_obj,offset),HX_("offset",93,97,3f,60)},
	{::hx::fsFloat,(int)offsetof(FlxRainbowEffect_obj,speed),HX_("speed",87,97,69,81)},
	{::hx::fsFloat,(int)offsetof(FlxRainbowEffect_obj,alpha),HX_("alpha",5e,a7,96,21)},
	{::hx::fsFloat,(int)offsetof(FlxRainbowEffect_obj,brightness),HX_("brightness",d1,8d,71,65)},
	{::hx::fsInt,(int)offsetof(FlxRainbowEffect_obj,_hue),HX_("_hue",b9,95,1a,3f)},
	{::hx::fsFloat,(int)offsetof(FlxRainbowEffect_obj,_time),HX_("_time",ec,e7,0d,00)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(FlxRainbowEffect_obj,_flashPoint),HX_("_flashPoint",9f,1d,2a,b7)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(FlxRainbowEffect_obj,_pixels),HX_("_pixels",cc,00,21,fb)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxRainbowEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxRainbowEffect_obj_sMemberFields[] = {
	HX_("active",c6,41,46,16),
	HX_("offset",93,97,3f,60),
	HX_("speed",87,97,69,81),
	HX_("alpha",5e,a7,96,21),
	HX_("brightness",d1,8d,71,65),
	HX_("_hue",b9,95,1a,3f),
	HX_("_time",ec,e7,0d,00),
	HX_("_flashPoint",9f,1d,2a,b7),
	HX_("_pixels",cc,00,21,fb),
	HX_("destroy",fa,2c,86,24),
	HX_("update",09,86,05,87),
	HX_("apply",6e,85,3b,24),
	::String(null()) };

::hx::Class FlxRainbowEffect_obj::__mClass;

void FlxRainbowEffect_obj::__register()
{
	FlxRainbowEffect_obj _hx_dummy;
	FlxRainbowEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.effects.chainable.FlxRainbowEffect",9d,51,34,0f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxRainbowEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxRainbowEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxRainbowEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxRainbowEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace effects
} // end namespace chainable
