#ifndef INCLUDED_flixel_addons_effects_chainable_FlxOutlineEffect
#define INCLUDED_flixel_addons_effects_chainable_FlxOutlineEffect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_effects_chainable_IFlxEffect
#include <flixel/addons/effects/chainable/IFlxEffect.h>
#endif
HX_DECLARE_CLASS4(flixel,addons,effects,chainable,FlxOutlineEffect)
HX_DECLARE_CLASS4(flixel,addons,effects,chainable,FlxOutlineMode)
HX_DECLARE_CLASS4(flixel,addons,effects,chainable,IFlxEffect)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,geom,Matrix)
HX_DECLARE_CLASS2(openfl,geom,Point)

namespace flixel{
namespace addons{
namespace effects{
namespace chainable{


class HXCPP_CLASS_ATTRIBUTES FlxOutlineEffect_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxOutlineEffect_obj OBJ_;
		FlxOutlineEffect_obj();

	public:
		enum { _hx_ClassId = 0x28347a0d };

		void __construct( ::flixel::addons::effects::chainable::FlxOutlineMode Mode,::hx::Null< int >  __o_Color,::hx::Null< int >  __o_Thickness,::hx::Null< int >  __o_Threshold,::hx::Null< Float >  __o_Quality);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.effects.chainable.FlxOutlineEffect")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.effects.chainable.FlxOutlineEffect"); }
		static ::hx::ObjectPtr< FlxOutlineEffect_obj > __new( ::flixel::addons::effects::chainable::FlxOutlineMode Mode,::hx::Null< int >  __o_Color,::hx::Null< int >  __o_Thickness,::hx::Null< int >  __o_Threshold,::hx::Null< Float >  __o_Quality);
		static ::hx::ObjectPtr< FlxOutlineEffect_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::effects::chainable::FlxOutlineMode Mode,::hx::Null< int >  __o_Color,::hx::Null< int >  __o_Thickness,::hx::Null< int >  __o_Threshold,::hx::Null< Float >  __o_Quality);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxOutlineEffect_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxOutlineEffect",01,7c,89,bf); }

		bool active;
		 ::flixel::math::FlxPoint offset;
		bool dirty;
		 ::flixel::addons::effects::chainable::FlxOutlineMode mode;
		int color;
		int thickness;
		int threshold;
		Float quality;
		 ::openfl::display::BitmapData _pixels;
		 ::openfl::display::BitmapData _borderPixels;
		 ::openfl::geom::Point _flashPoint;
		 ::openfl::geom::Matrix _matrix;
		void destroy();
		::Dynamic destroy_dyn();

		void update(Float elapsed);
		::Dynamic update_dyn();

		 ::openfl::display::BitmapData apply( ::openfl::display::BitmapData bitmapData);
		::Dynamic apply_dyn();

		void drawPixelByPixel( ::openfl::display::BitmapData bitmapData);
		::Dynamic drawPixelByPixel_dyn();

		void drawNormal(int iterations);
		::Dynamic drawNormal_dyn();

		void drawFast(int iterations);
		::Dynamic drawFast_dyn();

		void drawBorder(Float x,Float y);
		::Dynamic drawBorder_dyn();

		 ::openfl::display::BitmapData surroundPixel(int x,int y,Float brush);
		::Dynamic surroundPixel_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace effects
} // end namespace chainable

#endif /* INCLUDED_flixel_addons_effects_chainable_FlxOutlineEffect */ 
