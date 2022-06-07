#include <hxcpp.h>

#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_AttachedText
#include <AttachedText.h>
#endif
#ifndef INCLUDED_Character
#include <Character.h>
#endif
#ifndef INCLUDED_CheckboxThingie
#include <CheckboxThingie.h>
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_MusicBeatState
#include <MusicBeatState.h>
#endif
#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_OptionsState
#include <OptionsState.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
#endif
#ifndef INCLUDED_PreferencesSubstate
#include <PreferencesSubstate.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
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
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_util_FlxAxes
#include <flixel/util/FlxAxes.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_FPS
#include <openfl/display/FPS.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_641e954371eb7a1d_662_new,"PreferencesSubstate","new",0xf9ee38bb,"PreferencesSubstate.new","OptionsState.hx",662,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_641e954371eb7a1d_790_update,"PreferencesSubstate","update",0x0402888e,"PreferencesSubstate.update","OptionsState.hx",790,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_641e954371eb7a1d_802_update,"PreferencesSubstate","update",0x0402888e,"PreferencesSubstate.update","OptionsState.hx",802,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_641e954371eb7a1d_805_update,"PreferencesSubstate","update",0x0402888e,"PreferencesSubstate.update","OptionsState.hx",805,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_641e954371eb7a1d_963_changeSelection,"PreferencesSubstate","changeSelection",0x3fb89d97,"PreferencesSubstate.changeSelection","OptionsState.hx",963,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_641e954371eb7a1d_1058_reloadValues,"PreferencesSubstate","reloadValues",0xc2328860,"PreferencesSubstate.reloadValues","OptionsState.hx",1058,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_641e954371eb7a1d_1128_unselectableCheck,"PreferencesSubstate","unselectableCheck",0x1b4089b4,"PreferencesSubstate.unselectableCheck","OptionsState.hx",1128,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_641e954371eb7a1d_664_boot,"PreferencesSubstate","boot",0xae9c6b77,"PreferencesSubstate.boot","OptionsState.hx",664,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_641e954371eb7a1d_665_boot,"PreferencesSubstate","boot",0xae9c6b77,"PreferencesSubstate.boot","OptionsState.hx",665,0x342db2ab)
static const ::String _hx_array_data_bf26bf49_28[] = {
	HX_("GRAPHICS",cb,88,ed,6b),HX_("GAMEPLAY",e6,92,2c,25),
};
HX_LOCAL_STACK_FRAME(_hx_pos_641e954371eb7a1d_669_boot,"PreferencesSubstate","boot",0xae9c6b77,"PreferencesSubstate.boot","OptionsState.hx",669,0x342db2ab)
static const ::String _hx_array_data_bf26bf49_30[] = {
	HX_("Framerate",6d,c5,1e,f0),HX_("Note Delay",d5,70,f0,95),HX_("Note Underlay Alpha",d8,86,fd,a4),
};
HX_LOCAL_STACK_FRAME(_hx_pos_641e954371eb7a1d_675_boot,"PreferencesSubstate","boot",0xae9c6b77,"PreferencesSubstate.boot","OptionsState.hx",675,0x342db2ab)
static const ::String _hx_array_data_bf26bf49_32[] = {
	HX_("GRAPHICS",cb,88,ed,6b),HX_("Low Quality",f3,10,75,e8),HX_("Anti-Aliasing",9d,02,6c,80),HX_("Persistent Cached Data",ff,eb,03,14),HX_("Framerate",6d,c5,1e,f0),HX_("GAMEPLAY",e6,92,2c,25),HX_("Downscroll",0f,4a,85,46),HX_("Middlescroll",42,a5,d6,f5),HX_("Ghost Tapping",44,6c,9f,40),HX_("Note Delay",d5,70,f0,95),HX_("Note Splashes",83,c7,78,74),HX_("Note Underlay Alpha",d8,86,fd,a4),HX_("Hide HUD",59,3a,04,5d),HX_("Hide Song Length",93,89,0c,bf),HX_("Flashing Lights",0b,e4,0d,04),HX_("Window Moving",be,58,aa,69),HX_("Hit Sounds",31,73,43,1e),HX_("Camera Zooms",45,a6,9b,43),HX_("Eyesores",53,93,13,f5),HX_("More Score Info",c7,fa,42,91),HX_("Miss Sounds",68,d1,fe,ae),HX_("Anti-Spam",94,86,65,16),HX_("FPS Counter",85,ef,54,c9),
};

void PreferencesSubstate_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_641e954371eb7a1d_662_new)
HXLINE( 788)		this->holdTime = ((Float)0);
HXLINE( 787)		this->nextAccept = 5;
HXLINE( 711)		this->showCharacter = null();
HXLINE( 709)		this->textNumber = ::Array_obj< int >::__new(0);
HXLINE( 707)		this->checkboxNumber = ::Array_obj< int >::__new(0);
HXLINE( 706)		this->checkboxArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 716)		super::__construct();
HXLINE( 718)		this->showCharacter =  ::Character_obj::__alloc( HX_CTX ,( (Float)(840) ),( (Float)(170) ),HX_("bf",c4,55,00,00),true);
HXLINE( 719)		 ::Character _hx_tmp = this->showCharacter;
HXDLIN( 719)		_hx_tmp->setGraphicSize(::Std_obj::_hx_int((this->showCharacter->get_width() * ((Float)0.8))),null());
HXLINE( 720)		this->showCharacter->updateHitbox();
HXLINE( 721)		this->showCharacter->dance();
HXLINE( 722)		this->add(this->showCharacter);
HXLINE( 723)		this->showCharacter->set_visible(false);
HXLINE( 725)		this->grpOptions =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 726)		this->add(this->grpOptions);
HXLINE( 728)		this->grpTexts =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 729)		this->add(this->grpTexts);
HXLINE( 731)		{
HXLINE( 731)			int _g = 0;
HXDLIN( 731)			int _g1 = ::PreferencesSubstate_obj::options->length;
HXDLIN( 731)			while((_g < _g1)){
HXLINE( 731)				_g = (_g + 1);
HXDLIN( 731)				int i = (_g - 1);
HXLINE( 733)				bool isCentered = this->unselectableCheck(i);
HXLINE( 734)				 ::Alphabet optionText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)((70 * i)) ),::PreferencesSubstate_obj::options->__get(i),false,false,null(),null());
HXLINE( 735)				optionText->isMenuItem = true;
HXLINE( 736)				if (isCentered) {
HXLINE( 737)					optionText->screenCenter(::flixel::util::FlxAxes_obj::X_dyn());
HXLINE( 738)					optionText->forceX = optionText->x;
            				}
            				else {
HXLINE( 740)					optionText->set_x((optionText->x + 300));
HXLINE( 741)					optionText->forceX = ( (Float)(300) );
            				}
