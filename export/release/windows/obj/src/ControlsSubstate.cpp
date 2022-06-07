#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_AttachedText
#include <AttachedText.h>
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_ControlsSubstate
#include <ControlsSubstate.h>
#endif
#ifndef INCLUDED_InputFormatter
#include <InputFormatter.h>
#endif
#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxAction
#include <flixel/input/actions/FlxAction.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionDigital
#include <flixel/input/actions/FlxActionDigital.h>
#endif
#ifndef INCLUDED_flixel_input_actions_FlxActionSet
#include <flixel/input/actions/FlxActionSet.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSound
#include <flixel/system/FlxSound.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSoundGroup
#include <flixel/system/FlxSoundGroup.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SoundFrontEnd
#include <flixel/system/frontEnds/SoundFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_0105b02946ff30ba_395_new,"ControlsSubstate","new",0xe75631b9,"ControlsSubstate.new","OptionsState.hx",395,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_0105b02946ff30ba_462_update,"ControlsSubstate","update",0xc5c9c250,"ControlsSubstate.update","OptionsState.hx",462,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_0105b02946ff30ba_477_update,"ControlsSubstate","update",0xc5c9c250,"ControlsSubstate.update","OptionsState.hx",477,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_0105b02946ff30ba_537_changeSelection,"ControlsSubstate","changeSelection",0xda311b95,"ControlsSubstate.changeSelection","OptionsState.hx",537,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_0105b02946ff30ba_571_changeAlt,"ControlsSubstate","changeAlt",0x496f0fb2,"ControlsSubstate.changeAlt","OptionsState.hx",571,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_0105b02946ff30ba_584_unselectableCheck,"ControlsSubstate","unselectableCheck",0xa3530332,"ControlsSubstate.unselectableCheck","OptionsState.hx",584,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_0105b02946ff30ba_597_getSelectedKey,"ControlsSubstate","getSelectedKey",0x6ffb7055,"ControlsSubstate.getSelectedKey","OptionsState.hx",597,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_0105b02946ff30ba_607_addBindTexts,"ControlsSubstate","addBindTexts",0xea2c254f,"ControlsSubstate.addBindTexts","OptionsState.hx",607,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_0105b02946ff30ba_622_reloadKeys,"ControlsSubstate","reloadKeys",0x6f13edb4,"ControlsSubstate.reloadKeys","OptionsState.hx",622,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_0105b02946ff30ba_396_boot,"ControlsSubstate","boot",0x7c2e50b9,"ControlsSubstate.boot","OptionsState.hx",396,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_0105b02946ff30ba_397_boot,"ControlsSubstate","boot",0x7c2e50b9,"ControlsSubstate.boot","OptionsState.hx",397,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_0105b02946ff30ba_399_boot,"ControlsSubstate","boot",0x7c2e50b9,"ControlsSubstate.boot","OptionsState.hx",399,0x342db2ab)

