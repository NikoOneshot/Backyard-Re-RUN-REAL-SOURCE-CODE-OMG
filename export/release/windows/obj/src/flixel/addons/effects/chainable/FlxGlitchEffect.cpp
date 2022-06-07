#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_addons_effects_chainable_FlxGlitchDirection
#include <flixel/addons/effects/chainable/FlxGlitchDirection.h>
#endif
#ifndef INCLUDED_flixel_addons_effects_chainable_FlxGlitchEffect
#include <flixel/addons/effects/chainable/FlxGlitchEffect.h>
#endif
#ifndef INCLUDED_flixel_addons_effects_chainable_IFlxEffect
#include <flixel/addons/effects/chainable/IFlxEffect.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c73eb42a19222c98_16_new,"flixel.addons.effects.chainable.FlxGlitchEffect","new",0xd96c04e2,"flixel.addons.effects.chainable.FlxGlitchEffect.new","flixel/addons/effects/chainable/FlxGlitchEffect.hx",16,0x0b6692b0)
HX_LOCAL_STACK_FRAME(_hx_pos_c73eb42a19222c98_79_destroy,"flixel.addons.effects.chainable.FlxGlitchEffect","destroy",0x19dfca7c,"flixel.addons.effects.chainable.FlxGlitchEffect.destroy","flixel/addons/effects/chainable/FlxGlitchEffect.hx",79,0x0b6692b0)
HX_LOCAL_STACK_FRAME(_hx_pos_c73eb42a19222c98_89_update,"flixel.addons.effects.chainable.FlxGlitchEffect","update",0x21f38ec7,"flixel.addons.effects.chainable.FlxGlitchEffect.update","flixel/addons/effects/chainable/FlxGlitchEffect.hx",89,0x0b6692b0)
HX_LOCAL_STACK_FRAME(_hx_pos_c73eb42a19222c98_100_apply,"flixel.addons.effects.chainable.FlxGlitchEffect","apply",0x9b2b5e70,"flixel.addons.effects.chainable.FlxGlitchEffect.apply","flixel/addons/effects/chainable/FlxGlitchEffect.hx",100,0x0b6692b0)
namespace flixel{
namespace addons{
namespace effects{
namespace chainable{

void FlxGlitchEffect_obj::__construct(::hx::Null< int >  __o_Strength,::hx::Null< int >  __o_Size,::hx::Null< Float >  __o_Delay, ::flixel::addons::effects::chainable::FlxGlitchDirection Direction){
            		int Strength = __o_Strength.Default(4);
            		int Size = __o_Size.Default(1);
            		Float Delay = __o_Delay.Default(((Float)0.05));
            	HX_GC_STACKFRAME(&_hx_pos_c73eb42a19222c98_16_new)
HXLINE(  54)		this->_flashRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  49)		this->_flashPoint =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  44)		this->_time = ((Float)0);
HXLINE(  39)		this->strength = 2;
HXLINE(  29)		this->delay = ((Float)0.05);
HXLINE(  24)		this->size = 1;
HXLINE(  19)		 ::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN(  19)		point->_inPool = false;
HXDLIN(  19)		this->offset = point;
HXLINE(  18)		this->active = true;
HXLINE(  72)		this->strength = Strength;
HXLINE(  73)		this->size = Size;
HXLINE(  74)		this->delay = Delay;
HXLINE(  75)		 ::flixel::addons::effects::chainable::FlxGlitchDirection _hx_tmp;
HXDLIN(  75)		if (::hx::IsNotNull( Direction )) {
HXLINE(  75)			_hx_tmp = Direction;
            		}
            		else {
HXLINE(  75)			_hx_tmp = ::flixel::addons::effects::chainable::FlxGlitchDirection_obj::HORIZONTAL_dyn();
            		}
HXDLIN(  75)		this->direction = _hx_tmp;
            	}

Dynamic FlxGlitchEffect_obj::__CreateEmpty() { return new FlxGlitchEffect_obj; }

void *FlxGlitchEffect_obj::_hx_vtable = 0;

Dynamic FlxGlitchEffect_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxGlitchEffect_obj > _hx_result = new FlxGlitchEffect_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool FlxGlitchEffect_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x328fc868;
}

static ::flixel::addons::effects::chainable::IFlxEffect_obj _hx_flixel_addons_effects_chainable_FlxGlitchEffect__hx_flixel_addons_effects_chainable_IFlxEffect= {
	( void (::hx::Object::*)())&::flixel::addons::effects::chainable::FlxGlitchEffect_obj::destroy,
	( void (::hx::Object::*)(Float))&::flixel::addons::effects::chainable::FlxGlitchEffect_obj::update,
	(  ::openfl::display::BitmapData (::hx::Object::*)( ::openfl::display::BitmapData))&::flixel::addons::effects::chainable::FlxGlitchEffect_obj::apply,
};

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_addons_effects_chainable_FlxGlitchEffect__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::addons::effects::chainable::FlxGlitchEffect_obj::destroy,
};