HXLINE( 743)				optionText->yMult = ( (Float)(90) );
HXLINE( 744)				optionText->targetY = ( (Float)(i) );
HXLINE( 745)				this->grpOptions->add(optionText).StaticCast<  ::Alphabet >();
HXLINE( 747)				if (!(isCentered)) {
HXLINE( 748)					bool useCheckbox = true;
HXLINE( 749)					{
HXLINE( 749)						int _g = 0;
HXDLIN( 749)						int _g1 = ::PreferencesSubstate_obj::noCheckbox->length;
HXDLIN( 749)						while((_g < _g1)){
HXLINE( 749)							_g = (_g + 1);
HXDLIN( 749)							int j = (_g - 1);
HXLINE( 750)							if ((::PreferencesSubstate_obj::options->__get(i) == ::PreferencesSubstate_obj::noCheckbox->__get(j))) {
HXLINE( 751)								useCheckbox = false;
HXLINE( 752)								goto _hx_goto_1;
            							}
            						}
            						_hx_goto_1:;
            					}
HXLINE( 756)					if (useCheckbox) {
HXLINE( 757)						 ::CheckboxThingie checkbox =  ::CheckboxThingie_obj::__alloc( HX_CTX ,(optionText->x - ( (Float)(105) )),optionText->y,false);
HXLINE( 758)						checkbox->sprTracker = optionText;
HXLINE( 759)						this->checkboxArray->push(checkbox);
HXLINE( 760)						this->checkboxNumber->push(i);
HXLINE( 761)						this->add(checkbox);
            					}
            					else {
HXLINE( 763)						 ::AttachedText valueText =  ::AttachedText_obj::__alloc( HX_CTX ,HX_("0",30,00,00,00),(optionText->get_width() + 80),null(),null());
HXLINE( 764)						valueText->sprTracker = optionText;
HXLINE( 765)						this->grpTexts->add(valueText).StaticCast<  ::AttachedText >();
HXLINE( 766)						this->textNumber->push(i);
            					}
            				}
            			}
            		}
HXLINE( 771)		this->descText =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,50,600,1180,HX_("",00,00,00,00),32,null());
HXLINE( 772)		this->descText->setFormat((HX_("assets/fonts/",37,ff,a5,9c) + HX_("vcr.ttf",9d,d2,a7,82)),32,-1,HX_("center",d5,25,db,05),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),-16777216,null());
HXLINE( 773)		this->descText->scrollFactor->set(null(),null());
HXLINE( 774)		this->descText->set_borderSize(((Float)2.4));
HXLINE( 775)		this->add(this->descText);
HXLINE( 777)		{
HXLINE( 777)			int _g2 = 0;
HXDLIN( 777)			int _g3 = ::PreferencesSubstate_obj::options->length;
HXDLIN( 777)			while((_g2 < _g3)){
HXLINE( 777)				_g2 = (_g2 + 1);
HXDLIN( 777)				int i = (_g2 - 1);
HXLINE( 778)				if (!(this->unselectableCheck(i))) {
HXLINE( 779)					::PreferencesSubstate_obj::curSelected = i;
HXLINE( 780)					goto _hx_goto_2;
            				}
            			}
            			_hx_goto_2:;
            		}
HXLINE( 783)		this->changeSelection(null());
HXLINE( 784)		this->reloadValues();
            	}

Dynamic PreferencesSubstate_obj::__CreateEmpty() { return new PreferencesSubstate_obj; }

void *PreferencesSubstate_obj::_hx_vtable = 0;

Dynamic PreferencesSubstate_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PreferencesSubstate_obj > _hx_result = new PreferencesSubstate_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PreferencesSubstate_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x32c94489) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x32c94489;
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

void PreferencesSubstate_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_641e954371eb7a1d_790_update)
HXLINE( 791)		if (::PlayerSettings_obj::player1->controls->_ui_upP->check()) {
HXLINE( 793)			this->changeSelection(-1);
            		}
HXLINE( 795)		if (::PlayerSettings_obj::player1->controls->_ui_downP->check()) {
HXLINE( 797)			this->changeSelection(1);
            		}
HXLINE( 800)		if (::PlayerSettings_obj::player1->controls->_back->check()) {
            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            			void _hx_run( ::Alphabet spr){
            				HX_STACKFRAME(&_hx_pos_641e954371eb7a1d_802_update)
HXLINE( 802)				spr->set_alpha(( (Float)(0) ));
            			}
            			HX_END_LOCAL_FUNC1((void))

            			HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            			void _hx_run( ::AttachedText spr){
            				HX_STACKFRAME(&_hx_pos_641e954371eb7a1d_805_update)
HXLINE( 805)				spr->set_alpha(( (Float)(0) ));
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE( 801)			this->grpOptions->forEachAlive( ::Dynamic(new _hx_Closure_0()),null());
HXLINE( 804)			this->grpTexts->forEachAlive( ::Dynamic(new _hx_Closure_1()),null());
HXLINE( 807)			{
HXLINE( 807)				int _g = 0;
HXDLIN( 807)				int _g1 = this->checkboxArray->length;
HXDLIN( 807)				while((_g < _g1)){
HXLINE( 807)					_g = (_g + 1);
HXDLIN( 807)					int i = (_g - 1);
HXLINE( 808)					 ::CheckboxThingie spr = this->checkboxArray->__get(i).StaticCast<  ::CheckboxThingie >();
HXLINE( 809)					if (::hx::IsNotNull( spr )) {
HXLINE( 810)						spr->set_alpha(( (Float)(0) ));
            					}
            				}
            			}
HXLINE( 813)			if (::hx::IsNotNull( this->showCharacter )) {
HXLINE( 814)				this->showCharacter->set_alpha(( (Float)(0) ));
            			}
HXLINE( 816)			this->descText->set_alpha(( (Float)(0) ));
HXLINE( 817)			this->close();
HXLINE( 818)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 818)			_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
            		}
HXLINE( 821)		bool usesCheckbox = true;
HXLINE( 822)		{
HXLINE( 822)			int _g = 0;
HXDLIN( 822)			int _g1 = ::PreferencesSubstate_obj::noCheckbox->length;
HXDLIN( 822)			while((_g < _g1)){
HXLINE( 822)				_g = (_g + 1);
HXDLIN( 822)				int i = (_g - 1);
HXLINE( 823)				if ((::PreferencesSubstate_obj::options->__get(::PreferencesSubstate_obj::curSelected) == ::PreferencesSubstate_obj::noCheckbox->__get(i))) {
HXLINE( 824)					usesCheckbox = false;
HXLINE( 825)					goto _hx_goto_5;
            				}
            			}
            			_hx_goto_5:;
            		}
HXLINE( 829)		if (usesCheckbox) {
HXLINE( 830)			bool _hx_tmp;
HXDLIN( 830)			if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 830)				_hx_tmp = (this->nextAccept <= 0);
            			}
            			else {
HXLINE( 830)				_hx_tmp = false;
            			}