void ControlsSubstate_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_0105b02946ff30ba_395_new)
HXLINE( 461)		this->bindingTime = ((Float)0);
HXLINE( 460)		this->leaving = false;
HXLINE( 425)		this->nextAccept = 5;
HXLINE( 424)		this->rebindingKey = -1;
HXLINE( 423)		this->controlArray = ::Array_obj< int >::__new(0);
HXLINE( 422)		this->grpInputs = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 401)		this->optionShit = ::Array_obj< ::String >::__new(18)->init(0,HX_("NOTES",21,14,b9,1d))->init(1,::ClientPrefs_obj::keyBinds->__get(0)->__GetItem(1))->init(2,::ClientPrefs_obj::keyBinds->__get(1)->__GetItem(1))->init(3,::ClientPrefs_obj::keyBinds->__get(2)->__GetItem(1))->init(4,::ClientPrefs_obj::keyBinds->__get(3)->__GetItem(1))->init(5,HX_("",00,00,00,00))->init(6,HX_("UI",54,4a,00,00))->init(7,::ClientPrefs_obj::keyBinds->__get(4)->__GetItem(1))->init(8,::ClientPrefs_obj::keyBinds->__get(5)->__GetItem(1))->init(9,::ClientPrefs_obj::keyBinds->__get(6)->__GetItem(1))->init(10,::ClientPrefs_obj::keyBinds->__get(7)->__GetItem(1))->init(11,HX_("",00,00,00,00))->init(12,::ClientPrefs_obj::keyBinds->__get(8)->__GetItem(1))->init(13,::ClientPrefs_obj::keyBinds->__get(9)->__GetItem(1))->init(14,::ClientPrefs_obj::keyBinds->__get(10)->__GetItem(1))->init(15,::ClientPrefs_obj::keyBinds->__get(11)->__GetItem(1))->init(16,HX_("",00,00,00,00))->init(17,::ControlsSubstate_obj::defaultKey);
HXLINE( 428)		super::__construct();
HXLINE( 429)		this->grpOptions =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 430)		this->add(this->grpOptions);
HXLINE( 432)		this->controlArray = ::ClientPrefs_obj::lastControls->copy();
HXLINE( 433)		{
HXLINE( 433)			int _g = 0;
HXDLIN( 433)			int _g1 = this->optionShit->length;
HXDLIN( 433)			while((_g < _g1)){
HXLINE( 433)				_g = (_g + 1);
HXDLIN( 433)				int i = (_g - 1);
HXLINE( 434)				bool isCentered = false;
HXLINE( 435)				bool isDefaultKey = (this->optionShit->__get(i) == ::ControlsSubstate_obj::defaultKey);
HXLINE( 436)				if (this->unselectableCheck(i,true)) {
HXLINE( 437)					isCentered = true;
            				}
HXLINE( 440)				bool optionText;
HXDLIN( 440)				if (isCentered) {
HXLINE( 440)					optionText = isDefaultKey;
            				}
            				else {
HXLINE( 440)					optionText = true;
            				}
HXDLIN( 440)				 ::Alphabet optionText1 =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)((10 * i)) ),this->optionShit->__get(i),optionText,false,null(),null());
HXLINE( 441)				optionText1->isMenuItem = true;
HXLINE( 442)				if (isCentered) {
HXLINE( 443)					optionText1->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 444)					optionText1->forceX = optionText1->x;
HXLINE( 445)					optionText1->yAdd = ( (Float)(-55) );
            				}
            				else {
HXLINE( 447)					optionText1->forceX = ( (Float)(200) );
            				}
HXLINE( 449)				optionText1->yMult = ( (Float)(60) );
HXLINE( 450)				optionText1->targetY = ( (Float)(i) );
HXLINE( 451)				this->grpOptions->add(optionText1).StaticCast<  ::Alphabet >();
HXLINE( 453)				if (!(isCentered)) {
HXLINE( 454)					this->addBindTexts(optionText1);
            				}
            			}
            		}
HXLINE( 457)		this->changeSelection(null());
            	}

Dynamic ControlsSubstate_obj::__CreateEmpty() { return new ControlsSubstate_obj; }

void *ControlsSubstate_obj::_hx_vtable = 0;

Dynamic ControlsSubstate_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ControlsSubstate_obj > _hx_result = new ControlsSubstate_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ControlsSubstate_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x1b849407) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x1b849407;
			} else {
				return inClassId==(int)0x5661ffbf;
			}
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		if (inClassId<=(int)0x7ccf8994) {
			return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
		} else {
			return inClassId==(int)0x7fce3ab0;
		}
	}
}

