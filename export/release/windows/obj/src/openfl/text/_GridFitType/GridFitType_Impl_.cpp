#include <hxcpp.h>

#ifndef INCLUDED_openfl_text__GridFitType_GridFitType_Impl_
#include <openfl/text/_GridFitType/GridFitType_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_31a37265e1649dc6_44_fromString,"openfl.text._GridFitType.GridFitType_Impl_","fromString",0xec7a2309,"openfl.text._GridFitType.GridFitType_Impl_.fromString","openfl/text/GridFitType.hx",44,0x99326c1c)
HX_LOCAL_STACK_FRAME(_hx_pos_31a37265e1649dc6_55_toString,"openfl.text._GridFitType.GridFitType_Impl_","toString",0x85ab7e5a,"openfl.text._GridFitType.GridFitType_Impl_.toString","openfl/text/GridFitType.hx",55,0x99326c1c)
HX_LOCAL_STACK_FRAME(_hx_pos_31a37265e1649dc6_19_boot,"openfl.text._GridFitType.GridFitType_Impl_","boot",0xa66842e0,"openfl.text._GridFitType.GridFitType_Impl_.boot","openfl/text/GridFitType.hx",19,0x99326c1c)
HX_LOCAL_STACK_FRAME(_hx_pos_31a37265e1649dc6_29_boot,"openfl.text._GridFitType.GridFitType_Impl_","boot",0xa66842e0,"openfl.text._GridFitType.GridFitType_Impl_.boot","openfl/text/GridFitType.hx",29,0x99326c1c)
HX_LOCAL_STACK_FRAME(_hx_pos_31a37265e1649dc6_40_boot,"openfl.text._GridFitType.GridFitType_Impl_","boot",0xa66842e0,"openfl.text._GridFitType.GridFitType_Impl_.boot","openfl/text/GridFitType.hx",40,0x99326c1c)
namespace openfl{
namespace text{
namespace _GridFitType{

void GridFitType_Impl__obj::__construct() { }

Dynamic GridFitType_Impl__obj::__CreateEmpty() { return new GridFitType_Impl__obj; }

void *GridFitType_Impl__obj::_hx_vtable = 0;

Dynamic GridFitType_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< GridFitType_Impl__obj > _hx_result = new GridFitType_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GridFitType_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0b211ab2;
}

 ::Dynamic GridFitType_Impl__obj::NONE;

 ::Dynamic GridFitType_Impl__obj::PIXEL;

 ::Dynamic GridFitType_Impl__obj::SUBPIXEL;

 ::Dynamic GridFitType_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_31a37265e1649dc6_44_fromString)
HXDLIN(  44)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("none",b8,12,0a,49)) ){
HXLINE(  46)			return 0;
HXDLIN(  46)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("pixel",86,c6,a3,c2)) ){
HXLINE(  47)			return 1;
HXDLIN(  47)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("subpixel",06,ad,95,a4)) ){
HXLINE(  48)			return 2;
HXDLIN(  48)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  49)			return null();
            		}
            		_hx_goto_0:;
HXLINE(  44)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GridFitType_Impl__obj,fromString,return )

::String GridFitType_Impl__obj::toString( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_31a37265e1649dc6_55_toString)
HXDLIN(  55)		 ::Dynamic _hx_switch_0 = this1;
            		if (  (_hx_switch_0==0) ){
HXLINE(  57)			return HX_("none",b8,12,0a,49);
HXDLIN(  57)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==1) ){
HXLINE(  58)			return HX_("pixel",86,c6,a3,c2);
HXDLIN(  58)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==2) ){
HXLINE(  59)			return HX_("subpixel",06,ad,95,a4);
HXDLIN(  59)			goto _hx_goto_2;
            		}
            		/* default */{
HXLINE(  60)			return null();
            		}
            		_hx_goto_2:;
HXLINE(  55)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GridFitType_Impl__obj,toString,return )


GridFitType_Impl__obj::GridFitType_Impl__obj()
{
}

bool GridFitType_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *GridFitType_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo GridFitType_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &GridFitType_Impl__obj::NONE,HX_("NONE",b8,da,ca,33)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &GridFitType_Impl__obj::PIXEL,HX_("PIXEL",66,fe,91,40)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &GridFitType_Impl__obj::SUBPIXEL,HX_("SUBPIXEL",06,3d,1b,fe)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void GridFitType_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GridFitType_Impl__obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(GridFitType_Impl__obj::PIXEL,"PIXEL");
	HX_MARK_MEMBER_NAME(GridFitType_Impl__obj::SUBPIXEL,"SUBPIXEL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GridFitType_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GridFitType_Impl__obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(GridFitType_Impl__obj::PIXEL,"PIXEL");
	HX_VISIT_MEMBER_NAME(GridFitType_Impl__obj::SUBPIXEL,"SUBPIXEL");
};

#endif

::hx::Class GridFitType_Impl__obj::__mClass;

static ::String GridFitType_Impl__obj_sStaticFields[] = {
	HX_("NONE",b8,da,ca,33),
	HX_("PIXEL",66,fe,91,40),
	HX_("SUBPIXEL",06,3d,1b,fe),
	HX_("fromString",db,2d,74,54),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void GridFitType_Impl__obj::__register()
{
	GridFitType_Impl__obj _hx_dummy;
	GridFitType_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.text._GridFitType.GridFitType_Impl_",80,20,dc,d2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GridFitType_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GridFitType_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(GridFitType_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< GridFitType_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GridFitType_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GridFitType_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GridFitType_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void GridFitType_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_31a37265e1649dc6_19_boot)
HXDLIN(  19)		NONE = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_31a37265e1649dc6_29_boot)
HXDLIN(  29)		PIXEL = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_31a37265e1649dc6_40_boot)
HXDLIN(  40)		SUBPIXEL = 2;
            	}
}

} // end namespace openfl
} // end namespace text
} // end namespace _GridFitType