HXDLIN( 830)			if (_hx_tmp) {
HXLINE( 831)				::String _hx_switch_0 = ::PreferencesSubstate_obj::options->__get(::PreferencesSubstate_obj::curSelected);
            				if (  (_hx_switch_0==HX_("Anti-Aliasing",9d,02,6c,80)) ){
HXLINE( 841)					::ClientPrefs_obj::globalAntialiasing = !(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 842)					this->showCharacter->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 843)					{
HXLINE( 843)						 ::Dynamic filter = null();
HXDLIN( 843)						 ::flixel::group::FlxTypedGroupIterator item =  ::flixel::group::FlxTypedGroupIterator_obj::__alloc( HX_CTX ,this->grpOptions->members,filter);
HXDLIN( 843)						while(item->hasNext()){
HXLINE( 843)							 ::Alphabet item1 = item->next().StaticCast<  ::Alphabet >();
HXLINE( 844)							item1->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
            						}
            					}
HXLINE( 846)					{
HXLINE( 846)						int _g = 0;
HXDLIN( 846)						int _g1 = this->checkboxArray->length;
HXDLIN( 846)						while((_g < _g1)){
HXLINE( 846)							_g = (_g + 1);
HXDLIN( 846)							int i = (_g - 1);
HXLINE( 847)							 ::CheckboxThingie spr = this->checkboxArray->__get(i).StaticCast<  ::CheckboxThingie >();
HXLINE( 848)							if (::hx::IsNotNull( spr )) {
HXLINE( 849)								spr->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
            							}
            						}
            					}
HXLINE( 852)					::OptionsState_obj::menuBG->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 840)					goto _hx_goto_6;
            				}
            				if (  (_hx_switch_0==HX_("Anti-Spam",94,86,65,16)) ){
HXLINE( 886)					::ClientPrefs_obj::antispam = !(::ClientPrefs_obj::antispam);
HXDLIN( 886)					goto _hx_goto_6;
            				}
            				if (  (_hx_switch_0==HX_("Camera Zooms",45,a6,9b,43)) ){
HXLINE( 889)					::ClientPrefs_obj::camZooms = !(::ClientPrefs_obj::camZooms);
HXDLIN( 889)					goto _hx_goto_6;
            				}
            				if (  (_hx_switch_0==HX_("Downscroll",0f,4a,85,46)) ){
HXLINE( 867)					::ClientPrefs_obj::downScroll = !(::ClientPrefs_obj::downScroll);
HXDLIN( 867)					goto _hx_goto_6;
            				}
            				if (  (_hx_switch_0==HX_("Eyesores",53,93,13,f5)) ){
HXLINE( 877)					::ClientPrefs_obj::eyesores = !(::ClientPrefs_obj::eyesores);
HXDLIN( 877)					goto _hx_goto_6;
            				}
            				if (  (_hx_switch_0==HX_("FPS Counter",85,ef,54,c9)) ){
HXLINE( 833)					::ClientPrefs_obj::showFPS = !(::ClientPrefs_obj::showFPS);
HXLINE( 834)					if (::hx::IsNotNull( ::Main_obj::fpsVar )) {
HXLINE( 835)						::Main_obj::fpsVar->set_visible(::ClientPrefs_obj::showFPS);
            					}
HXLINE( 832)					goto _hx_goto_6;
            				}
            				if (  (_hx_switch_0==HX_("Flashing Lights",0b,e4,0d,04)) ){
HXLINE( 858)					::ClientPrefs_obj::flashing = !(::ClientPrefs_obj::flashing);
HXDLIN( 858)					goto _hx_goto_6;
            				}
            				if (  (_hx_switch_0==HX_("Ghost Tapping",44,6c,9f,40)) ){
HXLINE( 874)					::ClientPrefs_obj::ghostTapping = !(::ClientPrefs_obj::ghostTapping);
HXDLIN( 874)					goto _hx_goto_6;
            				}
            				if (  (_hx_switch_0==HX_("Hide HUD",59,3a,04,5d)) ){
HXLINE( 898)					::ClientPrefs_obj::hideHud = !(::ClientPrefs_obj::hideHud);
HXDLIN( 898)					goto _hx_goto_6;
            				}
            				if (  (_hx_switch_0==HX_("Hide Song Length",93,89,0c,bf)) ){
HXLINE( 905)					::ClientPrefs_obj::hideTime = !(::ClientPrefs_obj::hideTime);
HXDLIN( 905)					goto _hx_goto_6;
            				}
            				if (  (_hx_switch_0==HX_("Hit Sounds",31,73,43,1e)) ){
HXLINE( 895)					::ClientPrefs_obj::hitSounds = !(::ClientPrefs_obj::hitSounds);
HXDLIN( 895)					goto _hx_goto_6;
            				}
            				if (  (_hx_switch_0==HX_("Low Quality",f3,10,75,e8)) ){
HXLINE( 838)					::ClientPrefs_obj::lowQuality = !(::ClientPrefs_obj::lowQuality);
HXDLIN( 838)					goto _hx_goto_6;
            				}
            				if (  (_hx_switch_0==HX_("Middlescroll",42,a5,d6,f5)) ){
HXLINE( 871)					::ClientPrefs_obj::middleScroll = !(::ClientPrefs_obj::middleScroll);
HXDLIN( 871)					goto _hx_goto_6;
            				}
            				if (  (_hx_switch_0==HX_("Miss Sounds",68,d1,fe,ae)) ){
HXLINE( 880)					::ClientPrefs_obj::missSounds = !(::ClientPrefs_obj::missSounds);
HXDLIN( 880)					goto _hx_goto_6;
            				}
            				if (  (_hx_switch_0==HX_("More Score Info",c7,fa,42,91)) ){
HXLINE( 883)					::ClientPrefs_obj::moreScoreInfo = !(::ClientPrefs_obj::moreScoreInfo);
HXDLIN( 883)					goto _hx_goto_6;
            				}
            				if (  (_hx_switch_0==HX_("Note Splashes",83,c7,78,74)) ){
HXLINE( 855)					::ClientPrefs_obj::noteSplashes = !(::ClientPrefs_obj::noteSplashes);
HXDLIN( 855)					goto _hx_goto_6;
            				}
            				if (  (_hx_switch_0==HX_("Persistent Cached Data",ff,eb,03,14)) ){
HXLINE( 901)					::ClientPrefs_obj::imagesPersist = !(::ClientPrefs_obj::imagesPersist);
HXLINE( 902)					::flixel::graphics::FlxGraphic_obj::defaultPersist = ::ClientPrefs_obj::imagesPersist;
HXLINE( 900)					goto _hx_goto_6;
            				}
            				if (  (_hx_switch_0==HX_("Swearing",d0,49,69,67)) ){
HXLINE( 864)					::ClientPrefs_obj::cursing = !(::ClientPrefs_obj::cursing);
HXDLIN( 864)					goto _hx_goto_6;
            				}
            				if (  (_hx_switch_0==HX_("Violence",7b,1a,3a,19)) ){
HXLINE( 861)					::ClientPrefs_obj::violence = !(::ClientPrefs_obj::violence);
HXDLIN( 861)					goto _hx_goto_6;
            				}
            				if (  (_hx_switch_0==HX_("Window Moving",be,58,aa,69)) ){
HXLINE( 892)					::ClientPrefs_obj::windowMove = !(::ClientPrefs_obj::windowMove);
HXDLIN( 892)					goto _hx_goto_6;
            				}
            				_hx_goto_6:;
