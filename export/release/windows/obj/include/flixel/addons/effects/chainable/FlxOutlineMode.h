#ifndef INCLUDED_flixel_addons_effects_chainable_FlxOutlineMode
#define INCLUDED_flixel_addons_effects_chainable_FlxOutlineMode

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS4(flixel,addons,effects,chainable,FlxOutlineMode)
namespace flixel{
namespace addons{
namespace effects{
namespace chainable{


class FlxOutlineMode_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef FlxOutlineMode_obj OBJ_;

	public:
		FlxOutlineMode_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("flixel.addons.effects.chainable.FlxOutlineMode",bb,db,ae,3a); }
		::String __ToString() const { return HX_("FlxOutlineMode.",fb,ff,f2,34) + _hx_tag; }

		static ::flixel::addons::effects::chainable::FlxOutlineMode FAST;
		static inline ::flixel::addons::effects::chainable::FlxOutlineMode FAST_dyn() { return FAST; }
		static ::flixel::addons::effects::chainable::FlxOutlineMode NORMAL;
		static inline ::flixel::addons::effects::chainable::FlxOutlineMode NORMAL_dyn() { return NORMAL; }
		static ::flixel::addons::effects::chainable::FlxOutlineMode PIXEL_BY_PIXEL;
		static inline ::flixel::addons::effects::chainable::FlxOutlineMode PIXEL_BY_PIXEL_dyn() { return PIXEL_BY_PIXEL; }
};

} // end namespace flixel
} // end namespace addons
} // end namespace effects
} // end namespace chainable

#endif /* INCLUDED_flixel_addons_effects_chainable_FlxOutlineMode */ 
