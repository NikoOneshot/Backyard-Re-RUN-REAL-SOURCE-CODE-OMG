#ifndef INCLUDED_flixel_input_actions_FlxActionInputDigitalGamepad
#define INCLUDED_flixel_input_actions_FlxActionInputDigitalGamepad

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_actions_FlxActionInputDigital
#include <flixel/input/actions/FlxActionInputDigital.h>
#endif
HX_DECLARE_CLASS2(flixel,input,FlxInput)
HX_DECLARE_CLASS2(flixel,input,IFlxInput)
HX_DECLARE_CLASS3(flixel,input,actions,FlxAction)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInput)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInputDigital)
HX_DECLARE_CLASS3(flixel,input,actions,FlxActionInputDigitalGamepad)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace input{
namespace actions{


class HXCPP_CLASS_ATTRIBUTES FlxActionInputDigitalGamepad_obj : public  ::flixel::input::actions::FlxActionInputDigital_obj
{
	public:
		typedef  ::flixel::input::actions::FlxActionInputDigital_obj super;
		typedef FlxActionInputDigitalGamepad_obj OBJ_;
		FlxActionInputDigitalGamepad_obj();

	public:
		enum { _hx_ClassId = 0x1db1ff86 };

		void __construct(int InputID,int Trigger,::hx::Null< int >  __o_GamepadID);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.input.actions.FlxActionInputDigitalGamepad")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.input.actions.FlxActionInputDigitalGamepad"); }
		static ::hx::ObjectPtr< FlxActionInputDigitalGamepad_obj > __new(int InputID,int Trigger,::hx::Null< int >  __o_GamepadID);
		static ::hx::ObjectPtr< FlxActionInputDigitalGamepad_obj > __alloc(::hx::Ctx *_hx_ctx,int InputID,int Trigger,::hx::Null< int >  __o_GamepadID);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxActionInputDigitalGamepad_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxActionInputDigitalGamepad",8b,6c,fd,da); }

		 ::flixel::input::FlxInput input;
		virtual ::String toString();
		::Dynamic toString_dyn();

		void update();

		bool check( ::flixel::input::actions::FlxAction Action);

};

} // end namespace flixel
} // end namespace input
} // end namespace actions

#endif /* INCLUDED_flixel_input_actions_FlxActionInputDigitalGamepad */ 
