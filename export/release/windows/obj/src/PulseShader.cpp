#include <hxcpp.h>

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

HX_DEFINE_STACK_FRAME(_hx_pos_6524c27d1753b463_330_new,"PulseShader","new",0x6ef8e2f0,"PulseShader.new","Shaders.hx",330,0x469785f0)

void PulseShader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_6524c27d1753b463_330_new)
HXLINE( 182)		if (::hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 184)			this->_hx___glFragmentSource = HX_("\r\n    varying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\t\tuniform sampler2D bitmap;\n\n\t\tuniform bool hasTransform;\n\t\tuniform bool hasColorTransform;\n\n\t\tvec4 flixel_texture2D(sampler2D bitmap, vec2 coord)\n\t\t{\n\t\t\tvec4 color = texture2D(bitmap, coord);\n\t\t\tif (!hasTransform)\n\t\t\t{\n\t\t\t\treturn color;\n\t\t\t}\n\n\t\t\tif (color.a == 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t\t}\n\n\t\t\tif (!hasColorTransform)\n\t\t\t{\n\t\t\t\treturn color * openfl_Alphav;\n\t\t\t}\n\n\t\t\tcolor = vec4(color.rgb / color.a, color.a);\n\n\t\t\tmat4 colorMultiplier = mat4(0);\n\t\t\tcolorMultiplier[0][0] = openfl_ColorMultiplierv.x;\n\t\t\tcolorMultiplier[1][1] = openfl_ColorMultiplierv.y;\n\t\t\tcolorMultiplier[2][2] = openfl_ColorMultiplierv.z;\n\t\t\tcolorMultiplier[3][3] = openfl_ColorMultiplierv.w;\n\n\t\t\tcolor = clamp(openfl_ColorOffsetv + (color * colorMultiplier), 0.0, 1.0);\n\n\t\t\tif (color.a > 0.0)\n\t\t\t{\n\t\t\t\treturn vec4(color.rgb * color.a * openfl_Alphav, color.a * openfl_Alphav);\n\t\t\t}\n\t\t\treturn vec4(0.0, 0.0, 0.0, 0.0);\n\t\t}\n\t\n\r\n    uniform float uampmul;\r\n\r\n    //modified version of the wave shader to create weird garbled corruption like messes\r\n    uniform float uTime;\r\n    \r\n    /**\r\n     * How fast the waves move over time\r\n     */\r\n    uniform float uSpeed;\r\n    \r\n    /**\r\n     * Number of waves over time\r\n     */\r\n    uniform float uFrequency;\r\n\r\n    uniform bool uEnabled;\r\n    \r\n    /**\r\n     * How much the pixels are going to stretch over the waves\r\n     */\r\n    uniform float uWaveAmplitude;\r\n\r\n    vec4 sineWave(vec4 pt, vec2 pos)\r\n    {\r\n        if (uampmul > 0.0)\r\n        {\r\n            float offsetX = sin(pt.y * uFrequency + uTime * uSpeed);\r\n            float offsetY = sin(pt.x * (uFrequency * 2) - (uTime / 2) * uSpeed);\r\n            float offsetZ = sin(pt.z * (uFrequency / 2) + (uTime / 3) * uSpeed);\r\n            pt.x = mix(pt.x,sin(pt.x / 2 * pt.y + (5 * offsetX) * pt.z),uWaveAmplitude * uampmul);\r\n            pt.y = mix(pt.y,sin(pt.y / 3 * pt.z + (2 * offsetZ) - pt.x),uWaveAmplitude * uampmul);\r\n            pt.z = mix(pt.z,sin(pt.z / 6 * (pt.x * offsetY) - (50 * offsetZ) * (pt.z * offsetX)),uWaveAmplitude * uampmul);\r\n        }\r\n\r\n\r\n        return vec4(pt.x, pt.y, pt.z, pt.w);\r\n    }\r\n\r\n    void main()\r\n    {\r\n        vec2 uv = openfl_TextureCoordv;\r\n        gl_FragColor = sineWave(texture2D(bitmap, uv),uv);\r\n    }",69,02,f2,5b);
            		}
HXLINE( 174)		if (::hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 176)			this->_hx___glVertexSource = HX_("\n\t\tattribute float openfl_Alpha;\n\t\tattribute vec4 openfl_ColorMultiplier;\n\t\tattribute vec4 openfl_ColorOffset;\n\t\tattribute vec4 openfl_Position;\n\t\tattribute vec2 openfl_TextureCoord;\n\n\t\tvarying float openfl_Alphav;\n\t\tvarying vec4 openfl_ColorMultiplierv;\n\t\tvarying vec4 openfl_ColorOffsetv;\n\t\tvarying vec2 openfl_TextureCoordv;\n\n\t\tuniform mat4 openfl_Matrix;\n\t\tuniform bool openfl_HasColorTransform;\n\t\tuniform vec2 openfl_TextureSize;\n\n\t\t\n\t\tattribute float alpha;\n\t\tattribute vec4 colorMultiplier;\n\t\tattribute vec4 colorOffset;\n\t\tuniform bool hasColorTransform;\n\t\t\n\t\tvoid main(void)\n\t\t{\n\t\t\topenfl_Alphav = openfl_Alpha;\n\t\topenfl_TextureCoordv = openfl_TextureCoord;\n\n\t\tif (openfl_HasColorTransform) {\n\n\t\t\topenfl_ColorMultiplierv = openfl_ColorMultiplier;\n\t\t\topenfl_ColorOffsetv = openfl_ColorOffset / 255.0;\n\n\t\t}\n\n\t\tgl_Position = openfl_Matrix * openfl_Position;\n\n\t\t\t\n\t\t\topenfl_Alphav = openfl_Alpha * alpha;\n\t\t\t\n\t\t\tif (hasColorTransform)\n\t\t\t{\n\t\t\t\topenfl_ColorOffsetv = colorOffset / 255.0;\n\t\t\t\topenfl_ColorMultiplierv = colorMultiplier;\n\t\t\t}\n\t\t}",f3,1e,fa,79);
            		}
