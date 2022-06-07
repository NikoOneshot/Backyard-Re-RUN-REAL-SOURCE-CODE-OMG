#ifndef INCLUDED_flixel_addons_effects_chainable_FlxGlitchEffect
#define INCLUDED_flixel_addons_effects_chainable_FlxGlitchEffect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_effects_chainable_IFlxEffect
#include <flixel/addons/effects/chainable/IFlxEffect.h>
#endif
HX_DECLARE_CLASS4(flixel,addons,effects,chainable,FlxGlitchDirection)
HX_DECLARE_CLASS4(flixel,addons,effects,chainable,FlxGlitchEffect)
HX_DECLARE_CLASS4(flixel,addons,effects,chainable,IFlxEffect)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,geom,Point)
HX_DECLARE_CLASS2(openfl,geom,Rectangle)

namespace flixel{
namespace addons{
namespace effects{
namespace chainable{


class HXCPP_CLASS_ATTRIBUTES FlxGlitchEffect_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxGlitchEffect_obj OBJ_;
		FlxGlitchEffect_obj();

	public:
		enum { _hx_ClassId = 0x328fc868 };

		void __construct(::hx::Null< int >  __o_Strength,::hx::Null< int >  __o_Size,::hx::Null< Float >  __o_Delay, ::flixel::addons::effects::chainable::FlxGlitchDirection Direction);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.effects.chainable.FlxGlitchEffect")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.effects.chainable.FlxGlitchEffect"); }
		static ::hx::ObjectPtr< FlxGlitchEffect_obj > __new(::hx::Null< int >  __o_Strength,::hx::Null< int >  __o_Size,::hx::Null< Float >  __o_Delay, ::flixel::addons::effects::chainable::FlxGlitchDirection Direction);
		static ::hx::ObjectPtr< FlxGlitchEffect_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_Strength,::hx::Null< int >  __o_Size,::hx::Null< Float >  __o_Delay, ::flixel::addons::effects::chainable::FlxGlitchDirection Direction);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxGlitchEffect_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxGlitchEffect",d8,43,75,36); }

		bool active;
		 ::flixel::math::FlxPoint offset;
		int size;
		Float delay;
		 ::flixel::addons::effects::chainable::FlxGlitchDirection direction;
		int strength;
		Float _time;
		 ::openfl::geom::Point _flashPoint;
		 ::openfl::geom::Rectangle _flashRect;
		 ::openfl::display::BitmapData _pixels;
		void destroy();
		::Dynamic destroy_dyn();

		void update(Float elapsed);
		::Dynamic update_dyn();

		 ::openfl::display::BitmapData apply( ::openfl::display::BitmapData bitmapData);
		::Dynamic apply_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace effects
} // end namespace chainable

#endif /* INCLUDED_flixel_addons_effects_chainable_FlxGlitchEffect */ 