void ControlsSubstate_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_0105b02946ff30ba_462_update)
HXLINE( 463)		if ((this->rebindingKey < 0)) {
HXLINE( 464)			if (::PlayerSettings_obj::player1->controls->_ui_upP->check()) {
HXLINE( 465)				this->changeSelection(-1);
            			}
HXLINE( 467)			if (::PlayerSettings_obj::player1->controls->_ui_downP->check()) {
HXLINE( 468)				this->changeSelection(1);
            			}
HXLINE( 470)			bool _hx_tmp;
HXDLIN( 470)			if (!(::PlayerSettings_obj::player1->controls->_ui_leftP->check())) {
HXLINE( 470)				_hx_tmp = ::PlayerSettings_obj::player1->controls->_ui_rightP->check();
            			}
            			else {
HXLINE( 470)				_hx_tmp = true;
            			}
HXDLIN( 470)			if (_hx_tmp) {
HXLINE( 471)				this->changeAlt();
            			}
HXLINE( 474)			if (::PlayerSettings_obj::player1->controls->_back->check()) {
            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            				void _hx_run( ::Alphabet spr){
            					HX_STACKFRAME(&_hx_pos_0105b02946ff30ba_477_update)
HXLINE( 477)					spr->set_alpha(( (Float)(0) ));
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 475)				::ClientPrefs_obj::reloadControls(this->controlArray);
HXLINE( 476)				this->grpOptions->forEachAlive( ::Dynamic(new _hx_Closure_0()),null());
HXLINE( 479)				{
HXLINE( 479)					int _g = 0;
HXDLIN( 479)					int _g1 = this->grpInputs->length;
HXDLIN( 479)					while((_g < _g1)){
HXLINE( 479)						_g = (_g + 1);
HXDLIN( 479)						int i = (_g - 1);
HXLINE( 480)						 ::AttachedText spr = this->grpInputs->__get(i).StaticCast<  ::AttachedText >();
HXLINE( 481)						if (::hx::IsNotNull( spr )) {
HXLINE( 482)							spr->set_alpha(( (Float)(0) ));
            						}
            					}
            				}
HXLINE( 485)				this->close();
HXLINE( 486)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 486)				_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
            			}
HXLINE( 489)			bool _hx_tmp1;
HXDLIN( 489)			if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 489)				_hx_tmp1 = (this->nextAccept <= 0);
            			}
            			else {
HXLINE( 489)				_hx_tmp1 = false;
            			}
HXDLIN( 489)			if (_hx_tmp1) {
HXLINE( 490)				if ((this->optionShit->__get(::ControlsSubstate_obj::curSelected) == ::ControlsSubstate_obj::defaultKey)) {
HXLINE( 491)					this->controlArray = ::ClientPrefs_obj::defaultKeys->copy();
HXLINE( 492)					this->reloadKeys();
HXLINE( 493)					this->changeSelection(null());
HXLINE( 494)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 494)					_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),null(),null(),null(),null(),null());
            				}
            				else {
HXLINE( 496)					this->bindingTime = ( (Float)(0) );
HXLINE( 497)					this->rebindingKey = this->getSelectedKey();
HXLINE( 498)					if ((this->rebindingKey > -1)) {
HXLINE( 499)						this->grpInputs->__get(this->rebindingKey).StaticCast<  ::AttachedText >()->set_visible(false);
HXLINE( 500)						 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 500)						_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            					}
            					else {
HXLINE( 503)						 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 503)						_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
            					}
            				}
            			}
            		}
            		else {
HXLINE( 508)			int keyPressed = ::flixel::FlxG_obj::keys->firstJustPressed();
HXLINE( 509)			if ((keyPressed > -1)) {
HXLINE( 510)				this->controlArray[this->rebindingKey] = keyPressed;
HXLINE( 511)				int opposite;
HXDLIN( 511)				if ((::hx::Mod(this->rebindingKey,2) == 1)) {
HXLINE( 511)					opposite = -1;
            				}
            				else {
HXLINE( 511)					opposite = 1;
            				}
HXDLIN( 511)				int opposite1 = (this->rebindingKey + opposite);
HXLINE( 512)				::haxe::Log_obj::trace((((HX_("Rebinded key with ID: ",69,95,2c,83) + this->rebindingKey) + HX_(", Opposite is: ",d5,1f,23,21)) + opposite1),::hx::SourceInfo(HX_("source/OptionsState.hx",37,96,2b,d1),512,HX_("ControlsSubstate",47,e1,a2,45),HX_("update",09,86,05,87)));
HXLINE( 513)				if ((this->controlArray->__get(opposite1) == this->controlArray->__get(this->rebindingKey))) {
HXLINE( 514)					this->controlArray[opposite1] = -1;
            				}
HXLINE( 517)				this->reloadKeys();
HXLINE( 518)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 518)				_hx_tmp->play(::Paths_obj::sound(HX_("confirmMenu",bf,8e,fe,3c),null()),null(),null(),null(),null(),null());
HXLINE( 519)				this->rebindingKey = -1;
            			}