HXLINE( 907)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 907)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 908)				this->reloadValues();
            			}
            		}
            		else {
HXLINE( 911)			bool _hx_tmp;
HXDLIN( 911)			if (!(::PlayerSettings_obj::player1->controls->_ui_left->check())) {
HXLINE( 911)				_hx_tmp = ::PlayerSettings_obj::player1->controls->_ui_right->check();
            			}
            			else {
HXLINE( 911)				_hx_tmp = true;
            			}
HXDLIN( 911)			if (_hx_tmp) {
HXLINE( 912)				int add;
HXDLIN( 912)				if (::PlayerSettings_obj::player1->controls->_ui_left->check()) {
HXLINE( 912)					add = -1;
            				}
            				else {
HXLINE( 912)					add = 1;
            				}
HXLINE( 914)				Float addFloat;
HXDLIN( 914)				if (::PlayerSettings_obj::player1->controls->_ui_left->check()) {
HXLINE( 914)					addFloat = ((Float)-0.1);
            				}
            				else {
HXLINE( 914)					addFloat = ((Float)0.1);
            				}
HXLINE( 916)				bool _hx_tmp;
HXDLIN( 916)				bool _hx_tmp1;
HXDLIN( 916)				if (!((this->holdTime > ((Float)0.5)))) {
HXLINE( 916)					_hx_tmp1 = ::PlayerSettings_obj::player1->controls->_ui_leftP->check();
            				}
            				else {
HXLINE( 916)					_hx_tmp1 = true;
            				}
HXDLIN( 916)				if (!(_hx_tmp1)) {
HXLINE( 916)					_hx_tmp = ::PlayerSettings_obj::player1->controls->_ui_rightP->check();
            				}
            				else {
HXLINE( 916)					_hx_tmp = true;
            				}
HXDLIN( 916)				if (_hx_tmp) {
HXLINE( 917)					::String _hx_switch_1 = ::PreferencesSubstate_obj::options->__get(::PreferencesSubstate_obj::curSelected);
            					if (  (_hx_switch_1==HX_("Framerate",6d,c5,1e,f0)) ){
HXLINE( 919)						 ::Dynamic _hx_tmp = ::hx::ClassOf< ::ClientPrefs >();
HXDLIN( 919)						::ClientPrefs_obj::framerate = (::ClientPrefs_obj::framerate + add);
HXLINE( 920)						if ((::ClientPrefs_obj::framerate < 60)) {
HXLINE( 920)							::ClientPrefs_obj::framerate = 60;
            						}
            						else {
HXLINE( 921)							if ((::ClientPrefs_obj::framerate > 240)) {
HXLINE( 921)								::ClientPrefs_obj::framerate = 240;
            							}
            						}
HXLINE( 923)						if ((::ClientPrefs_obj::framerate > ::flixel::FlxG_obj::drawFramerate)) {
HXLINE( 924)							::flixel::FlxG_obj::set_updateFramerate(::ClientPrefs_obj::framerate);
HXLINE( 925)							::flixel::FlxG_obj::set_drawFramerate(::ClientPrefs_obj::framerate);
            						}
            						else {
HXLINE( 927)							::flixel::FlxG_obj::set_drawFramerate(::ClientPrefs_obj::framerate);
HXLINE( 928)							::flixel::FlxG_obj::set_updateFramerate(::ClientPrefs_obj::framerate);
            						}
HXLINE( 918)						goto _hx_goto_9;
            					}
            					if (  (_hx_switch_1==HX_("Note Delay",d5,70,f0,95)) ){
HXLINE( 931)						int mult = 1;
HXLINE( 932)						if ((this->holdTime > ((Float)1.5))) {
HXLINE( 933)							mult = 2;
            						}
HXLINE( 935)						 ::Dynamic _hx_tmp = ::hx::ClassOf< ::ClientPrefs >();
HXDLIN( 935)						::ClientPrefs_obj::noteOffset = (::ClientPrefs_obj::noteOffset + (add * mult));
HXLINE( 936)						if ((::ClientPrefs_obj::noteOffset < 0)) {
HXLINE( 936)							::ClientPrefs_obj::noteOffset = 0;
            						}
            						else {
HXLINE( 937)							if ((::ClientPrefs_obj::noteOffset > 500)) {
HXLINE( 937)								::ClientPrefs_obj::noteOffset = 500;
            							}
            						}
HXLINE( 930)						goto _hx_goto_9;
            					}
            					if (  (_hx_switch_1==HX_("Note Underlay Alpha",d8,86,fd,a4)) ){
HXLINE( 939)						 ::Dynamic _hx_tmp = ::hx::ClassOf< ::ClientPrefs >();
HXDLIN( 939)						::ClientPrefs_obj::scrollUnderlayAlpha = (::ClientPrefs_obj::scrollUnderlayAlpha + addFloat);
HXLINE( 940)						if ((::ClientPrefs_obj::scrollUnderlayAlpha < 0)) {
HXLINE( 940)							::ClientPrefs_obj::scrollUnderlayAlpha = ( (Float)(0) );
            						}
            						else {
HXLINE( 941)							if ((::ClientPrefs_obj::scrollUnderlayAlpha >= ((Float)1.1))) {
HXLINE( 941)								::ClientPrefs_obj::scrollUnderlayAlpha = ( (Float)(1) );
            							}
            						}
HXLINE( 938)						goto _hx_goto_9;
            					}
            					_hx_goto_9:;
            				}
HXLINE( 943)				this->reloadValues();
HXLINE( 945)				if ((this->holdTime <= 0)) {
HXLINE( 945)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 945)					_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            				}
HXLINE( 946)				 ::PreferencesSubstate _hx_tmp2 = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 946)				_hx_tmp2->holdTime = (_hx_tmp2->holdTime + elapsed);
            			}
            			else {
HXLINE( 948)				this->holdTime = ( (Float)(0) );
            			}
            		}
HXLINE( 952)		bool _hx_tmp;
HXDLIN( 952)		if (::hx::IsNotNull( this->showCharacter )) {
HXLINE( 952)			_hx_tmp = this->showCharacter->animation->_curAnim->finished;
            		}
            		else {
HXLINE( 952)			_hx_tmp = false;
            		}
HXDLIN( 952)		if (_hx_tmp) {
HXLINE( 953)			this->showCharacter->dance();
            		}
HXLINE( 956)		if ((this->nextAccept > 0)) {
HXLINE( 957)			 ::PreferencesSubstate _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 957)			_hx_tmp->nextAccept = (_hx_tmp->nextAccept - 1);
            		}
HXLINE( 959)		this->super::update(elapsed);
            	}


