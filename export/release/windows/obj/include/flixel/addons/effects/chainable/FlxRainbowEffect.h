#ifndef INCLUDED_flixel_addons_effects_chainable_FlxRainbowEffect
#define INCLUDED_flixel_addons_effects_chainable_FlxRainbowEffect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_effects_chainable_IFlxEffect
#include <flixel/addons/effects/chainable/IFlxEffect.h>
#endif
HX_DECLARE_CLASS4(flixel,addons,effects,chainable,FlxRainbowEffect)
HX_DECLARE_CLASS4(flixel,addons,effects,chainable,IFlxEffect)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,geom,Point)

namespace flixel{
namespace addons{
namespace effects{
namespace chainable{


class HXCPP_CLASS_ATTRIBUTES FlxRainbowEffect_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxRainbowEffect_obj OBJ_;
		FlxRainbowEffect_obj();

	public:
		enum { _hx_ClassId = 0x2ea2a2c1 };

		void __construct(::hx::Null< Float >  __o_Alpha,::hx::Null< Float >  __o_Brightness,::hx::Null< Float >  __o_Speed,::hx::Null< int >  __o_StartHue);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.effects.chainable.FlxRainbowEffect")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.effects.chainable.FlxRainbowEffect"); }
		static ::hx::ObjectPtr< FlxRainbowEffect_obj > __new(::hx::Null< Float >  __o_Alpha,::hx::Null< Float >  __o_Brightness,::hx::Null< Float >  __o_Speed,::hx::Null< int >  __o_StartHue);
		static ::hx::ObjectPtr< FlxRainbowEffect_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_Alpha,::hx::Null< Float >  __o_Brightness,::hx::Null< Float >  __o_Speed,::hx::Null< int >  __o_StartHue);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxRainbowEffect_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxRainbowEffect",b5,a4,f7,c5); }

		bool active;
		 ::flixel::math::FlxPoint offset;
		Float speed;
		Float alpha;
		Float brightness;
		int _hue;
		Float _time;
		 ::openfl::geom::Point _flashPoint;
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

#endif /* INCLUDED_flixel_addons_effects_chainable_FlxRainbowEffect */ 
