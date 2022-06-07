#ifndef INCLUDED_flixel_addons_effects_chainable_FlxGlitchDirection
#define INCLUDED_flixel_addons_effects_chainable_FlxGlitchDirection

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,addons,effects,chainable,FlxGlitchDirection)
namespace flixel{
namespace addons{
namespace effects{
namespace chainable{


class FlxGlitchDirection_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef FlxGlitchDirection_obj OBJ_;

	public:
		FlxGlitchDirection_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("flixel.addons.effects.chainable.FlxGlitchDirection",40,f6,23,b8); }
		::String __ToString() const { return HX_("FlxGlitchDirection.",d6,2d,03,f9) + _hx_tag; }

		static ::flixel::addons::effects::chainable::FlxGlitchDirection HORIZONTAL;
		static inline ::flixel::addons::effects::chainable::FlxGlitchDirection HORIZONTAL_dyn() { return HORIZONTAL; }
		static ::flixel::addons::effects::chainable::FlxGlitchDirection VERTICAL;
		static inline ::flixel::addons::effects::chainable::FlxGlitchDirection VERTICAL_dyn() { return VERTICAL; }
};

} // end namespace flixel
} // end namespace addons
} // end namespace effects
} // end namespace chainable

#endif /* INCLUDED_flixel_addons_effects_chainable_FlxGlitchDirection */ 
