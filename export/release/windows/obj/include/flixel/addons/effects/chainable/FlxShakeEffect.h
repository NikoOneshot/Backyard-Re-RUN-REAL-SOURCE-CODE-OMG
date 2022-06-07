#ifndef INCLUDED_flixel_addons_effects_chainable_FlxShakeEffect
#define INCLUDED_flixel_addons_effects_chainable_FlxShakeEffect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_effects_chainable_IFlxEffect
#include <flixel/addons/effects/chainable/IFlxEffect.h>
#endif
HX_DECLARE_CLASS4(flixel,addons,effects,chainable,FlxShakeEffect)
HX_DECLARE_CLASS4(flixel,addons,effects,chainable,IFlxEffect)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,FlxAxes)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)

namespace flixel{
namespace addons{
namespace effects{
namespace chainable{


class HXCPP_CLASS_ATTRIBUTES FlxShakeEffect_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxShakeEffect_obj OBJ_;
		FlxShakeEffect_obj();

	public:
		enum { _hx_ClassId = 0x2f941699 };

		void __construct(::hx::Null< Float >  __o_Intensity,::hx::Null< Float >  __o_Duration, ::Dynamic OnComplete, ::flixel::util::FlxAxes Axes);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.effects.chainable.FlxShakeEffect")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.effects.chainable.FlxShakeEffect"); }
		static ::hx::ObjectPtr< FlxShakeEffect_obj > __new(::hx::Null< Float >  __o_Intensity,::hx::Null< Float >  __o_Duration, ::Dynamic OnComplete, ::flixel::util::FlxAxes Axes);
		static ::hx::ObjectPtr< FlxShakeEffect_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< Float >  __o_Intensity,::hx::Null< Float >  __o_Duration, ::Dynamic OnComplete, ::flixel::util::FlxAxes Axes);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxShakeEffect_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxShakeEffect",c5,be,70,33); }

		bool active;
		 ::flixel::math::FlxPoint offset;
		Float intensity;
		 ::Dynamic onComplete;
		Dynamic onComplete_dyn() { return onComplete;}
		 ::flixel::util::FlxAxes axes;
		Float _duration;
		Float _time;
		void destroy();
		::Dynamic destroy_dyn();

		void update(Float elapsed);
		::Dynamic update_dyn();

		 ::openfl::display::BitmapData apply( ::openfl::display::BitmapData bitmapData);
		::Dynamic apply_dyn();

		void start(::hx::Null< bool >  Force);
		::Dynamic start_dyn();

		void reset(::hx::Null< Float >  Intensity,::hx::Null< Float >  Duration, ::Dynamic OnComplete, ::flixel::util::FlxAxes Axes);
		::Dynamic reset_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace effects
} // end namespace chainable

#endif /* INCLUDED_flixel_addons_effects_chainable_FlxShakeEffect */ 