void *FlxGlitchEffect_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x4a1f9502: return &_hx_flixel_addons_effects_chainable_FlxGlitchEffect__hx_flixel_addons_effects_chainable_IFlxEffect;
		case (int)0xd4fe2fcd: return &_hx_flixel_addons_effects_chainable_FlxGlitchEffect__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxGlitchEffect_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_c73eb42a19222c98_79_destroy)
HXLINE(  80)		this->_flashPoint = null();
HXLINE(  81)		this->_flashRect = null();
HXLINE(  83)		this->offset = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->offset)) );
HXLINE(  84)		this->_pixels = ::flixel::util::FlxDestroyUtil_obj::dispose(this->_pixels);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxGlitchEffect_obj,destroy,(void))

void FlxGlitchEffect_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_c73eb42a19222c98_89_update)
HXDLIN(  89)		if ((this->_time > this->delay)) {
HXLINE(  91)			this->_time = ( (Float)(0) );
            		}
            		else {
HXLINE(  95)			 ::flixel::addons::effects::chainable::FlxGlitchEffect _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN(  95)			_hx_tmp->_time = (_hx_tmp->_time + elapsed);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGlitchEffect_obj,update,(void))

 ::openfl::display::BitmapData FlxGlitchEffect_obj::apply( ::openfl::display::BitmapData bitmapData){
            	HX_GC_STACKFRAME(&_hx_pos_c73eb42a19222c98_100_apply)
HXLINE( 101)		if ((this->_time == 0)) {
HXLINE( 103)			this->_time = ( (Float)(0) );
HXLINE( 105)			int horizontalStrength;
HXDLIN( 105)			if (::hx::IsPointerEq( this->direction,::flixel::addons::effects::chainable::FlxGlitchDirection_obj::HORIZONTAL_dyn() )) {
HXLINE( 105)				horizontalStrength = this->strength;
            			}
            			else {
HXLINE( 105)				horizontalStrength = 0;
            			}
HXLINE( 106)			int verticalStrength;
HXDLIN( 106)			if (::hx::IsPointerEq( this->direction,::flixel::addons::effects::chainable::FlxGlitchDirection_obj::VERTICAL_dyn() )) {
HXLINE( 106)				verticalStrength = this->strength;
            			}
            			else {
HXLINE( 106)				verticalStrength = 0;
            			}
HXLINE( 107)			this->offset->set(-(horizontalStrength),-(verticalStrength));
HXLINE( 109)			bool _hx_tmp;
HXDLIN( 109)			bool _hx_tmp1;
HXDLIN( 109)			if (::hx::IsNotNull( this->_pixels )) {
HXLINE( 109)				_hx_tmp1 = (this->_pixels->width < (bitmapData->width + (horizontalStrength * 2)));
            			}
            			else {
HXLINE( 109)				_hx_tmp1 = true;
            			}
HXDLIN( 109)			if (!(_hx_tmp1)) {
HXLINE( 109)				_hx_tmp = (this->_pixels->height < (bitmapData->height + (verticalStrength * 2)));
            			}
            			else {
HXLINE( 109)				_hx_tmp = true;
            			}
HXDLIN( 109)			if (_hx_tmp) {
HXLINE( 113)				::flixel::util::FlxDestroyUtil_obj::dispose(this->_pixels);
HXLINE( 114)				this->_pixels =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,(bitmapData->width + (horizontalStrength * 2)),(bitmapData->height + (verticalStrength * 2)),true,0);
            			}
            			else {
HXLINE( 118)				this->_pixels->fillRect(this->_pixels->rect,0);
            			}
HXLINE( 121)			int p = 0;
HXLINE( 122)			if (::hx::IsPointerEq( this->direction,::flixel::addons::effects::chainable::FlxGlitchDirection_obj::HORIZONTAL_dyn() )) {
HXLINE( 124)				while((p < bitmapData->height)){
HXLINE( 126)					this->_flashRect->setTo(( (Float)(0) ),( (Float)(p) ),( (Float)(bitmapData->width) ),( (Float)(this->size) ));
HXLINE( 127)					Float _hx_tmp = this->_flashRect->get_bottom();
HXDLIN( 127)					if ((_hx_tmp > bitmapData->height)) {
HXLINE( 128)						this->_flashRect->set_bottom(( (Float)(bitmapData->height) ));
            					}
HXLINE( 129)					 ::openfl::geom::Point _hx_tmp1 = this->_flashPoint;
HXDLIN( 129)					int _hx_tmp2 = ::flixel::FlxG_obj::random->_hx_int(-(this->strength),this->strength,null());
HXDLIN( 129)					_hx_tmp1->setTo(( (Float)((_hx_tmp2 + this->strength)) ),( (Float)(p) ));
HXLINE( 130)					p = (p + ::Std_obj::_hx_int(this->_flashRect->height));
HXLINE( 131)					this->_pixels->copyPixels(bitmapData,this->_flashRect,this->_flashPoint,null(),null(),null());
            				}
            			}
            			else {
HXLINE( 136)				while((p < bitmapData->width)){
HXLINE( 138)					this->_flashRect->setTo(( (Float)(p) ),( (Float)(0) ),( (Float)(this->size) ),( (Float)(bitmapData->height) ));
HXLINE( 139)					Float _hx_tmp = this->_flashRect->get_right();
HXDLIN( 139)					if ((_hx_tmp > bitmapData->width)) {
HXLINE( 140)						this->_flashRect->set_right(( (Float)(bitmapData->width) ));
            					}
HXLINE( 141)					 ::openfl::geom::Point _hx_tmp1 = this->_flashPoint;
HXDLIN( 141)					int _hx_tmp2 = ::flixel::FlxG_obj::random->_hx_int(-(this->strength),this->strength,null());
HXDLIN( 141)					_hx_tmp1->setTo(( (Float)(p) ),( (Float)((_hx_tmp2 + this->strength)) ));
HXLINE( 142)					p = (p + ::Std_obj::_hx_int(this->_flashRect->width));
HXLINE( 143)					this->_pixels->copyPixels(bitmapData,this->_flashRect,this->_flashPoint,null(),null(),null());
            				}
            			}
            		}