void PreferencesSubstate_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_641e954371eb7a1d_963_changeSelection)
HXLINE( 964)		while(true){
HXLINE( 965)			 ::Dynamic _hx_tmp = ::hx::ClassOf< ::PreferencesSubstate >();
HXDLIN( 965)			::PreferencesSubstate_obj::curSelected = (::PreferencesSubstate_obj::curSelected + change);
HXLINE( 966)			if ((::PreferencesSubstate_obj::curSelected < 0)) {
HXLINE( 967)				::PreferencesSubstate_obj::curSelected = (::PreferencesSubstate_obj::options->length - 1);
            			}
HXLINE( 968)			if ((::PreferencesSubstate_obj::curSelected >= ::PreferencesSubstate_obj::options->length)) {
HXLINE( 969)				::PreferencesSubstate_obj::curSelected = 0;
            			}
HXLINE( 964)			if (!(this->unselectableCheck(::PreferencesSubstate_obj::curSelected))) {
HXLINE( 964)				goto _hx_goto_13;
            			}
            		}
            		_hx_goto_13:;
HXLINE( 972)		::String daText = HX_("",00,00,00,00);
HXLINE( 973)		::String _hx_switch_0 = ::PreferencesSubstate_obj::options->__get(::PreferencesSubstate_obj::curSelected);
            		if (  (_hx_switch_0==HX_("Anti-Aliasing",9d,02,6c,80)) ){
HXLINE( 985)			daText = HX_("If unchecked, disables anti-aliasing, increases performance\nat the cost of the graphics not looking as smooth.",14,51,dd,4e);
HXDLIN( 985)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("Anti-Spam",94,86,65,16)) ){
HXLINE(1003)			daText = HX_("If unchecked, that stupid anti-spam won't bother you\nwhen beating Bambi's songs.",84,51,5d,1e);
HXDLIN(1003)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("Camera Zooms",45,a6,9b,43)) ){
HXLINE(1015)			daText = HX_("If unchecked, the camera won't zoom in on a beat hit.",fd,78,13,6b);
HXDLIN(1015)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("Downscroll",0f,4a,85,46)) ){
HXLINE( 987)			daText = HX_("If checked, notes go Down instead of Up, simple enough.",0d,a5,bc,fc);
HXDLIN( 987)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("Eyesores",53,93,13,f5)) ){
HXLINE(1001)			daText = HX_("Uncheck this if you're sensitive to flashing colors!",6b,cb,94,e7);
HXDLIN(1001)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("FPS Counter",85,ef,54,c9)) ){
HXLINE( 979)			daText = HX_("If unchecked, hides FPS Counter.",17,fc,a1,74);
HXDLIN( 979)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("Flashing Lights",0b,e4,0d,04)) ){
HXLINE(1009)			daText = HX_("Uncheck this if you're sensitive to flashing lights!",9e,ed,11,12);
HXDLIN(1009)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("Framerate",6d,c5,1e,f0)) ){
HXLINE( 975)			daText = HX_("Pretty self explanatory, isn't it?\nDefault value is 60.",02,87,bf,af);
HXDLIN( 975)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("Ghost Tapping",44,6c,9f,40)) ){
HXLINE( 991)			daText = HX_("If checked, you won't get misses from pressing keys\nwhile there are no notes able to be hit.",c7,46,2f,fa);
HXDLIN( 991)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("Hide HUD",59,3a,04,5d)) ){
HXLINE(1017)			daText = HX_("If checked, hides most HUD elements.",b8,a1,19,66);
HXDLIN(1017)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("Hide Song Length",93,89,0c,bf)) ){
HXLINE(1019)			daText = HX_("If checked, the bar showing how much time is left\nwill be hidden.",a9,6a,6a,bc);
HXDLIN(1019)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("Hit Sounds",31,73,43,1e)) ){
HXLINE(1013)			daText = HX_("If checked, hit sounds will play when you hit a note.",fe,39,eb,94);
HXDLIN(1013)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("Low Quality",f3,10,75,e8)) ){
HXLINE( 981)			daText = HX_("If checked, disables some background details,\ndecreases loading times and improves performance.",14,52,02,0c);
HXDLIN( 981)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("Middlescroll",42,a5,d6,f5)) ){
HXLINE( 989)			daText = HX_("If checked, hides Opponent's notes and your notes get centered.",bc,f9,f6,16);
HXDLIN( 989)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("Miss Sounds",68,d1,fe,ae)) ){
HXLINE(1005)			daText = HX_("If unchecked, missing notes won't make a miss sound.",a7,57,a9,01);
HXDLIN(1005)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("More Score Info",c7,fa,42,91)) ){
HXLINE(1007)			daText = HX_("If checked, you will see your \"Sicks!\", \"Goods\",\n\"Bads\", \"Shits\", combo, and total notes hit.",1b,69,fc,5c);
HXDLIN(1007)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("Note Delay",d5,70,f0,95)) ){
HXLINE( 977)			daText = HX_("Changes how late a note is spawned.\nUseful for preventing audio lag from wireless earphones.",0e,d5,9c,1d);
HXDLIN( 977)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("Note Splashes",83,c7,78,74)) ){
HXLINE( 999)			daText = HX_("If unchecked, hitting \"Sick!\" notes won't show particles.",eb,88,e6,c4);
HXDLIN( 999)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("Note Underlay Alpha",d8,86,fd,a4)) ){
HXLINE( 997)			daText = HX_("How transparent the underlay is.",7d,6d,ed,9b);
HXDLIN( 997)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("Persistent Cached Data",ff,eb,03,14)) ){
HXLINE( 983)			daText = HX_("If checked, images loaded will stay in memory\nuntil the game is closed, this increases memory usage,\nbut basically makes reloading times instant.",98,42,eb,6a);
HXDLIN( 983)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("Swearing",d0,49,69,67)) ){
HXLINE( 993)			daText = HX_("If unchecked, your mom won't be angry at you.",c0,b5,09,e3);
HXDLIN( 993)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("Violence",7b,1a,3a,19)) ){
HXLINE( 995)			daText = HX_("If unchecked, you won't get disgusted as frequently.",90,5d,3a,4e);
HXDLIN( 995)			goto _hx_goto_14;
            		}
            		if (  (_hx_switch_0==HX_("Window Moving",be,58,aa,69)) ){
HXLINE(1011)			daText = HX_("If checked, the window will move in a few songs.\nDisable if you get motion sickness.",43,6a,b4,38);
HXDLIN(1011)			goto _hx_goto_14;
            		}
            		_hx_goto_14:;
