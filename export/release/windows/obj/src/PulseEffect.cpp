#include <hxcpp.h>

#ifndef INCLUDED_PulseEffect
#include <PulseEffect.h>
#endif
#ifndef INCLUDED_PulseShader
#include <PulseShader.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Bool
#include <openfl/display/ShaderParameter_Bool.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_85d3da12c982b0a9_93_new,"PulseEffect","new",0xe6aba45c,"PulseEffect.new","Shaders.hx",93,0x469785f0)
static const Float _hx_array_data_d43b866a_1[] = {
	(Float)0,
};
static const Float _hx_array_data_d43b866a_2[] = {
	(Float)0,
};
static const bool _hx_array_data_d43b866a_3[] = {
	0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_85d3da12c982b0a9_110_update,"PulseEffect","update",0x0fa5578d,"PulseEffect.update","Shaders.hx",110,0x469785f0)
HX_LOCAL_STACK_FRAME(_hx_pos_85d3da12c982b0a9_116_set_waveSpeed,"PulseEffect","set_waveSpeed",0x68b51fed,"PulseEffect.set_waveSpeed","Shaders.hx",116,0x469785f0)
HX_LOCAL_STACK_FRAME(_hx_pos_85d3da12c982b0a9_123_set_Enabled,"PulseEffect","set_Enabled",0x106fc380,"PulseEffect.set_Enabled","Shaders.hx",123,0x469785f0)
HX_LOCAL_STACK_FRAME(_hx_pos_85d3da12c982b0a9_130_set_waveFrequency,"PulseEffect","set_waveFrequency",0xde793602,"PulseEffect.set_waveFrequency","Shaders.hx",130,0x469785f0)
HX_LOCAL_STACK_FRAME(_hx_pos_85d3da12c982b0a9_137_set_waveAmplitude,"PulseEffect","set_waveAmplitude",0x8c89c8a9,"PulseEffect.set_waveAmplitude","Shaders.hx",137,0x469785f0)

void PulseEffect_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_85d3da12c982b0a9_93_new)
HXLINE( 100)		this->Enabled = false;
HXLINE(  99)		this->waveAmplitude = ((Float)0);
HXLINE(  98)		this->waveFrequency = ((Float)0);
HXLINE(  97)		this->waveSpeed = ((Float)0);
HXLINE(  95)		this->shader =  ::PulseShader_obj::__alloc( HX_CTX );
HXLINE( 104)		this->shader->uTime->value = ::Array_obj< Float >::fromData( _hx_array_data_d43b866a_1,1);
HXLINE( 105)		this->shader->uampmul->value = ::Array_obj< Float >::fromData( _hx_array_data_d43b866a_2,1);
HXLINE( 106)		this->shader->uEnabled->value = ::Array_obj< bool >::fromData( _hx_array_data_d43b866a_3,1);
            	}

Dynamic PulseEffect_obj::__CreateEmpty() { return new PulseEffect_obj; }

void *PulseEffect_obj::_hx_vtable = 0;

Dynamic PulseEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PulseEffect_obj > _hx_result = new PulseEffect_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PulseEffect_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x07f907de;
}

void PulseEffect_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_85d3da12c982b0a9_110_update)
HXLINE( 111)		::Array< Float > base = this->shader->uTime->value;
HXDLIN( 111)		int _hx_tmp = 0;
HXDLIN( 111)		base[_hx_tmp] = (base->__get(_hx_tmp) + elapsed);
            	}


HX_DEFINE_DYNAMIC_FUNC1(PulseEffect_obj,update,(void))

Float PulseEffect_obj::set_waveSpeed(Float v){
            	HX_STACKFRAME(&_hx_pos_85d3da12c982b0a9_116_set_waveSpeed)
HXLINE( 117)		this->waveSpeed = v;
HXLINE( 118)		this->shader->uSpeed->value = ::Array_obj< Float >::__new(1)->init(0,this->waveSpeed);
HXLINE( 119)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PulseEffect_obj,set_waveSpeed,return )

bool PulseEffect_obj::set_Enabled(bool v){
            	HX_STACKFRAME(&_hx_pos_85d3da12c982b0a9_123_set_Enabled)
HXLINE( 124)		this->Enabled = v;
HXLINE( 125)		this->shader->uEnabled->value = ::Array_obj< bool >::__new(1)->init(0,this->Enabled);
HXLINE( 126)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PulseEffect_obj,set_Enabled,return )

Float PulseEffect_obj::set_waveFrequency(Float v){
            	HX_STACKFRAME(&_hx_pos_85d3da12c982b0a9_130_set_waveFrequency)
HXLINE( 131)		this->waveFrequency = v;
HXLINE( 132)		this->shader->uFrequency->value = ::Array_obj< Float >::__new(1)->init(0,this->waveFrequency);
HXLINE( 133)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PulseEffect_obj,set_waveFrequency,return )