HXLINE( 148)		if (::hx::IsNotNull( this->_pixels )) {
HXLINE( 150)			::flixel::util::FlxDestroyUtil_obj::dispose(bitmapData);
HXLINE( 151)			return this->_pixels->clone();
            		}
HXLINE( 154)		return bitmapData;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxGlitchEffect_obj,apply,return )


::hx::ObjectPtr< FlxGlitchEffect_obj > FlxGlitchEffect_obj::__new(::hx::Null< int >  __o_Strength,::hx::Null< int >  __o_Size,::hx::Null< Float >  __o_Delay, ::flixel::addons::effects::chainable::FlxGlitchDirection Direction) {
	::hx::ObjectPtr< FlxGlitchEffect_obj > __this = new FlxGlitchEffect_obj();
	__this->__construct(__o_Strength,__o_Size,__o_Delay,Direction);
	return __this;
}

::hx::ObjectPtr< FlxGlitchEffect_obj > FlxGlitchEffect_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_Strength,::hx::Null< int >  __o_Size,::hx::Null< Float >  __o_Delay, ::flixel::addons::effects::chainable::FlxGlitchDirection Direction) {
	FlxGlitchEffect_obj *__this = (FlxGlitchEffect_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxGlitchEffect_obj), true, "flixel.addons.effects.chainable.FlxGlitchEffect"));
	*(void **)__this = FlxGlitchEffect_obj::_hx_vtable;
	__this->__construct(__o_Strength,__o_Size,__o_Delay,Direction);
	return __this;
}

FlxGlitchEffect_obj::FlxGlitchEffect_obj()
{
}

void FlxGlitchEffect_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxGlitchEffect);
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(delay,"delay");
	HX_MARK_MEMBER_NAME(direction,"direction");
	HX_MARK_MEMBER_NAME(strength,"strength");
	HX_MARK_MEMBER_NAME(_time,"_time");
	HX_MARK_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_MARK_MEMBER_NAME(_flashRect,"_flashRect");
	HX_MARK_MEMBER_NAME(_pixels,"_pixels");
	HX_MARK_END_CLASS();
}

void FlxGlitchEffect_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(delay,"delay");
	HX_VISIT_MEMBER_NAME(direction,"direction");
	HX_VISIT_MEMBER_NAME(strength,"strength");
	HX_VISIT_MEMBER_NAME(_time,"_time");
	HX_VISIT_MEMBER_NAME(_flashPoint,"_flashPoint");
	HX_VISIT_MEMBER_NAME(_flashRect,"_flashRect");
	HX_VISIT_MEMBER_NAME(_pixels,"_pixels");
}