HXLINE(1021)		this->descText->set_text(daText);
HXLINE(1023)		int bullShit = 0;
HXLINE(1025)		{
HXLINE(1025)			int _g = 0;
HXDLIN(1025)			::Array< ::Dynamic> _g1 = this->grpOptions->members;
HXDLIN(1025)			while((_g < _g1->length)){
HXLINE(1025)				 ::Alphabet item = _g1->__get(_g).StaticCast<  ::Alphabet >();
HXDLIN(1025)				_g = (_g + 1);
HXLINE(1026)				item->targetY = ( (Float)((bullShit - ::PreferencesSubstate_obj::curSelected)) );
HXLINE(1027)				bullShit = (bullShit + 1);
HXLINE(1029)				if (!(this->unselectableCheck((bullShit - 1)))) {
HXLINE(1030)					item->set_alpha(((Float)0.6));
HXLINE(1031)					if ((item->targetY == 0)) {
HXLINE(1032)						item->set_alpha(( (Float)(1) ));
            					}
HXLINE(1035)					{
HXLINE(1035)						int _g = 0;
HXDLIN(1035)						int _g1 = this->checkboxArray->length;
HXDLIN(1035)						while((_g < _g1)){
HXLINE(1035)							_g = (_g + 1);
HXDLIN(1035)							int j = (_g - 1);
HXLINE(1036)							 ::flixel::FlxSprite tracker = this->checkboxArray->__get(j).StaticCast<  ::CheckboxThingie >()->sprTracker;
HXLINE(1037)							if (::hx::IsInstanceEq( tracker,item )) {
HXLINE(1038)								this->checkboxArray->__get(j).StaticCast<  ::CheckboxThingie >()->set_alpha(item->alpha);
HXLINE(1039)								goto _hx_goto_16;
            							}
            						}
            						_hx_goto_16:;
            					}
            				}
            			}
            		}
HXLINE(1044)		{
HXLINE(1044)			int _g2 = 0;
HXDLIN(1044)			int _g3 = this->grpTexts->members->get_length();
HXDLIN(1044)			while((_g2 < _g3)){
HXLINE(1044)				_g2 = (_g2 + 1);
HXDLIN(1044)				int i = (_g2 - 1);
HXLINE(1045)				 ::AttachedText text = Dynamic( this->grpTexts->members->__get(i)).StaticCast<  ::AttachedText >();
HXLINE(1046)				if (::hx::IsNotNull( text )) {
HXLINE(1047)					text->set_alpha(((Float)0.6));
HXLINE(1048)					if ((this->textNumber->__get(i) == ::PreferencesSubstate_obj::curSelected)) {
HXLINE(1049)						text->set_alpha(( (Float)(1) ));
            					}
            				}
            			}
            		}
HXLINE(1054)		this->showCharacter->set_visible((::PreferencesSubstate_obj::options->__get(::PreferencesSubstate_obj::curSelected) == HX_("Anti-Aliasing",9d,02,6c,80)));
HXLINE(1055)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN(1055)		_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(PreferencesSubstate_obj,changeSelection,(void))