HXLINE( 331)		super::__construct();
HXLINE( 281)		this->_hx___isGenerated = true;
HXDLIN( 281)		this->_hx___initGL();
            	}

Dynamic PulseShader_obj::__CreateEmpty() { return new PulseShader_obj; }

void *PulseShader_obj::_hx_vtable = 0;

Dynamic PulseShader_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PulseShader_obj > _hx_result = new PulseShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PulseShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1efca5b6) {
		if (inClassId<=(int)0x04f93fcd) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x04f93fcd;
		} else {
			return inClassId==(int)0x1efca5b6;
		}
	} else {
		return inClassId==(int)0x43b4303e || inClassId==(int)0x78d8d737;
	}
}


::hx::ObjectPtr< PulseShader_obj > PulseShader_obj::__new() {
	::hx::ObjectPtr< PulseShader_obj > __this = new PulseShader_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< PulseShader_obj > PulseShader_obj::__alloc(::hx::Ctx *_hx_ctx) {
	PulseShader_obj *__this = (PulseShader_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PulseShader_obj), true, "PulseShader"));
	*(void **)__this = PulseShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

PulseShader_obj::PulseShader_obj()
{
}

void PulseShader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PulseShader);
	HX_MARK_MEMBER_NAME(uampmul,"uampmul");
	HX_MARK_MEMBER_NAME(uTime,"uTime");
	HX_MARK_MEMBER_NAME(uSpeed,"uSpeed");
	HX_MARK_MEMBER_NAME(uFrequency,"uFrequency");
	HX_MARK_MEMBER_NAME(uEnabled,"uEnabled");
	HX_MARK_MEMBER_NAME(uWaveAmplitude,"uWaveAmplitude");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PulseShader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(uampmul,"uampmul");
	HX_VISIT_MEMBER_NAME(uTime,"uTime");
	HX_VISIT_MEMBER_NAME(uSpeed,"uSpeed");
	HX_VISIT_MEMBER_NAME(uFrequency,"uFrequency");
	HX_VISIT_MEMBER_NAME(uEnabled,"uEnabled");
	HX_VISIT_MEMBER_NAME(uWaveAmplitude,"uWaveAmplitude");
	 ::flixel::graphics::tile::FlxGraphicsShader_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PulseShader_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"uTime") ) { return ::hx::Val( uTime ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"uSpeed") ) { return ::hx::Val( uSpeed ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"uampmul") ) { return ::hx::Val( uampmul ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"uEnabled") ) { return ::hx::Val( uEnabled ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"uFrequency") ) { return ::hx::Val( uFrequency ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"uWaveAmplitude") ) { return ::hx::Val( uWaveAmplitude ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val PulseShader_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"uTime") ) { uTime=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"uSpeed") ) { uSpeed=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"uampmul") ) { uampmul=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"uEnabled") ) { uEnabled=inValue.Cast<  ::openfl::display::ShaderParameter_Bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"uFrequency") ) { uFrequency=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"uWaveAmplitude") ) { uWaveAmplitude=inValue.Cast<  ::openfl::display::ShaderParameter_Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PulseShader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("uampmul",b5,82,f5,d6));
	outFields->push(HX_("uTime",22,d7,b7,95));
	outFields->push(HX_("uSpeed",d2,3e,58,dc));
	outFields->push(HX_("uFrequency",67,2b,c6,3f));
	outFields->push(HX_("uEnabled",8c,54,90,6f));
	outFields->push(HX_("uWaveAmplitude",95,fa,de,e6));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PulseShader_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(PulseShader_obj,uampmul),HX_("uampmul",b5,82,f5,d6)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(PulseShader_obj,uTime),HX_("uTime",22,d7,b7,95)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(PulseShader_obj,uSpeed),HX_("uSpeed",d2,3e,58,dc)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(PulseShader_obj,uFrequency),HX_("uFrequency",67,2b,c6,3f)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Bool */ ,(int)offsetof(PulseShader_obj,uEnabled),HX_("uEnabled",8c,54,90,6f)},
	{::hx::fsObject /*  ::openfl::display::ShaderParameter_Float */ ,(int)offsetof(PulseShader_obj,uWaveAmplitude),HX_("uWaveAmplitude",95,fa,de,e6)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *PulseShader_obj_sStaticStorageInfo = 0;
#endif

static ::String PulseShader_obj_sMemberFields[] = {
	HX_("uampmul",b5,82,f5,d6),
	HX_("uTime",22,d7,b7,95),
	HX_("uSpeed",d2,3e,58,dc),
	HX_("uFrequency",67,2b,c6,3f),
	HX_("uEnabled",8c,54,90,6f),
	HX_("uWaveAmplitude",95,fa,de,e6),
	::String(null()) };

::hx::Class PulseShader_obj::__mClass;

void PulseShader_obj::__register()
{
	PulseShader_obj _hx_dummy;
	PulseShader_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("PulseShader",fe,ea,b8,90);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PulseShader_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PulseShader_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PulseShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PulseShader_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

