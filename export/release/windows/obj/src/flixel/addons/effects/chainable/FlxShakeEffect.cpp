#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_addons_effects_chainable_FlxShakeEffect
#include <flixel/addons/effects/chainable/FlxShakeEffect.h>
#endif
#ifndef INCLUDED_flixel_addons_effects_chainable_IFlxEffect
#include <flixel/addons/effects/chainable/IFlxEffect.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_c9ea247eb8adb3ab_13_new,"flixel.addons.effects.chainable.FlxShakeEffect","new",0xedc35d1f,"flixel.addons.effects.chainable.FlxShakeEffect.new","flixel/addons/effects/chainable/FlxShakeEffect.hx",13,0x7526d78f)
HX_LOCAL_STACK_FRAME(_hx_pos_c9ea247eb8adb3ab_60_destroy,"flixel.addons.effects.chainable.FlxShakeEffect","destroy",0x08348539,"flixel.addons.effects.chainable.FlxShakeEffect.destroy","flixel/addons/effects/chainable/FlxShakeEffect.hx",60,0x7526d78f)
HX_LOCAL_STACK_FRAME(_hx_pos_c9ea247eb8adb3ab_66_update,"flixel.addons.effects.chainable.FlxShakeEffect","update",0x71153aaa,"flixel.addons.effects.chainable.FlxShakeEffect.update","flixel/addons/effects/chainable/FlxShakeEffect.hx",66,0x7526d78f)
HX_LOCAL_STACK_FRAME(_hx_pos_c9ea247eb8adb3ab_95_apply,"flixel.addons.effects.chainable.FlxShakeEffect","apply",0xf636ffed,"flixel.addons.effects.chainable.FlxShakeEffect.apply","flixel/addons/effects/chainable/FlxShakeEffect.hx",95,0x7526d78f)
HX_LOCAL_STACK_FRAME(_hx_pos_c9ea247eb8adb3ab_104_start,"flixel.addons.effects.chainable.FlxShakeEffect","start",0x5606eee1,"flixel.addons.effects.chainable.FlxShakeEffect.start","flixel/addons/effects/chainable/FlxShakeEffect.hx",104,0x7526d78f)
HX_LOCAL_STACK_FRAME(_hx_pos_c9ea247eb8adb3ab_122_reset,"flixel.addons.effects.chainable.FlxShakeEffect","reset",0xb8c3c44e,"flixel.addons.effects.chainable.FlxShakeEffect.reset","flixel/addons/effects/chainable/FlxShakeEffect.hx",122,0x7526d78f)
namespace flixel{
namespace addons{
namespace effects{
namespace chainable{

void FlxShakeEffect_obj::__construct(::hx::Null< Float >  __o_Intensity,::hx::Null< Float >  __o_Duration, ::Dynamic OnComplete, ::flixel::util::FlxAxes Axes){
            		Float Intensity = __o_Intensity.Default(5);
            		Float Duration = __o_Duration.Default(((Float)0.5));
            	HX_STACKFRAME(&_hx_pos_c9ea247eb8adb3ab_13_new)
HXLINE(  41)		this->_time = ((Float)0);
HXLINE(  36)		this->_duration = ((Float)0);
HXLINE(  31)		this->axes = ::flixel::util::FlxAxes_obj::XY_dyn();
HXLINE(  21)		this->intensity = ((Float)0);
HXLINE(  16)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  16)		point->_inPool = false;
HXDLIN(  16)		this->offset = point;
HXLINE(  15)		this->active = true;
HXLINE(  53)		this->intensity = Intensity;
HXLINE(  54)		this->_duration = Duration;
HXLINE(  55)		this->onComplete = OnComplete;
HXLINE(  56)		this->axes = Axes;
            	}

Dynamic FlxShakeEffect_obj::__CreateEmpty() { return new FlxShakeEffect_obj; }

void *FlxShakeEffect_obj::_hx_vtable = 0;

Dynamic FlxShakeEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxShakeEffect_obj > _hx_result = new FlxShakeEffect_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool FlxShakeEffect_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2f941699;
}

static ::flixel::addons::effects::chainable::IFlxEffect_obj _hx_flixel_addons_effects_chainable_FlxShakeEffect__hx_flixel_addons_effects_chainable_IFlxEffect= {
	( void (::hx::Object::*)())&::flixel::addons::effects::chainable::FlxShakeEffect_obj::destroy,
	( void (::hx::Object::*)(Float))&::flixel::addons::effects::chainable::FlxShakeEffect_obj::update,
	(  ::openfl::display::BitmapData (::hx::Object::*)( ::openfl::display::BitmapData))&::flixel::addons::effects::chainable::FlxShakeEffect_obj::apply,
};

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_addons_effects_chainable_FlxShakeEffect__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::addons::effects::chainable::FlxShakeEffect_obj::destroy,
};

void *FlxShakeEffect_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x4a1f9502: return &_hx_flixel_addons_effects_chainable_FlxShakeEffect__hx_flixel_addons_effects_chainable_IFlxEffect;
		case (int)0xd4fe2fcd: return &_hx_flixel_addons_effects_chainable_FlxShakeEffect__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxShakeEffect_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_c9ea247eb8adb3ab_60_destroy)