void PreferencesSubstate_obj::reloadValues(){
            	HX_STACKFRAME(&_hx_pos_641e954371eb7a1d_1058_reloadValues)
HXLINE(1059)		{
HXLINE(1059)			int _g = 0;
HXDLIN(1059)			int _g1 = this->checkboxArray->length;
HXDLIN(1059)			while((_g < _g1)){
HXLINE(1059)				_g = (_g + 1);
HXDLIN(1059)				int i = (_g - 1);
HXLINE(1060)				 ::CheckboxThingie checkbox = this->checkboxArray->__get(i).StaticCast<  ::CheckboxThingie >();
HXLINE(1061)				if (::hx::IsNotNull( checkbox )) {
HXLINE(1062)					bool daValue = false;
HXLINE(1063)					::String _hx_switch_0 = ::PreferencesSubstate_obj::options->__get(this->checkboxNumber->__get(i));
            					if (  (_hx_switch_0==HX_("Anti-Aliasing",9d,02,6c,80)) ){
HXLINE(1069)						daValue = ::ClientPrefs_obj::globalAntialiasing;
HXDLIN(1069)						goto _hx_goto_20;
            					}
            					if (  (_hx_switch_0==HX_("Anti-Spam",94,86,65,16)) ){
HXLINE(1099)						daValue = ::ClientPrefs_obj::antispam;
HXDLIN(1099)						goto _hx_goto_20;
            					}
            					if (  (_hx_switch_0==HX_("Camera Zooms",45,a6,9b,43)) ){
HXLINE(1087)						daValue = ::ClientPrefs_obj::camZooms;
HXDLIN(1087)						goto _hx_goto_20;
            					}
            					if (  (_hx_switch_0==HX_("Downscroll",0f,4a,85,46)) ){
HXLINE(1075)						daValue = ::ClientPrefs_obj::downScroll;
HXDLIN(1075)						goto _hx_goto_20;
            					}
            					if (  (_hx_switch_0==HX_("Eyesores",53,93,13,f5)) ){
HXLINE(1097)						daValue = ::ClientPrefs_obj::eyesores;
HXDLIN(1097)						goto _hx_goto_20;
            					}
            					if (  (_hx_switch_0==HX_("FPS Counter",85,ef,54,c9)) ){
HXLINE(1065)						daValue = ::ClientPrefs_obj::showFPS;
HXDLIN(1065)						goto _hx_goto_20;
            					}
            					if (  (_hx_switch_0==HX_("Flashing Lights",0b,e4,0d,04)) ){
HXLINE(1073)						daValue = ::ClientPrefs_obj::flashing;
HXDLIN(1073)						goto _hx_goto_20;
            					}
            					if (  (_hx_switch_0==HX_("Ghost Tapping",44,6c,9f,40)) ){
HXLINE(1079)						daValue = ::ClientPrefs_obj::ghostTapping;
HXDLIN(1079)						goto _hx_goto_20;
            					}
            					if (  (_hx_switch_0==HX_("Hide HUD",59,3a,04,5d)) ){
HXLINE(1091)						daValue = ::ClientPrefs_obj::hideHud;
HXDLIN(1091)						goto _hx_goto_20;
            					}
            					if (  (_hx_switch_0==HX_("Hide Song Length",93,89,0c,bf)) ){
HXLINE(1095)						daValue = ::ClientPrefs_obj::hideTime;
HXDLIN(1095)						goto _hx_goto_20;
            					}
            					if (  (_hx_switch_0==HX_("Hit Sounds",31,73,43,1e)) ){
HXLINE(1085)						daValue = ::ClientPrefs_obj::hitSounds;
HXDLIN(1085)						goto _hx_goto_20;
            					}
            					if (  (_hx_switch_0==HX_("Low Quality",f3,10,75,e8)) ){
HXLINE(1067)						daValue = ::ClientPrefs_obj::lowQuality;
HXDLIN(1067)						goto _hx_goto_20;
            					}
            					if (  (_hx_switch_0==HX_("Middlescroll",42,a5,d6,f5)) ){
HXLINE(1077)						daValue = ::ClientPrefs_obj::middleScroll;
HXDLIN(1077)						goto _hx_goto_20;
            					}
            					if (  (_hx_switch_0==HX_("Miss Sounds",68,d1,fe,ae)) ){
HXLINE(1101)						daValue = ::ClientPrefs_obj::missSounds;
HXDLIN(1101)						goto _hx_goto_20;
            					}
            					if (  (_hx_switch_0==HX_("More Score Info",c7,fa,42,91)) ){
HXLINE(1103)						daValue = ::ClientPrefs_obj::moreScoreInfo;
HXDLIN(1103)						goto _hx_goto_20;
            					}
            					if (  (_hx_switch_0==HX_("Note Splashes",83,c7,78,74)) ){
HXLINE(1071)						daValue = ::ClientPrefs_obj::noteSplashes;
HXDLIN(1071)						goto _hx_goto_20;
            					}
            					if (  (_hx_switch_0==HX_("Persistent Cached Data",ff,eb,03,14)) ){
HXLINE(1093)						daValue = ::ClientPrefs_obj::imagesPersist;
HXDLIN(1093)						goto _hx_goto_20;
            					}
            					if (  (_hx_switch_0==HX_("Swearing",d0,49,69,67)) ){
HXLINE(1081)						daValue = ::ClientPrefs_obj::cursing;
HXDLIN(1081)						goto _hx_goto_20;
            					}
            					if (  (_hx_switch_0==HX_("Violence",7b,1a,3a,19)) ){
HXLINE(1083)						daValue = ::ClientPrefs_obj::violence;
HXDLIN(1083)						goto _hx_goto_20;
            					}
            					if (  (_hx_switch_0==HX_("Window Moving",be,58,aa,69)) ){
HXLINE(1089)						daValue = ::ClientPrefs_obj::windowMove;
HXDLIN(1089)						goto _hx_goto_20;
            					}
            					_hx_goto_20:;
HXLINE(1105)					checkbox->set_daValue(daValue);
            				}
            			}
            		}
HXLINE(1108)		{
HXLINE(1108)			int _g2 = 0;
HXDLIN(1108)			int _g3 = this->grpTexts->members->get_length();
HXDLIN(1108)			while((_g2 < _g3)){
HXLINE(1108)				_g2 = (_g2 + 1);
HXDLIN(1108)				int i = (_g2 - 1);
HXLINE(1109)				 ::AttachedText text = Dynamic( this->grpTexts->members->__get(i)).StaticCast<  ::AttachedText >();
HXLINE(1110)				if (::hx::IsNotNull( text )) {
HXLINE(1111)					::String daText = HX_("",00,00,00,00);
HXLINE(1112)					::String _hx_switch_1 = ::PreferencesSubstate_obj::options->__get(this->textNumber->__get(i));
            					if (  (_hx_switch_1==HX_("Framerate",6d,c5,1e,f0)) ){
HXLINE(1114)						daText = (HX_("",00,00,00,00) + ::ClientPrefs_obj::framerate);
HXDLIN(1114)						goto _hx_goto_22;
            					}
            					if (  (_hx_switch_1==HX_("Note Delay",d5,70,f0,95)) ){
HXLINE(1116)						daText = (::ClientPrefs_obj::noteOffset + HX_("ms",66,5f,00,00));
HXDLIN(1116)						goto _hx_goto_22;
            					}
            					if (  (_hx_switch_1==HX_("Note Underlay Alpha",d8,86,fd,a4)) ){
HXLINE(1118)						daText = (HX_("",00,00,00,00) + ::ClientPrefs_obj::scrollUnderlayAlpha);
HXDLIN(1118)						goto _hx_goto_22;
            					}
            					_hx_goto_22:;
HXLINE(1120)					 ::flixel::FlxSprite lastTracker = text->sprTracker;
HXLINE(1121)					text->sprTracker = null();
HXLINE(1122)					text->changeText(daText,null());
HXLINE(1123)					text->sprTracker = lastTracker;
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(PreferencesSubstate_obj,reloadValues,(void))

bool PreferencesSubstate_obj::unselectableCheck(int num){
            	HX_STACKFRAME(&_hx_pos_641e954371eb7a1d_1128_unselectableCheck)
HXLINE(1129)		{
HXLINE(1129)			int _g = 0;
HXDLIN(1129)			int _g1 = ::PreferencesSubstate_obj::unselectableOptions->length;
HXDLIN(1129)			while((_g < _g1)){
HXLINE(1129)				_g = (_g + 1);
HXDLIN(1129)				int i = (_g - 1);
HXLINE(1130)				if ((::PreferencesSubstate_obj::options->__get(num) == ::PreferencesSubstate_obj::unselectableOptions->__get(i))) {
HXLINE(1131)					return true;
            				}
            			}
            		}
HXLINE(1134)		return (::PreferencesSubstate_obj::options->__get(num) == HX_("",00,00,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC1(PreferencesSubstate_obj,unselectableCheck,return )

int PreferencesSubstate_obj::curSelected;

::Array< ::String > PreferencesSubstate_obj::unselectableOptions;

::Array< ::String > PreferencesSubstate_obj::noCheckbox;

::Array< ::String > PreferencesSubstate_obj::options;


::hx::ObjectPtr< PreferencesSubstate_obj > PreferencesSubstate_obj::__new() {
	::hx::ObjectPtr< PreferencesSubstate_obj > __this = new PreferencesSubstate_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< PreferencesSubstate_obj > PreferencesSubstate_obj::__alloc(::hx::Ctx *_hx_ctx) {
	PreferencesSubstate_obj *__this = (PreferencesSubstate_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PreferencesSubstate_obj), true, "PreferencesSubstate"));
	*(void **)__this = PreferencesSubstate_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

PreferencesSubstate_obj::PreferencesSubstate_obj()
{
}

void PreferencesSubstate_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PreferencesSubstate);
	HX_MARK_MEMBER_NAME(grpOptions,"grpOptions");
	HX_MARK_MEMBER_NAME(checkboxArray,"checkboxArray");
	HX_MARK_MEMBER_NAME(checkboxNumber,"checkboxNumber");
	HX_MARK_MEMBER_NAME(grpTexts,"grpTexts");
	HX_MARK_MEMBER_NAME(textNumber,"textNumber");
	HX_MARK_MEMBER_NAME(showCharacter,"showCharacter");
	HX_MARK_MEMBER_NAME(descText,"descText");
	HX_MARK_MEMBER_NAME(nextAccept,"nextAccept");
	HX_MARK_MEMBER_NAME(holdTime,"holdTime");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PreferencesSubstate_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(grpOptions,"grpOptions");
	HX_VISIT_MEMBER_NAME(checkboxArray,"checkboxArray");
	HX_VISIT_MEMBER_NAME(checkboxNumber,"checkboxNumber");
	HX_VISIT_MEMBER_NAME(grpTexts,"grpTexts");
	HX_VISIT_MEMBER_NAME(textNumber,"textNumber");
	HX_VISIT_MEMBER_NAME(showCharacter,"showCharacter");
	HX_VISIT_MEMBER_NAME(descText,"descText");
	HX_VISIT_MEMBER_NAME(nextAccept,"nextAccept");
	HX_VISIT_MEMBER_NAME(holdTime,"holdTime");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val PreferencesSubstate_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"grpTexts") ) { return ::hx::Val( grpTexts ); }
		if (HX_FIELD_EQ(inName,"descText") ) { return ::hx::Val( descText ); }
		if (HX_FIELD_EQ(inName,"holdTime") ) { return ::hx::Val( holdTime ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpOptions") ) { return ::hx::Val( grpOptions ); }
		if (HX_FIELD_EQ(inName,"textNumber") ) { return ::hx::Val( textNumber ); }
		if (HX_FIELD_EQ(inName,"nextAccept") ) { return ::hx::Val( nextAccept ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"reloadValues") ) { return ::hx::Val( reloadValues_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"checkboxArray") ) { return ::hx::Val( checkboxArray ); }
		if (HX_FIELD_EQ(inName,"showCharacter") ) { return ::hx::Val( showCharacter ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"checkboxNumber") ) { return ::hx::Val( checkboxNumber ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"unselectableCheck") ) { return ::hx::Val( unselectableCheck_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool PreferencesSubstate_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { outValue = ( options ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"noCheckbox") ) { outValue = ( noCheckbox ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { outValue = ( curSelected ); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"unselectableOptions") ) { outValue = ( unselectableOptions ); return true; }
	}
	return false;
}

::hx::Val PreferencesSubstate_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"grpTexts") ) { grpTexts=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"descText") ) { descText=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"holdTime") ) { holdTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpOptions") ) { grpOptions=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textNumber") ) { textNumber=inValue.Cast< ::Array< int > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nextAccept") ) { nextAccept=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"checkboxArray") ) { checkboxArray=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"showCharacter") ) { showCharacter=inValue.Cast<  ::Character >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"checkboxNumber") ) { checkboxNumber=inValue.Cast< ::Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool PreferencesSubstate_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=ioValue.Cast< ::Array< ::String > >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"noCheckbox") ) { noCheckbox=ioValue.Cast< ::Array< ::String > >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=ioValue.Cast< int >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"unselectableOptions") ) { unselectableOptions=ioValue.Cast< ::Array< ::String > >(); return true; }
	}
	return false;
}

void PreferencesSubstate_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("grpOptions",f9,45,d8,00));
	outFields->push(HX_("checkboxArray",56,f8,56,af));
	outFields->push(HX_("checkboxNumber",6c,61,4c,a6));
	outFields->push(HX_("grpTexts",01,f1,99,f0));
	outFields->push(HX_("textNumber",56,07,6b,d8));
	outFields->push(HX_("showCharacter",ec,de,ef,31));
	outFields->push(HX_("descText",9e,53,35,f3));
	outFields->push(HX_("nextAccept",5b,44,38,c0));
	outFields->push(HX_("holdTime",ec,cc,bf,3e));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo PreferencesSubstate_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(PreferencesSubstate_obj,grpOptions),HX_("grpOptions",f9,45,d8,00)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(PreferencesSubstate_obj,checkboxArray),HX_("checkboxArray",56,f8,56,af)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(PreferencesSubstate_obj,checkboxNumber),HX_("checkboxNumber",6c,61,4c,a6)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(PreferencesSubstate_obj,grpTexts),HX_("grpTexts",01,f1,99,f0)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(PreferencesSubstate_obj,textNumber),HX_("textNumber",56,07,6b,d8)},
	{::hx::fsObject /*  ::Character */ ,(int)offsetof(PreferencesSubstate_obj,showCharacter),HX_("showCharacter",ec,de,ef,31)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(PreferencesSubstate_obj,descText),HX_("descText",9e,53,35,f3)},
	{::hx::fsInt,(int)offsetof(PreferencesSubstate_obj,nextAccept),HX_("nextAccept",5b,44,38,c0)},
	{::hx::fsFloat,(int)offsetof(PreferencesSubstate_obj,holdTime),HX_("holdTime",ec,cc,bf,3e)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo PreferencesSubstate_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &PreferencesSubstate_obj::curSelected,HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &PreferencesSubstate_obj::unselectableOptions,HX_("unselectableOptions",ef,28,01,b9)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &PreferencesSubstate_obj::noCheckbox,HX_("noCheckbox",a4,97,53,9d)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &PreferencesSubstate_obj::options,HX_("options",5e,33,fe,df)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String PreferencesSubstate_obj_sMemberFields[] = {
	HX_("grpOptions",f9,45,d8,00),
	HX_("checkboxArray",56,f8,56,af),
	HX_("checkboxNumber",6c,61,4c,a6),
	HX_("grpTexts",01,f1,99,f0),
	HX_("textNumber",56,07,6b,d8),
	HX_("showCharacter",ec,de,ef,31),
	HX_("descText",9e,53,35,f3),
	HX_("nextAccept",5b,44,38,c0),
	HX_("holdTime",ec,cc,bf,3e),
	HX_("update",09,86,05,87),
	HX_("changeSelection",bc,98,b5,48),
	HX_("reloadValues",1b,54,e1,23),
	HX_("unselectableCheck",19,58,ce,19),
	::String(null()) };

static void PreferencesSubstate_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PreferencesSubstate_obj::curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(PreferencesSubstate_obj::unselectableOptions,"unselectableOptions");
	HX_MARK_MEMBER_NAME(PreferencesSubstate_obj::noCheckbox,"noCheckbox");
	HX_MARK_MEMBER_NAME(PreferencesSubstate_obj::options,"options");
};

