#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_effects_chainable_FlxOutlineMode
#include <flixel/addons/effects/chainable/FlxOutlineMode.h>
#endif
namespace flixel{
namespace addons{
namespace effects{
namespace chainable{

::flixel::addons::effects::chainable::FlxOutlineMode FlxOutlineMode_obj::FAST;

::flixel::addons::effects::chainable::FlxOutlineMode FlxOutlineMode_obj::NORMAL;

::flixel::addons::effects::chainable::FlxOutlineMode FlxOutlineMode_obj::PIXEL_BY_PIXEL;

bool FlxOutlineMode_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("FAST",9c,8a,76,2e)) { outValue = FlxOutlineMode_obj::FAST; return true; }
	if (inName==HX_("NORMAL",27,1e,ec,e2)) { outValue = FlxOutlineMode_obj::NORMAL; return true; }
	if (inName==HX_("PIXEL_BY_PIXEL",f7,f6,f0,dd)) { outValue = FlxOutlineMode_obj::PIXEL_BY_PIXEL; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FlxOutlineMode_obj)

int FlxOutlineMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_("FAST",9c,8a,76,2e)) return 0;
	if (inName==HX_("NORMAL",27,1e,ec,e2)) return 1;
	if (inName==HX_("PIXEL_BY_PIXEL",f7,f6,f0,dd)) return 2;
	return super::__FindIndex(inName);
}

int FlxOutlineMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("FAST",9c,8a,76,2e)) return 0;
	if (inName==HX_("NORMAL",27,1e,ec,e2)) return 0;
	if (inName==HX_("PIXEL_BY_PIXEL",f7,f6,f0,dd)) return 0;
	return super::__FindArgCount(inName);
}

::hx::Val FlxOutlineMode_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	if (inName==HX_("FAST",9c,8a,76,2e)) return FAST;
	if (inName==HX_("NORMAL",27,1e,ec,e2)) return NORMAL;
	if (inName==HX_("PIXEL_BY_PIXEL",f7,f6,f0,dd)) return PIXEL_BY_PIXEL;
	return super::__Field(inName,inCallProp);
}

static ::String FlxOutlineMode_obj_sStaticFields[] = {
	HX_("FAST",9c,8a,76,2e),
	HX_("NORMAL",27,1e,ec,e2),
	HX_("PIXEL_BY_PIXEL",f7,f6,f0,dd),
	::String(null())
};

::hx::Class FlxOutlineMode_obj::__mClass;

Dynamic __Create_FlxOutlineMode_obj() { return new FlxOutlineMode_obj; }

void FlxOutlineMode_obj::__register()
{

::hx::Static(__mClass) = ::hx::_hx_RegisterClass(HX_("flixel.addons.effects.chainable.FlxOutlineMode",bb,db,ae,3a), ::hx::TCanCast< FlxOutlineMode_obj >,FlxOutlineMode_obj_sStaticFields,0,
	&__Create_FlxOutlineMode_obj, &__Create,
	&super::__SGetClass(), &CreateFlxOutlineMode_obj, 0
#ifdef HXCPP_VISIT_ALLOCS
    , 0
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FlxOutlineMode_obj::__GetStatic;
}

void FlxOutlineMode_obj::__boot()
{
FAST = ::hx::CreateConstEnum< FlxOutlineMode_obj >(HX_("FAST",9c,8a,76,2e),0);
NORMAL = ::hx::CreateConstEnum< FlxOutlineMode_obj >(HX_("NORMAL",27,1e,ec,e2),1);
PIXEL_BY_PIXEL = ::hx::CreateConstEnum< FlxOutlineMode_obj >(HX_("PIXEL_BY_PIXEL",f7,f6,f0,dd),2);
}


} // end namespace flixel
} // end namespace addons
} // end namespace effects
} // end namespace chainable