HXLINE( 522)			 ::ControlsSubstate _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 522)			_hx_tmp->bindingTime = (_hx_tmp->bindingTime + elapsed);
HXLINE( 523)			if ((this->bindingTime > 5)) {
HXLINE( 524)				this->grpInputs->__get(this->rebindingKey).StaticCast<  ::AttachedText >()->set_visible(true);
HXLINE( 525)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 525)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 526)				this->rebindingKey = -1;
HXLINE( 527)				this->bindingTime = ( (Float)(0) );
            			}
            		}
HXLINE( 531)		if ((this->nextAccept > 0)) {
HXLINE( 532)			 ::ControlsSubstate _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 532)			_hx_tmp->nextAccept = (_hx_tmp->nextAccept - 1);
            		}
HXLINE( 534)		this->super::update(elapsed);
            	}


void ControlsSubstate_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_0105b02946ff30ba_537_changeSelection)
HXLINE( 538)		while(true){
HXLINE( 539)			 ::Dynamic _hx_tmp = ::hx::ClassOf< ::ControlsSubstate >();
HXDLIN( 539)			::ControlsSubstate_obj::curSelected = (::ControlsSubstate_obj::curSelected + change);
HXLINE( 540)			if ((::ControlsSubstate_obj::curSelected < 0)) {
HXLINE( 541)				::ControlsSubstate_obj::curSelected = (this->optionShit->length - 1);
            			}
HXLINE( 542)			if ((::ControlsSubstate_obj::curSelected >= this->optionShit->length)) {
HXLINE( 543)				::ControlsSubstate_obj::curSelected = 0;
            			}
HXLINE( 538)			if (!(this->unselectableCheck(::ControlsSubstate_obj::curSelected,null()))) {
HXLINE( 538)				goto _hx_goto_5;
            			}
            		}
            		_hx_goto_5:;
HXLINE( 546)		int bullShit = 0;
HXLINE( 548)		{
HXLINE( 548)			int _g = 0;
HXDLIN( 548)			int _g1 = this->grpInputs->length;
HXDLIN( 548)			while((_g < _g1)){
HXLINE( 548)				_g = (_g + 1);
HXDLIN( 548)				int i = (_g - 1);
HXLINE( 549)				this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->set_alpha(((Float)0.6));
            			}
            		}