::hx::Val FlxGlitchEffect_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return ::hx::Val( size ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { return ::hx::Val( delay ); }
		if (HX_FIELD_EQ(inName,"_time") ) { return ::hx::Val( _time ); }
		if (HX_FIELD_EQ(inName,"apply") ) { return ::hx::Val( apply_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return ::hx::Val( active ); }
		if (HX_FIELD_EQ(inName,"offset") ) { return ::hx::Val( offset ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_pixels") ) { return ::hx::Val( _pixels ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"strength") ) { return ::hx::Val( strength ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { return ::hx::Val( direction ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_flashRect") ) { return ::hx::Val( _flashRect ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { return ::hx::Val( _flashPoint ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val FlxGlitchEffect_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"delay") ) { delay=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_time") ) { _time=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_pixels") ) { _pixels=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"strength") ) { strength=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"direction") ) { direction=inValue.Cast<  ::flixel::addons::effects::chainable::FlxGlitchDirection >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_flashRect") ) { _flashRect=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_flashPoint") ) { _flashPoint=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxGlitchEffect_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("active",c6,41,46,16));
	outFields->push(HX_("offset",93,97,3f,60));
	outFields->push(HX_("size",c1,a0,53,4c));
	outFields->push(HX_("delay",83,d7,26,d7));
	outFields->push(HX_("direction",3f,62,40,10));
	outFields->push(HX_("strength",81,d2,8e,8e));
	outFields->push(HX_("_time",ec,e7,0d,00));
	outFields->push(HX_("_flashPoint",9f,1d,2a,b7));
	outFields->push(HX_("_flashRect",b5,c2,f3,5d));
	outFields->push(HX_("_pixels",cc,00,21,fb));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxGlitchEffect_obj_sMemberStorageInfo[] = {
	{::hx::fsBool,(int)offsetof(FlxGlitchEffect_obj,active),HX_("active",c6,41,46,16)},
	{::hx::fsObject /*  ::flixel::math::FlxPoint */ ,(int)offsetof(FlxGlitchEffect_obj,offset),HX_("offset",93,97,3f,60)},
	{::hx::fsInt,(int)offsetof(FlxGlitchEffect_obj,size),HX_("size",c1,a0,53,4c)},
	{::hx::fsFloat,(int)offsetof(FlxGlitchEffect_obj,delay),HX_("delay",83,d7,26,d7)},
	{::hx::fsObject /*  ::flixel::addons::effects::chainable::FlxGlitchDirection */ ,(int)offsetof(FlxGlitchEffect_obj,direction),HX_("direction",3f,62,40,10)},
	{::hx::fsInt,(int)offsetof(FlxGlitchEffect_obj,strength),HX_("strength",81,d2,8e,8e)},
	{::hx::fsFloat,(int)offsetof(FlxGlitchEffect_obj,_time),HX_("_time",ec,e7,0d,00)},
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(int)offsetof(FlxGlitchEffect_obj,_flashPoint),HX_("_flashPoint",9f,1d,2a,b7)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(int)offsetof(FlxGlitchEffect_obj,_flashRect),HX_("_flashRect",b5,c2,f3,5d)},
	{::hx::fsObject /*  ::openfl::display::BitmapData */ ,(int)offsetof(FlxGlitchEffect_obj,_pixels),HX_("_pixels",cc,00,21,fb)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxGlitchEffect_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxGlitchEffect_obj_sMemberFields[] = {
	HX_("active",c6,41,46,16),
	HX_("offset",93,97,3f,60),
	HX_("size",c1,a0,53,4c),
	HX_("delay",83,d7,26,d7),
	HX_("direction",3f,62,40,10),
	HX_("strength",81,d2,8e,8e),
	HX_("_time",ec,e7,0d,00),
	HX_("_flashPoint",9f,1d,2a,b7),
	HX_("_flashRect",b5,c2,f3,5d),
	HX_("_pixels",cc,00,21,fb),
	HX_("destroy",fa,2c,86,24),
	HX_("update",09,86,05,87),
	HX_("apply",6e,85,3b,24),
	::String(null()) };

::hx::Class FlxGlitchEffect_obj::__mClass;

void FlxGlitchEffect_obj::__register()
{
	FlxGlitchEffect_obj _hx_dummy;
	FlxGlitchEffect_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.addons.effects.chainable.FlxGlitchEffect",f0,ab,d3,1f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxGlitchEffect_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxGlitchEffect_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxGlitchEffect_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxGlitchEffect_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace effects
} // end namespace chainable