HXLINE(  61)		this->offset = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->offset)) );
HXLINE(  62)		this->onComplete = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxShakeEffect_obj,destroy,(void))

void FlxShakeEffect_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_c9ea247eb8adb3ab_66_update)
HXLINE(  67)		if ((this->_time <= 0)) {
HXLINE(  68)			return;
            		}
HXLINE(  70)		 ::flixel::addons::effects::chainable::FlxShakeEffect _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  70)		_hx_tmp->_time = (_hx_tmp->_time - elapsed);
HXLINE(  72)		if ((this->_time > 0)) {
HXLINE(  74)			if (::hx::IsPointerNotEq( this->axes,::flixel::util::FlxAxes_obj::Y_dyn() )) {
HXLINE(  76)				 ::flixel::math::FlxPoint _hx_tmp = this->offset;
HXDLIN(  76)				_hx_tmp->set_x(::flixel::FlxG_obj::random->_hx_float(-(this->intensity),this->intensity,null()));
            			}
HXLINE(  78)			if (::hx::IsPointerNotEq( this->axes,::flixel::util::FlxAxes_obj::X_dyn() )) {
HXLINE(  80)				 ::flixel::math::FlxPoint _hx_tmp = this->offset;
HXDLIN(  80)				_hx_tmp->set_y(::flixel::FlxG_obj::random->_hx_float(-(this->intensity),this->intensity,null()));
            			}
            		}
            		else {
HXLINE(  85)			this->offset->set(0,0);
HXLINE(  86)			if (::hx::IsNotNull( this->onComplete )) {
HXLINE(  88)				this->onComplete();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxShakeEffect_obj,update,(void))

 ::openfl::display::BitmapData FlxShakeEffect_obj::apply( ::openfl::display::BitmapData bitmapData){
            	HX_STACKFRAME(&_hx_pos_c9ea247eb8adb3ab_95_apply)
HXDLIN(  95)		return bitmapData;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxShakeEffect_obj,apply,return )

void FlxShakeEffect_obj::start(::hx::Null< bool >  __o_Force){
            		bool Force = __o_Force.Default(false);
            	HX_STACKFRAME(&_hx_pos_c9ea247eb8adb3ab_104_start)
HXLINE( 105)		bool _hx_tmp;
HXDLIN( 105)		if (!(Force)) {
HXLINE( 105)			_hx_tmp = (this->_time > 0);
            		}
            		else {
HXLINE( 105)			_hx_tmp = false;
            		}
HXDLIN( 105)		if (_hx_tmp) {
HXLINE( 107)			return;
            		}
HXLINE( 110)		this->reset(this->intensity,this->_duration,this->onComplete,this->axes);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxShakeEffect_obj,start,(void))

void FlxShakeEffect_obj::reset(::hx::Null< Float >  __o_Intensity,::hx::Null< Float >  __o_Duration, ::Dynamic OnComplete, ::flixel::util::FlxAxes Axes){
            		Float Intensity = __o_Intensity.Default(5);
            		Float Duration = __o_Duration.Default(((Float)0.5));
            	HX_STACKFRAME(&_hx_pos_c9ea247eb8adb3ab_122_reset)
HXLINE( 123)		if (::hx::IsNull( Axes )) {
HXLINE( 124)			Axes = ::flixel::util::FlxAxes_obj::XY_dyn();
            		}
HXLINE( 126)		this->intensity = Intensity;
HXLINE( 127)		this->_duration = Duration;
HXLINE( 128)		this->_time = Duration;
HXLINE( 129)		this->onComplete = OnComplete;
HXLINE( 130)		this->axes = Axes;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxShakeEffect_obj,reset,(void))


::hx::ObjectPtr< FlxShakeEffect_obj > FlxShakeEffect_obj::__new(::hx::Null< Float >  __o_Intensity,::hx::Null< Float >  __o_Duration, ::Dynamic OnComplete, ::flixel::util::FlxAxes Axes) {
	::hx::ObjectPtr< FlxShakeEffect_obj > __this = new FlxShakeEffect_obj();
	__this->__construct(__o_Intensity,__o_Duration,OnComplete,Axes);
	return __this;
}

::hx::ObjectPtr< FlxShakeEffect_obj > FlxShakeEffect_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_Intensity,::hx::Null< Float >  __o_Duration, ::Dynamic OnComplete, ::flixel::util::FlxAxes Axes) {
	FlxShakeEffect_obj *__this = (FlxShakeEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxShakeEffect_obj), true, "flixel.addons.effects.chainable.FlxShakeEffect"));
	*(void **)__this = FlxShakeEffect_obj::_hx_vtable;
	__this->__construct(__o_Intensity,__o_Duration,OnComplete,Axes);
	return __this;
}

