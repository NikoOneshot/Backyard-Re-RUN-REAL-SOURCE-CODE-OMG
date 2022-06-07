#ifndef INCLUDED_openfl_events_RenderEvent
#define INCLUDED_openfl_events_RenderEvent

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,RenderEvent)
HX_DECLARE_CLASS2(openfl,geom,ColorTransform)
HX_DECLARE_CLASS2(openfl,geom,Matrix)

namespace openfl{
namespace events{


class HXCPP_CLASS_ATTRIBUTES RenderEvent_obj : public  ::openfl::events::Event_obj
{
	public:
		typedef  ::openfl::events::Event_obj super;
		typedef RenderEvent_obj OBJ_;
		RenderEvent_obj();

	public:
		enum { _hx_ClassId = 0x19d7ad57 };

		void __construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable, ::openfl::geom::Matrix objectMatrix, ::openfl::geom::ColorTransform objectColorTransform,::hx::Null< bool >  __o_allowSmoothing);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.events.RenderEvent")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.events.RenderEvent"); }
		static ::hx::ObjectPtr< RenderEvent_obj > __new(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable, ::openfl::geom::Matrix objectMatrix, ::openfl::geom::ColorTransform objectColorTransform,::hx::Null< bool >  __o_allowSmoothing);
		static ::hx::ObjectPtr< RenderEvent_obj > __alloc(::hx::Ctx *_hx_ctx,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable, ::openfl::geom::Matrix objectMatrix, ::openfl::geom::ColorTransform objectColorTransform,::hx::Null< bool >  __o_allowSmoothing);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~RenderEvent_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("RenderEvent",c4,8c,a8,25); }

		static void __boot();
		static ::String CLEAR_DOM;
		static ::String RENDER_CAIRO;
		static ::String RENDER_CANVAS;
		static ::String RENDER_DOM;
		static ::String RENDER_OPENGL;
		bool allowSmoothing;
		 ::openfl::geom::ColorTransform objectColorTransform;
		 ::openfl::geom::Matrix objectMatrix;
		 ::openfl::display::DisplayObjectRenderer renderer;
		 ::openfl::events::Event clone();

		virtual ::String toString();

		void _hx___init();

};

} // end namespace openfl
} // end namespace events

#endif /* INCLUDED_openfl_events_RenderEvent */ 
