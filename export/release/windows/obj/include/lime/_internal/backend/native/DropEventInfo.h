#ifndef INCLUDED_lime__internal_backend_native_DropEventInfo
#define INCLUDED_lime__internal_backend_native_DropEventInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_a21879e7650910f2_655_new)
HX_DECLARE_CLASS4(lime,_internal,backend,native,DropEventInfo)

namespace lime{
namespace _internal{
namespace backend{
namespace native{


class HXCPP_CLASS_ATTRIBUTES DropEventInfo_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef DropEventInfo_obj OBJ_;
		DropEventInfo_obj();

	public:
		enum { _hx_ClassId = 0x33908375 };

		void __construct( ::Dynamic type,::String file);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime._internal.backend.native.DropEventInfo")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"lime._internal.backend.native.DropEventInfo"); }

		inline static ::hx::ObjectPtr< DropEventInfo_obj > __new( ::Dynamic type,::String file) {
			::hx::ObjectPtr< DropEventInfo_obj > __this = new DropEventInfo_obj();
			__this->__construct(type,file);
			return __this;
		}

		inline static ::hx::ObjectPtr< DropEventInfo_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic type,::String file) {
			DropEventInfo_obj *__this = (DropEventInfo_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DropEventInfo_obj), true, "lime._internal.backend.native.DropEventInfo"));
			*(void **)__this = DropEventInfo_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_a21879e7650910f2_655_new)
HXLINE( 656)		( ( ::lime::_internal::backend::native::DropEventInfo)(__this) )->type = ( (int)(type) );
HXLINE( 657)		( ( ::lime::_internal::backend::native::DropEventInfo)(__this) )->file = file;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~DropEventInfo_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("DropEventInfo",59,3b,00,66); }

		::String file;
		int type;
		 ::lime::_internal::backend::native::DropEventInfo clone();
		::Dynamic clone_dyn();

};

} // end namespace lime
} // end namespace _internal
} // end namespace backend
} // end namespace native

#endif /* INCLUDED_lime__internal_backend_native_DropEventInfo */ 