FlxShakeEffect_obj::FlxShakeEffect_obj()
{
}

void FlxShakeEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxShakeEffect);
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(intensity,"intensity");
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(axes,"axes");
	HX_MARK_MEMBER_NAME(_duration,"_duration");
	HX_MARK_MEMBER_NAME(_time,"_time");
	HX_MARK_END_CLASS();
}

void FlxShakeEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(intensity,"intensity");
	HX_VISIT_MEMBER_NAME(onComplete,"onComplete");
	HX_VISIT_MEMBER_NAME(axes,"axes");
	HX_VISIT_MEMBER_NAME(_duration,"_duration");
	HX_VISIT_MEMBER_NAME(_time,"_time");
}

::hx::Val FlxShakeEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"axes") ) { return ::hx::Val( axes ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_time") ) { return ::hx::Val( _time ); }
		if (HX_FIELD_EQ(inName,"apply") ) { return ::hx::Val( apply_dyn() ); }
		if (HX_FIELD_EQ(inName,"start") ) { return ::hx::Val( start_dyn() ); }
		if (HX_FIELD_EQ(inName,"reset") ) { return ::hx::Val( reset_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return ::hx::Val( active ); }
		if (HX_FIELD_EQ(inName,"offset") ) { return ::hx::Val( offset ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"intensity") ) { return ::hx::Val( intensity ); }
		if (HX_FIELD_EQ(inName,"_duration") ) { return ::hx::Val( _duration ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { return ::hx::Val( onComplete ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxShakeEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"axes") ) { axes=inValue.Cast<  ::flixel::util::FlxAxes >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_time") ) { _time=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"intensity") ) { intensity=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_duration") ) { _duration=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxShakeEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("active",c6,41,46,16));
	outFields->push(HX_("offset",93,97,3f,60));
	outFields->push(HX_("intensity",b3,c6,dd,f4));
	outFields->push(HX_("axes",25,19,79,40));
	outFields->push(HX_("_duration",b3,06,24,5c));
	outFields->push(HX_("_time",ec,e7,0d,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxShakeEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(FlxShakeEffect_obj,active),HX_("active",c6,41,46,16)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxShakeEffect_obj,offset),HX_("offset",93,97,3f,60)},
	{::hx::fsFloat,(int)offsetof(FlxShakeEffect_obj,intensity),HX_("intensity",b3,c6,dd,f4)},
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(FlxShakeEffect_obj,onComplete),HX_("onComplete",f8,d4,7e,5d)},
	{::hx::fsObject /*  ::flixel::util::FlxAxes */ ,(int)offsetof(FlxShakeEffect_obj,axes),HX_("axes",25,19,79,40)},
	{::hx::fsFloat,(int)offsetof(FlxShakeEffect_obj,_duration),HX_("_duration",b3,06,24,5c)},
	{::hx::fsFloat,(int)offsetof(FlxShakeEffect_obj,_time),HX_("_time",ec,e7,0d,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxShakeEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxShakeEffect_obj_sMemberFields[] = {
	HX_("active",c6,41,46,16),
	HX_("offset",93,97,3f,60),
	HX_("intensity",b3,c6,dd,f4),
	HX_("onComplete",f8,d4,7e,5d),
	HX_("axes",25,19,79,40),
	HX_("_duration",b3,06,24,5c),
	HX_("_time",ec,e7,0d,00),
	HX_("destroy",fa,2c,86,24),
	HX_("update",09,86,05,87),
	HX_("apply",6e,85,3b,24),
	HX_("start",62,74,0b,84),
	HX_("reset",cf,49,c8,e6),
	::String(null()) };

::hx::Class FlxShakeEffect_obj::__mClass;

void FlxShakeEffect_obj::__register()
{
	FlxShakeEffect_obj _hx_dummy;
	FlxShakeEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.effects.chainable.FlxShakeEffect",ad,e1,30,32);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxShakeEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxShakeEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxShakeEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxShakeEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace effects
} // end namespace chainable
