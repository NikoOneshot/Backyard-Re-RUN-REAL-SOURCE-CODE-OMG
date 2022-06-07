#ifndef INCLUDED_flixel_addons_effects_chainable_FlxTrailEffect
#define INCLUDED_flixel_addons_effects_chainable_FlxTrailEffect

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_effects_chainable_IFlxEffect
#include <flixel/addons/effects/chainable/IFlxEffect.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS4(flixel,addons,effects,chainable,FlxEffectSprite)
HX_DECLARE_CLASS4(flixel,addons,effects,chainable,FlxTrailEffect)
HX_DECLARE_CLASS4(flixel,addons,effects,chainable,IFlxEffect)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
HX_DECLARE_CLASS2(openfl,geom,Matrix)

namespace flixel{
namespace addons{
namespace effects{
namespace chainable{


class HXCPP_CLASS_ATTRIBUTES FlxTrailEffect_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxTrailEffect_obj OBJ_;
		FlxTrailEffect_obj();

	public:
		enum { _hx_ClassId = 0x46d43c6d };

		void __construct( ::flixel::addons::effects::chainable::FlxEffectSprite Target,::hx::Null< int >  __o_Length,::hx::Null< Float >  __o_Alpha,::hx::Null< int >  __o_FramesDelay,::hx::Null< bool >  __o_CachePixels);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.addons.effects.chainable.FlxTrailEffect")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.addons.effects.chainable.FlxTrailEffect"); }
		static ::hx::ObjectPtr< FlxTrailEffect_obj > __new( ::flixel::addons::effects::chainable::FlxEffectSprite Target,::hx::Null< int >  __o_Length,::hx::Null< Float >  __o_Alpha,::hx::Null< int >  __o_FramesDelay,::hx::Null< bool >  __o_CachePixels);
		static ::hx::ObjectPtr< FlxTrailEffect_obj > __alloc(::hx::Ctx *_hx_ctx, ::flixel::addons::effects::chainable::FlxEffectSprite Target,::hx::Null< int >  __o_Length,::hx::Null< Float >  __o_Alpha,::hx::Null< int >  __o_FramesDelay,::hx::Null< bool >  __o_CachePixels);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxTrailEffect_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("FlxTrailEffect",c5,33,e9,e7); }

		bool active;
		 ::flixel::math::FlxPoint offset;
		 ::flixel::addons::effects::chainable::FlxEffectSprite target;
		int length;
		Float alpha;
		int framesDelay;
		bool cachePixels;
		::Array< ::Dynamic> _recentPositions;
		::Array< ::Dynamic> _recentPixels;
		int _currentFrames;
		 ::openfl::display::BitmapData _pixels;
		 ::openfl::geom::Matrix _matrix;
		 ::openfl::geom::ColorTransform _colorTransform;
		void destroy();
		::Dynamic destroy_dyn();

		void update(Float elapsed);
		::Dynamic update_dyn();

		void updateRecents();
		::Dynamic updateRecents_dyn();

		 ::openfl::display::BitmapData apply( ::openfl::display::BitmapData bitmapData);
		::Dynamic apply_dyn();

		void clear();
		::Dynamic clear_dyn();

		void disposeCachedPixels();
		::Dynamic disposeCachedPixels_dyn();

		int set_length(int Value);
		::Dynamic set_length_dyn();

		bool set_cachePixels(bool Value);
		::Dynamic set_cachePixels_dyn();

};

} // end namespace flixel
} // end namespace addons
} // end namespace effects
} // end namespace chainable

#endif /* INCLUDED_flixel_addons_effects_chainable_FlxTrailEffect */ 