#ifdef HXCPP_VISIT_ALLOCS
static void PreferencesSubstate_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PreferencesSubstate_obj::curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(PreferencesSubstate_obj::unselectableOptions,"unselectableOptions");
	HX_VISIT_MEMBER_NAME(PreferencesSubstate_obj::noCheckbox,"noCheckbox");
	HX_VISIT_MEMBER_NAME(PreferencesSubstate_obj::options,"options");
};

#endif

::hx::Class PreferencesSubstate_obj::__mClass;

static ::String PreferencesSubstate_obj_sStaticFields[] = {
	HX_("curSelected",fb,eb,ab,32),
	HX_("unselectableOptions",ef,28,01,b9),
	HX_("noCheckbox",a4,97,53,9d),
	HX_("options",5e,33,fe,df),
	::String(null())
};

void PreferencesSubstate_obj::__register()
{
	PreferencesSubstate_obj _hx_dummy;
	PreferencesSubstate_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("PreferencesSubstate",49,bf,26,bf);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PreferencesSubstate_obj::__GetStatic;
	__mClass->mSetStaticField = &PreferencesSubstate_obj::__SetStatic;
	__mClass->mMarkFunc = PreferencesSubstate_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PreferencesSubstate_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(PreferencesSubstate_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< PreferencesSubstate_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = PreferencesSubstate_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PreferencesSubstate_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PreferencesSubstate_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void PreferencesSubstate_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_641e954371eb7a1d_664_boot)
HXDLIN( 664)		curSelected = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_641e954371eb7a1d_665_boot)
HXDLIN( 665)		unselectableOptions = ::Array_obj< ::String >::fromData( _hx_array_data_bf26bf49_28,2);
            	}
{
            	HX_STACKFRAME(&_hx_pos_641e954371eb7a1d_669_boot)
HXDLIN( 669)		noCheckbox = ::Array_obj< ::String >::fromData( _hx_array_data_bf26bf49_30,3);
            	}
{
            	HX_STACKFRAME(&_hx_pos_641e954371eb7a1d_675_boot)
HXDLIN( 675)		options = ::Array_obj< ::String >::fromData( _hx_array_data_bf26bf49_32,23);
            	}
}