HXLINE( 552)		{
HXLINE( 552)			int _g2 = 0;
HXDLIN( 552)			::Array< ::Dynamic> _g3 = this->grpOptions->members;
HXDLIN( 552)			while((_g2 < _g3->length)){
HXLINE( 552)				 ::Alphabet item = _g3->__get(_g2).StaticCast<  ::Alphabet >();
HXDLIN( 552)				_g2 = (_g2 + 1);
HXLINE( 553)				item->targetY = ( (Float)((bullShit - ::ControlsSubstate_obj::curSelected)) );
HXLINE( 554)				bullShit = (bullShit + 1);
HXLINE( 556)				if (!(this->unselectableCheck((bullShit - 1),null()))) {
HXLINE( 557)					item->set_alpha(((Float)0.6));
HXLINE( 558)					if ((item->targetY == 0)) {
HXLINE( 559)						item->set_alpha(( (Float)(1) ));
HXLINE( 560)						{
HXLINE( 560)							int _g = 0;
HXDLIN( 560)							int _g1 = this->grpInputs->length;
HXDLIN( 560)							while((_g < _g1)){
HXLINE( 560)								_g = (_g + 1);
HXDLIN( 560)								int i = (_g - 1);
HXLINE( 561)								bool _hx_tmp;
HXDLIN( 561)								if (::hx::IsInstanceEq( this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->sprTracker,item )) {
HXLINE( 561)									_hx_tmp = (this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->isAlt == ::ControlsSubstate_obj::curAlt);
            								}
            								else {
HXLINE( 561)									_hx_tmp = false;
            								}
HXDLIN( 561)								if (_hx_tmp) {
HXLINE( 562)									this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 568)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 568)		_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ControlsSubstate_obj,changeSelection,(void))

void ControlsSubstate_obj::changeAlt(){
            	HX_STACKFRAME(&_hx_pos_0105b02946ff30ba_571_changeAlt)
HXLINE( 572)		::ControlsSubstate_obj::curAlt = !(::ControlsSubstate_obj::curAlt);
HXLINE( 573)		{
HXLINE( 573)			int _g = 0;
HXDLIN( 573)			int _g1 = this->grpInputs->length;
HXDLIN( 573)			while((_g < _g1)){
HXLINE( 573)				_g = (_g + 1);
HXDLIN( 573)				int i = (_g - 1);
HXLINE( 574)				if (::hx::IsInstanceEq( this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->sprTracker,Dynamic( this->grpOptions->members->__get(::ControlsSubstate_obj::curSelected)).StaticCast<  ::Alphabet >() )) {
HXLINE( 575)					this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->set_alpha(((Float)0.6));
HXLINE( 576)					if ((this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->isAlt == ::ControlsSubstate_obj::curAlt)) {
HXLINE( 577)						this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
            					}
            				}
            			}
            		}
HXLINE( 581)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 581)		_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ControlsSubstate_obj,changeAlt,(void))

bool ControlsSubstate_obj::unselectableCheck(int num, ::Dynamic __o_checkDefaultKey){
            		 ::Dynamic checkDefaultKey = __o_checkDefaultKey;
            		if (::hx::IsNull(__o_checkDefaultKey)) checkDefaultKey = false;
            	HX_STACKFRAME(&_hx_pos_0105b02946ff30ba_584_unselectableCheck)
HXLINE( 585)		if ((this->optionShit->__get(num) == ::ControlsSubstate_obj::defaultKey)) {
HXLINE( 586)			return ( (bool)(checkDefaultKey) );
            		}
HXLINE( 589)		{
HXLINE( 589)			int _g = 0;
HXDLIN( 589)			int _g1 = ::ClientPrefs_obj::keyBinds->get_length();
HXDLIN( 589)			while((_g < _g1)){
HXLINE( 589)				_g = (_g + 1);
HXDLIN( 589)				int i = (_g - 1);
HXLINE( 590)				if (::hx::IsEq( ::ClientPrefs_obj::keyBinds->__get(i)->__GetItem(1),this->optionShit->__get(num) )) {
HXLINE( 591)					return false;
            				}
            			}
            		}
HXLINE( 594)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ControlsSubstate_obj,unselectableCheck,return )

int ControlsSubstate_obj::getSelectedKey(){
            	HX_STACKFRAME(&_hx_pos_0105b02946ff30ba_597_getSelectedKey)
HXLINE( 598)		int altValue;
HXDLIN( 598)		if (::ControlsSubstate_obj::curAlt) {
HXLINE( 598)			altValue = 1;
            		}
            		else {
HXLINE( 598)			altValue = 0;
            		}
HXLINE( 599)		{
HXLINE( 599)			int _g = 0;
HXDLIN( 599)			int _g1 = ::ClientPrefs_obj::keyBinds->get_length();
HXDLIN( 599)			while((_g < _g1)){
HXLINE( 599)				_g = (_g + 1);
HXDLIN( 599)				int i = (_g - 1);
HXLINE( 600)				if (::hx::IsEq( ::ClientPrefs_obj::keyBinds->__get(i)->__GetItem(1),this->optionShit->__get(::ControlsSubstate_obj::curSelected) )) {
HXLINE( 601)					return ((i * 2) + altValue);
            				}
            			}
            		}
HXLINE( 604)		return -1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ControlsSubstate_obj,getSelectedKey,return )

void ControlsSubstate_obj::addBindTexts( ::Alphabet optionText){
            	HX_GC_STACKFRAME(&_hx_pos_0105b02946ff30ba_607_addBindTexts)
HXLINE( 608)		 ::AttachedText text1 =  ::AttachedText_obj::__alloc( HX_CTX ,::InputFormatter_obj::getKeyName(this->controlArray->__get(this->grpInputs->length)),400,-55,null());
HXLINE( 609)		text1->setPosition((optionText->x + 400),(optionText->y - ( (Float)(55) )));
HXLINE( 610)		text1->sprTracker = optionText;
HXLINE( 611)		this->grpInputs->push(text1);
HXLINE( 612)		this->add(text1);
HXLINE( 614)		 ::AttachedText text2 =  ::AttachedText_obj::__alloc( HX_CTX ,::InputFormatter_obj::getKeyName(this->controlArray->__get(this->grpInputs->length)),650,-55,null());
HXLINE( 615)		text2->setPosition((optionText->x + 650),(optionText->y - ( (Float)(55) )));
HXLINE( 616)		text2->sprTracker = optionText;
HXLINE( 617)		text2->isAlt = true;
HXLINE( 618)		this->grpInputs->push(text2);
HXLINE( 619)		this->add(text2);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ControlsSubstate_obj,addBindTexts,(void))

void ControlsSubstate_obj::reloadKeys(){
            	HX_STACKFRAME(&_hx_pos_0105b02946ff30ba_622_reloadKeys)
HXLINE( 623)		while((this->grpInputs->length > 0)){
HXLINE( 624)			 ::AttachedText item = this->grpInputs->__get(0).StaticCast<  ::AttachedText >();
HXLINE( 625)			this->grpInputs->remove(item);
HXLINE( 626)			this->remove(item,null());
            		}
HXLINE( 629)		{
HXLINE( 629)			int _g = 0;
HXDLIN( 629)			int _g1 = this->grpOptions->length;
HXDLIN( 629)			while((_g < _g1)){
HXLINE( 629)				_g = (_g + 1);
HXDLIN( 629)				int i = (_g - 1);
HXLINE( 630)				if (!(this->unselectableCheck(i,true))) {
HXLINE( 631)					this->addBindTexts(Dynamic( this->grpOptions->members->__get(i)).StaticCast<  ::Alphabet >());
            				}
            			}
            		}
HXLINE( 636)		int bullShit = 0;
HXLINE( 637)		{
HXLINE( 637)			int _g2 = 0;
HXDLIN( 637)			int _g3 = this->grpInputs->length;
HXDLIN( 637)			while((_g2 < _g3)){
HXLINE( 637)				_g2 = (_g2 + 1);
HXDLIN( 637)				int i = (_g2 - 1);
HXLINE( 638)				this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->set_alpha(((Float)0.6));
            			}
            		}
HXLINE( 641)		{
HXLINE( 641)			int _g4 = 0;
HXDLIN( 641)			::Array< ::Dynamic> _g5 = this->grpOptions->members;
HXDLIN( 641)			while((_g4 < _g5->length)){
HXLINE( 641)				 ::Alphabet item = _g5->__get(_g4).StaticCast<  ::Alphabet >();
HXDLIN( 641)				_g4 = (_g4 + 1);
HXLINE( 642)				item->targetY = ( (Float)((bullShit - ::ControlsSubstate_obj::curSelected)) );
HXLINE( 643)				bullShit = (bullShit + 1);
HXLINE( 645)				if (!(this->unselectableCheck((bullShit - 1),null()))) {
HXLINE( 646)					item->set_alpha(((Float)0.6));
HXLINE( 647)					if ((item->targetY == 0)) {
HXLINE( 648)						item->set_alpha(( (Float)(1) ));
HXLINE( 649)						{
HXLINE( 649)							int _g = 0;
HXDLIN( 649)							int _g1 = this->grpInputs->length;
HXDLIN( 649)							while((_g < _g1)){
HXLINE( 649)								_g = (_g + 1);
HXDLIN( 649)								int i = (_g - 1);
HXLINE( 650)								bool _hx_tmp;
HXDLIN( 650)								if (::hx::IsInstanceEq( this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->sprTracker,item )) {
HXLINE( 650)									_hx_tmp = (this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->isAlt == ::ControlsSubstate_obj::curAlt);
            								}
            								else {
HXLINE( 650)									_hx_tmp = false;
            								}
HXDLIN( 650)								if (_hx_tmp) {
HXLINE( 651)									this->grpInputs->__get(i).StaticCast<  ::AttachedText >()->set_alpha(( (Float)(1) ));
            								}
            							}
            						}
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ControlsSubstate_obj,reloadKeys,(void))

int ControlsSubstate_obj::curSelected;

bool ControlsSubstate_obj::curAlt;

::String ControlsSubstate_obj::defaultKey;


::hx::ObjectPtr< ControlsSubstate_obj > ControlsSubstate_obj::__new() {
	::hx::ObjectPtr< ControlsSubstate_obj > __this = new ControlsSubstate_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< ControlsSubstate_obj > ControlsSubstate_obj::__alloc(::hx::Ctx *_hx_ctx) {
	ControlsSubstate_obj *__this = (ControlsSubstate_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ControlsSubstate_obj), true, "ControlsSubstate"));
	*(void **)__this = ControlsSubstate_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

ControlsSubstate_obj::ControlsSubstate_obj()
{
}

void ControlsSubstate_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ControlsSubstate);
	HX_MARK_MEMBER_NAME(optionShit,"optionShit");
	HX_MARK_MEMBER_NAME(grpOptions,"grpOptions");
	HX_MARK_MEMBER_NAME(grpInputs,"grpInputs");
	HX_MARK_MEMBER_NAME(controlArray,"controlArray");
	HX_MARK_MEMBER_NAME(rebindingKey,"rebindingKey");
	HX_MARK_MEMBER_NAME(nextAccept,"nextAccept");
	HX_MARK_MEMBER_NAME(leaving,"leaving");
	HX_MARK_MEMBER_NAME(bindingTime,"bindingTime");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ControlsSubstate_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(optionShit,"optionShit");
	HX_VISIT_MEMBER_NAME(grpOptions,"grpOptions");
	HX_VISIT_MEMBER_NAME(grpInputs,"grpInputs");
	HX_VISIT_MEMBER_NAME(controlArray,"controlArray");
	HX_VISIT_MEMBER_NAME(rebindingKey,"rebindingKey");
	HX_VISIT_MEMBER_NAME(nextAccept,"nextAccept");
	HX_VISIT_MEMBER_NAME(leaving,"leaving");
	HX_VISIT_MEMBER_NAME(bindingTime,"bindingTime");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ControlsSubstate_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"leaving") ) { return ::hx::Val( leaving ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"grpInputs") ) { return ::hx::Val( grpInputs ); }
		if (HX_FIELD_EQ(inName,"changeAlt") ) { return ::hx::Val( changeAlt_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"optionShit") ) { return ::hx::Val( optionShit ); }
		if (HX_FIELD_EQ(inName,"grpOptions") ) { return ::hx::Val( grpOptions ); }
		if (HX_FIELD_EQ(inName,"nextAccept") ) { return ::hx::Val( nextAccept ); }
		if (HX_FIELD_EQ(inName,"reloadKeys") ) { return ::hx::Val( reloadKeys_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bindingTime") ) { return ::hx::Val( bindingTime ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"controlArray") ) { return ::hx::Val( controlArray ); }
		if (HX_FIELD_EQ(inName,"rebindingKey") ) { return ::hx::Val( rebindingKey ); }
		if (HX_FIELD_EQ(inName,"addBindTexts") ) { return ::hx::Val( addBindTexts_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getSelectedKey") ) { return ::hx::Val( getSelectedKey_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"unselectableCheck") ) { return ::hx::Val( unselectableCheck_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool ControlsSubstate_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"curAlt") ) { outValue = ( curAlt ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"defaultKey") ) { outValue = ( defaultKey ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { outValue = ( curSelected ); return true; }
	}
	return false;
}

::hx::Val ControlsSubstate_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"leaving") ) { leaving=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"grpInputs") ) { grpInputs=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"optionShit") ) { optionShit=inValue.Cast< ::Array< ::String > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"grpOptions") ) { grpOptions=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nextAccept") ) { nextAccept=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bindingTime") ) { bindingTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"controlArray") ) { controlArray=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"rebindingKey") ) { rebindingKey=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ControlsSubstate_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"curAlt") ) { curAlt=ioValue.Cast< bool >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"defaultKey") ) { defaultKey=ioValue.Cast< ::String >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void ControlsSubstate_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("optionShit",d5,2d,ee,91));
	outFields->push(HX_("grpOptions",f9,45,d8,00));
	outFields->push(HX_("grpInputs",ee,3e,7e,59));
	outFields->push(HX_("controlArray",fc,20,68,ea));
	outFields->push(HX_("rebindingKey",cd,70,6f,a8));
	outFields->push(HX_("nextAccept",5b,44,38,c0));
	outFields->push(HX_("leaving",f4,09,47,15));
	outFields->push(HX_("bindingTime",f2,09,cb,be));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ControlsSubstate_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::String > */ ,(int)offsetof(ControlsSubstate_obj,optionShit),HX_("optionShit",d5,2d,ee,91)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(ControlsSubstate_obj,grpOptions),HX_("grpOptions",f9,45,d8,00)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(ControlsSubstate_obj,grpInputs),HX_("grpInputs",ee,3e,7e,59)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(ControlsSubstate_obj,controlArray),HX_("controlArray",fc,20,68,ea)},
	{::hx::fsInt,(int)offsetof(ControlsSubstate_obj,rebindingKey),HX_("rebindingKey",cd,70,6f,a8)},
	{::hx::fsInt,(int)offsetof(ControlsSubstate_obj,nextAccept),HX_("nextAccept",5b,44,38,c0)},
	{::hx::fsBool,(int)offsetof(ControlsSubstate_obj,leaving),HX_("leaving",f4,09,47,15)},
	{::hx::fsFloat,(int)offsetof(ControlsSubstate_obj,bindingTime),HX_("bindingTime",f2,09,cb,be)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo ControlsSubstate_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &ControlsSubstate_obj::curSelected,HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsBool,(void *) &ControlsSubstate_obj::curAlt,HX_("curAlt",89,9b,c2,3e)},
	{::hx::fsString,(void *) &ControlsSubstate_obj::defaultKey,HX_("defaultKey",5e,97,fe,25)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String ControlsSubstate_obj_sMemberFields[] = {
	HX_("optionShit",d5,2d,ee,91),
	HX_("grpOptions",f9,45,d8,00),
	HX_("grpInputs",ee,3e,7e,59),
	HX_("controlArray",fc,20,68,ea),
	HX_("rebindingKey",cd,70,6f,a8),
	HX_("nextAccept",5b,44,38,c0),
	HX_("leaving",f4,09,47,15),
	HX_("bindingTime",f2,09,cb,be),
	HX_("update",09,86,05,87),
	HX_("changeSelection",bc,98,b5,48),
	HX_("changeAlt",99,a5,f7,1d),
	HX_("unselectableCheck",19,58,ce,19),
	HX_("getSelectedKey",0e,15,a7,b7),
	HX_("addBindTexts",c8,f9,1e,b0),
	HX_("reloadKeys",ed,81,0e,92),
	::String(null()) };

static void ControlsSubstate_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ControlsSubstate_obj::curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(ControlsSubstate_obj::curAlt,"curAlt");
	HX_MARK_MEMBER_NAME(ControlsSubstate_obj::defaultKey,"defaultKey");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ControlsSubstate_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ControlsSubstate_obj::curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(ControlsSubstate_obj::curAlt,"curAlt");
	HX_VISIT_MEMBER_NAME(ControlsSubstate_obj::defaultKey,"defaultKey");
};

#endif

::hx::Class ControlsSubstate_obj::__mClass;

static ::String ControlsSubstate_obj_sStaticFields[] = {
	HX_("curSelected",fb,eb,ab,32),
	HX_("curAlt",89,9b,c2,3e),
	HX_("defaultKey",5e,97,fe,25),
	::String(null())
};

void ControlsSubstate_obj::__register()
{
	ControlsSubstate_obj _hx_dummy;
	ControlsSubstate_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ControlsSubstate",47,e1,a2,45);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ControlsSubstate_obj::__GetStatic;
	__mClass->mSetStaticField = &ControlsSubstate_obj::__SetStatic;
	__mClass->mMarkFunc = ControlsSubstate_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ControlsSubstate_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ControlsSubstate_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ControlsSubstate_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ControlsSubstate_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ControlsSubstate_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ControlsSubstate_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ControlsSubstate_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_0105b02946ff30ba_396_boot)
HXDLIN( 396)		curSelected = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_0105b02946ff30ba_397_boot)
HXDLIN( 397)		curAlt = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_0105b02946ff30ba_399_boot)
HXDLIN( 399)		defaultKey = HX_("Reset to Default Keys",47,5b,97,3d);
            	}
}

