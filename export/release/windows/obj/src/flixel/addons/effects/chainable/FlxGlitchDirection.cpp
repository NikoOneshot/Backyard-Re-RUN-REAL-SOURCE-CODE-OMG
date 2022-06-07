#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_effects_chainable_FlxGlitchDirection
#include <flixel/addons/effects/chainable/FlxGlitchDirection.h>
#endif
namespace flixel{
namespace addons{
namespace effects{
namespace chainable{

::flixel::addons::effects::chainable::FlxGlitchDirection FlxGlitchDirection_obj::HORIZONTAL;

::flixel::addons::effects::chainable::FlxGlitchDirection FlxGlitchDirection_obj::VERTICAL;

bool FlxGlitchDirection_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("HORIZONTAL",e4,70,cd,07)) { outValue = FlxGlitchDirection_obj::HORIZONTAL; return true; }
	if (inName==HX_("VERTICAL",76,4c,9b,c3)) { outValue = FlxGlitchDirection_obj::VERTICAL; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FlxGlitchDirection_obj)

int FlxGlitchDirection_obj::__FindIndex(::String inName)
{
	if (inName==HX_("HORIZONTAL",e4,70,cd,07)) return 0;
	if (inName==HX_("VERTICAL",76,4c,9b,c3)) return 1;
	return super::__FindIndex(inName);
}

int FlxGlitchDirection_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("HORIZONTAL",e4,70,cd,07)) return 0;
	if (inName==HX_("VERTICAL",76,4c,9b,c3)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val FlxGlitchDirection_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("HORIZONTAL",e4,70,cd,07)) return HORIZONTAL;
	if (inName==HX_("VERTICAL",76,4c,9b,c3)) return VERTICAL;
	return super::__Field(inName,inCallProp);
}

static ::String FlxGlitchDirection_obj_sStaticFields[] = {
	HX_("HORIZONTAL",e4,70,cd,07),
	HX_("VERTICAL",76,4c,9b,c3),
	::String(null())
};

::hx::Class FlxGlitchDirection_obj::__mClass;

Dynamic __Create_FlxGlitchDirection_obj() { return new FlxGlitchDirection_obj; }

void FlxGlitchDirection_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("flixel.addons.effects.chainable.FlxGlitchDirection",40,f6,23,b8), ::hx::TCanCast< FlxGlitchDirection_obj >,FlxGlitchDirection_obj_sStaticFields,0,
	&__Create_FlxGlitchDirection_obj, &__Create,
	&super::__SGetClass(), &CreateFlxGlitchDirection_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FlxGlitchDirection_obj::__GetStatic;
}

void FlxGlitchDirection_obj::__boot()
{
HORIZONTAL = ::hx::CreateConstEnum< FlxGlitchDirection_obj >(HX_("HORIZONTAL",e4,70,cd,07),0);
VERTICAL = ::hx::CreateConstEnum< FlxGlitchDirection_obj >(HX_("VERTICAL",76,4c,9b,c3),1);
}


} // end namespace flixel
} // end namespace addons
} // end namespace effects
} // end namespace chainable