Float PulseEffect_obj::set_waveAmplitude(Float v){
            	HX_STACKFRAME(&_hx_pos_85d3da12c982b0a9_137_set_waveAmplitude)
HXLINE( 138)		this->waveAmplitude = v;
HXLINE( 139)		this->shader->uWaveAmplitude->value = ::Array_obj< Float >::__new(1)->init(0,this->waveAmplitude);
HXLINE( 140)		return v;
            	}


HX_DEFINE_DYNAMIC_FUNC1(PulseEffect_obj,set_waveAmplitude,return )


::hx::ObjectPtr< PulseEffect_obj > PulseEffect_obj::__new() {
	::hx::ObjectPtr< PulseEffect_obj > __this = new PulseEffect_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< PulseEffect_obj > PulseEffect_obj::__alloc(::hx::Ctx *_hx_ctx) {
	PulseEffect_obj *__this = (PulseEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PulseEffect_obj), true, "PulseEffect"));
	*(void **)__this = PulseEffect_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

PulseEffect_obj::PulseEffect_obj()
{
}

void PulseEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PulseEffect);
	HX_MARK_MEMBER_NAME(shader,"shader");
	HX_MARK_MEMBER_NAME(waveSpeed,"waveSpeed");
	HX_MARK_MEMBER_NAME(waveFrequency,"waveFrequency");
	HX_MARK_MEMBER_NAME(waveAmplitude,"waveAmplitude");
	HX_MARK_MEMBER_NAME(Enabled,"Enabled");
	HX_MARK_END_CLASS();
}

void PulseEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(shader,"shader");
	HX_VISIT_MEMBER_NAME(waveSpeed,"waveSpeed");
	HX_VISIT_MEMBER_NAME(waveFrequency,"waveFrequency");
	HX_VISIT_MEMBER_NAME(waveAmplitude,"waveAmplitude");
	HX_VISIT_MEMBER_NAME(Enabled,"Enabled");
}

::hx::Val PulseEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { return ::hx::Val( shader ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"Enabled") ) { return ::hx::Val( Enabled ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"waveSpeed") ) { return ::hx::Val( waveSpeed ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_Enabled") ) { return ::hx::Val( set_Enabled_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"waveFrequency") ) { return ::hx::Val( waveFrequency ); }
		if (HX_FIELD_EQ(inName,"waveAmplitude") ) { return ::hx::Val( waveAmplitude ); }
		if (HX_FIELD_EQ(inName,"set_waveSpeed") ) { return ::hx::Val( set_waveSpeed_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"set_waveFrequency") ) { return ::hx::Val( set_waveFrequency_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_waveAmplitude") ) { return ::hx::Val( set_waveAmplitude_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PulseEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shader") ) { shader=inValue.Cast<  ::PulseShader >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"Enabled") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_Enabled(inValue.Cast< bool >()) );Enabled=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"waveSpeed") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_waveSpeed(inValue.Cast< Float >()) );waveSpeed=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"waveFrequency") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_waveFrequency(inValue.Cast< Float >()) );waveFrequency=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"waveAmplitude") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_waveAmplitude(inValue.Cast< Float >()) );waveAmplitude=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PulseEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("shader",25,bf,20,1d));
	outFields->push(HX_("waveSpeed",0e,43,dc,5b));
	outFields->push(HX_("waveFrequency",a3,fd,a6,f7));
	outFields->push(HX_("waveAmplitude",4a,90,b7,a5));
	outFields->push(HX_("Enabled",61,2c,82,4b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PulseEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::PulseShader */ ,(int)offsetof(PulseEffect_obj,shader),HX_("shader",25,bf,20,1d)},
	{::hx::fsFloat,(int)offsetof(PulseEffect_obj,waveSpeed),HX_("waveSpeed",0e,43,dc,5b)},
	{::hx::fsFloat,(int)offsetof(PulseEffect_obj,waveFrequency),HX_("waveFrequency",a3,fd,a6,f7)},
	{::hx::fsFloat,(int)offsetof(PulseEffect_obj,waveAmplitude),HX_("waveAmplitude",4a,90,b7,a5)},
	{::hx::fsBool,(int)offsetof(PulseEffect_obj,Enabled),HX_("Enabled",61,2c,82,4b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PulseEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String PulseEffect_obj_sMemberFields[] = {
	HX_("shader",25,bf,20,1d),
	HX_("waveSpeed",0e,43,dc,5b),
	HX_("waveFrequency",a3,fd,a6,f7),
	HX_("waveAmplitude",4a,90,b7,a5),
	HX_("Enabled",61,2c,82,4b),
	HX_("update",09,86,05,87),
	HX_("set_waveSpeed",f1,f8,45,62),
	HX_("set_Enabled",84,93,e9,db),
	HX_("set_waveFrequency",06,e1,84,21),
	HX_("set_waveAmplitude",ad,73,95,cf),
	::String(null()) };

::hx::Class PulseEffect_obj::__mClass;

void PulseEffect_obj::__register()
{
	PulseEffect_obj _hx_dummy;
	PulseEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("PulseEffect",6a,86,3b,d4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PulseEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PulseEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PulseEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PulseEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

