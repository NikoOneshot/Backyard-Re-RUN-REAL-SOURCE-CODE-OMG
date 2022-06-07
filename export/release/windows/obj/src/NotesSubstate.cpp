#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_AlphaCharacter
#include <AlphaCharacter.h>
#endif
#ifndef INCLUDED_Alphabet
#include <Alphabet.h>
#endif
#ifndef INCLUDED_ClientPrefs
#include <ClientPrefs.h>
#endif
#ifndef INCLUDED_ColorSwap
#include <ColorSwap.h>
#endif
#ifndef INCLUDED_ColorSwapShader
#include <ColorSwapShader.h>
#endif
#ifndef INCLUDED_Controls
#include <Controls.h>
#endif
#ifndef INCLUDED_CoolUtil
#include <CoolUtil.h>
#endif
#ifndef INCLUDED_MusicBeatSubstate
#include <MusicBeatSubstate.h>
#endif
#ifndef INCLUDED_NotesSubstate
#include <NotesSubstate.h>
#endif
#ifndef INCLUDED_Paths
#include <Paths.h>
#endif
#ifndef INCLUDED_PlayerSettings
#include <PlayerSettings.h>
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
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxAtlasFrames
#include <flixel/graphics/frames/FlxAtlasFrames.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_tile_FlxGraphicsShader
#include <flixel/graphics/tile/FlxGraphicsShader.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
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
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsShader
#include <openfl/display/GraphicsShader.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_sys_FileSystem
#include <sys/FileSystem.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_30acc222447c2979_128_new,"NotesSubstate","new",0xd3cddfc4,"NotesSubstate.new","OptionsState.hx",128,0x342db2ab)
static const Float _hx_array_data_06f1edd2_2[] = {
	(Float)240,(Float)90,
};
HX_LOCAL_STACK_FRAME(_hx_pos_30acc222447c2979_187_update,"NotesSubstate","update",0xc8182d25,"NotesSubstate.update","OptionsState.hx",187,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_30acc222447c2979_292_update,"NotesSubstate","update",0xc8182d25,"NotesSubstate.update","OptionsState.hx",292,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_30acc222447c2979_295_update,"NotesSubstate","update",0xc8182d25,"NotesSubstate.update","OptionsState.hx",295,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_30acc222447c2979_309_changeSelection,"NotesSubstate","changeSelection",0xf1bb2e20,"NotesSubstate.changeSelection","OptionsState.hx",309,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_30acc222447c2979_339_changeType,"NotesSubstate","changeType",0x637c8d66,"NotesSubstate.changeType","OptionsState.hx",339,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_30acc222447c2979_358_resetValue,"NotesSubstate","resetValue",0x567f1c3e,"NotesSubstate.resetValue","OptionsState.hx",358,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_30acc222447c2979_368_updateValue,"NotesSubstate","updateValue",0x803efc0c,"NotesSubstate.updateValue","OptionsState.hx",368,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_30acc222447c2979_130_boot,"NotesSubstate","boot",0x786eec4e,"NotesSubstate.boot","OptionsState.hx",130,0x342db2ab)
HX_LOCAL_STACK_FRAME(_hx_pos_30acc222447c2979_131_boot,"NotesSubstate","boot",0x786eec4e,"NotesSubstate.boot","OptionsState.hx",131,0x342db2ab)

void NotesSubstate_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_30acc222447c2979_128_new)
HXLINE( 186)		this->hsvTextOffsets = ::Array_obj< Float >::fromData( _hx_array_data_06f1edd2_2,2);
HXLINE( 185)		this->changingNote = false;
HXLINE( 140)		this->posX = 250;
HXLINE( 138)		this->nextAccept = 5;
HXLINE( 136)		this->holdTime = ((Float)0);
HXLINE( 135)		this->curValue = ((Float)0);
HXLINE( 134)		this->shaderArray = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 142)		super::__construct();
HXLINE( 144)		this->grpNotes =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 145)		this->add(this->grpNotes);
HXLINE( 146)		this->grpNumbers =  ::flixel::group::FlxTypedGroup_obj::__alloc( HX_CTX ,null());
HXLINE( 147)		this->add(this->grpNumbers);
HXLINE( 149)		{
HXLINE( 149)			int _g = 0;
HXDLIN( 149)			int _g1 = ::ClientPrefs_obj::arrowHSV->length;
HXDLIN( 149)			while((_g < _g1)){
HXLINE( 149)				_g = (_g + 1);
HXDLIN( 149)				int i = (_g - 1);
HXLINE( 150)				Float yPos = ( (Float)(((165 * i) + 35)) );
HXLINE( 151)				{
HXLINE( 151)					{
HXLINE( 152)						 ::Alphabet optionText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),yPos,::Std_obj::string(::ClientPrefs_obj::arrowHSV->__get(i).StaticCast< ::Array< int > >()->__get(0)),null(),null(),null(),null());
HXLINE( 153)						optionText->set_x((( (Float)((this->posX + 100)) ) - (( (Float)((optionText->lettersArray->length * 90)) ) / ( (Float)(2) ))));
HXLINE( 154)						this->grpNumbers->add(optionText).StaticCast<  ::Alphabet >();
            					}
HXLINE( 151)					{
HXLINE( 152)						 ::Alphabet optionText1 =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),yPos,::Std_obj::string(::ClientPrefs_obj::arrowHSV->__get(i).StaticCast< ::Array< int > >()->__get(1)),null(),null(),null(),null());
HXLINE( 153)						optionText1->set_x((( (Float)(((this->posX + 225) + 100)) ) - (( (Float)((optionText1->lettersArray->length * 90)) ) / ( (Float)(2) ))));
HXLINE( 154)						this->grpNumbers->add(optionText1).StaticCast<  ::Alphabet >();
            					}
HXLINE( 151)					{
HXLINE( 152)						 ::Alphabet optionText2 =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),yPos,::Std_obj::string(::ClientPrefs_obj::arrowHSV->__get(i).StaticCast< ::Array< int > >()->__get(2)),null(),null(),null(),null());
HXLINE( 153)						optionText2->set_x((( (Float)(((this->posX + 450) + 100)) ) - (( (Float)((optionText2->lettersArray->length * 90)) ) / ( (Float)(2) ))));
HXLINE( 154)						this->grpNumbers->add(optionText2).StaticCast<  ::Alphabet >();
            					}
            				}
HXLINE( 157)				 ::flixel::FlxSprite note =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,(this->posX - 70),yPos,null());
HXLINE( 158)				::String library = null();
HXDLIN( 158)				 ::flixel::graphics::FlxGraphic imageLoaded = ::Paths_obj::addCustomGraphic(HX_("NOTE_assets",70,3c,09,f7));
HXDLIN( 158)				bool xmlExists = false;
HXDLIN( 158)				if (::sys::FileSystem_obj::exists(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("NOTE_assets",70,3c,09,f7)) + HX_(".xml",69,3e,c3,1e))))) {
HXLINE( 158)					xmlExists = true;
            				}
HXDLIN( 158)				 ::Dynamic _hx_tmp;
HXDLIN( 158)				if (::hx::IsNotNull( imageLoaded )) {
HXLINE( 158)					_hx_tmp = imageLoaded;
            				}
            				else {
HXLINE( 158)					 ::flixel::graphics::FlxGraphic imageToReturn = ::Paths_obj::addCustomGraphic(HX_("NOTE_assets",70,3c,09,f7));
HXDLIN( 158)					if (::hx::IsNotNull( imageToReturn )) {
HXLINE( 158)						_hx_tmp = imageToReturn;
            					}
            					else {
HXLINE( 158)						_hx_tmp = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("NOTE_assets",70,3c,09,f7)) + HX_(".png",3b,2d,bd,1e)),HX_("IMAGE",3b,57,57,3b),library);
            					}
            				}
HXDLIN( 158)				::String _hx_tmp1;
HXDLIN( 158)				if (xmlExists) {
HXLINE( 158)					_hx_tmp1 = ::sys::io::File_obj::getContent(::Paths_obj::modFolders(((HX_("images/",77,50,74,c1) + HX_("NOTE_assets",70,3c,09,f7)) + HX_(".xml",69,3e,c3,1e))));
            				}
            				else {
HXLINE( 158)					_hx_tmp1 = ::Paths_obj::getPath(((HX_("images/",77,50,74,c1) + HX_("NOTE_assets",70,3c,09,f7)) + HX_(".xml",69,3e,c3,1e)),HX_("TEXT",ad,94,ba,37),library);
            				}
HXDLIN( 158)				note->set_frames(::flixel::graphics::frames::FlxAtlasFrames_obj::fromSparrow(_hx_tmp,_hx_tmp1));
HXLINE( 159)				switch((int)(i)){
            					case (int)0: {
HXLINE( 161)						note->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("purple0",74,7e,2d,e7),null(),null(),null(),null());
            					}
            					break;
            					case (int)1: {
HXLINE( 163)						note->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("blue0",56,04,01,b5),null(),null(),null(),null());
            					}
            					break;
            					case (int)2: {
HXLINE( 165)						note->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("green0",0d,dc,7f,15),null(),null(),null(),null());
            					}
            					break;
            					case (int)3: {
HXLINE( 167)						note->animation->addByPrefix(HX_("idle",14,a7,b3,45),HX_("red0",bf,4d,a7,4b),null(),null(),null(),null());
            					}
            					break;
            				}
HXLINE( 169)				note->animation->play(HX_("idle",14,a7,b3,45),null(),null(),null());
HXLINE( 170)				note->set_antialiasing(::ClientPrefs_obj::globalAntialiasing);
HXLINE( 171)				this->grpNotes->add(note).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 173)				 ::ColorSwap newShader =  ::ColorSwap_obj::__alloc( HX_CTX );
HXLINE( 174)				note->shader = newShader->shader;
HXLINE( 175)				newShader->set_hue((( (Float)(::ClientPrefs_obj::arrowHSV->__get(i).StaticCast< ::Array< int > >()->__get(0)) ) / ( (Float)(360) )));
HXLINE( 176)				newShader->set_saturation((( (Float)(::ClientPrefs_obj::arrowHSV->__get(i).StaticCast< ::Array< int > >()->__get(1)) ) / ( (Float)(100) )));
HXLINE( 177)				newShader->set_brightness((( (Float)(::ClientPrefs_obj::arrowHSV->__get(i).StaticCast< ::Array< int > >()->__get(2)) ) / ( (Float)(100) )));
HXLINE( 178)				this->shaderArray->push(newShader);
            			}
            		}
HXLINE( 180)		this->hsvText =  ::Alphabet_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ),HX_("Hue    Saturation  Brightness",7b,47,68,9c),false,false,0,((Float)0.65));
HXLINE( 181)		this->add(this->hsvText);
HXLINE( 182)		this->changeSelection(null());
            	}

Dynamic NotesSubstate_obj::__CreateEmpty() { return new NotesSubstate_obj; }

void *NotesSubstate_obj::_hx_vtable = 0;

Dynamic NotesSubstate_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NotesSubstate_obj > _hx_result = new NotesSubstate_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool NotesSubstate_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x5661ffbf) {
			if (inClassId<=(int)0x4fa93366) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x4fa93366;
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

void NotesSubstate_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_30acc222447c2979_187_update)
HXLINE( 188)		if (this->changingNote) {
HXLINE( 189)			if ((this->holdTime < ((Float)0.5))) {
HXLINE( 190)				if (::PlayerSettings_obj::player1->controls->_ui_leftP->check()) {
HXLINE( 191)					this->updateValue(-1);
HXLINE( 192)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 192)					_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            				}
            				else {
HXLINE( 193)					if (::PlayerSettings_obj::player1->controls->_ui_rightP->check()) {
HXLINE( 194)						this->updateValue(1);
HXLINE( 195)						 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 195)						_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            					}
            					else {
HXLINE( 196)						if (::PlayerSettings_obj::player1->controls->_reset->check()) {
HXLINE( 197)							this->resetValue(::NotesSubstate_obj::curSelected,::NotesSubstate_obj::typeSelected);
HXLINE( 198)							 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 198)							_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            						}
            					}
            				}
HXLINE( 200)				bool _hx_tmp;
HXDLIN( 200)				if (!(::PlayerSettings_obj::player1->controls->_ui_leftR->check())) {
HXLINE( 200)					_hx_tmp = ::PlayerSettings_obj::player1->controls->_ui_rightR->check();
            				}
            				else {
HXLINE( 200)					_hx_tmp = true;
            				}
HXDLIN( 200)				if (_hx_tmp) {
HXLINE( 201)					this->holdTime = ( (Float)(0) );
            				}
            				else {
HXLINE( 202)					bool _hx_tmp;
HXDLIN( 202)					if (!(::PlayerSettings_obj::player1->controls->_ui_left->check())) {
HXLINE( 202)						_hx_tmp = ::PlayerSettings_obj::player1->controls->_ui_right->check();
            					}
            					else {
HXLINE( 202)						_hx_tmp = true;
            					}
HXDLIN( 202)					if (_hx_tmp) {
HXLINE( 203)						 ::NotesSubstate _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 203)						_hx_tmp->holdTime = (_hx_tmp->holdTime + elapsed);
            					}
            				}
            			}
            			else {
HXLINE( 206)				Float add = ( (Float)(90) );
HXLINE( 207)				switch((int)(::NotesSubstate_obj::typeSelected)){
            					case (int)1: case (int)2: {
HXLINE( 208)						add = ( (Float)(50) );
            					}
            					break;
            				}
HXLINE( 210)				if (::PlayerSettings_obj::player1->controls->_ui_left->check()) {
HXLINE( 211)					this->updateValue((elapsed * -(add)));
            				}
            				else {
HXLINE( 212)					if (::PlayerSettings_obj::player1->controls->_ui_right->check()) {
HXLINE( 213)						this->updateValue((elapsed * add));
            					}
            				}
HXLINE( 215)				bool _hx_tmp;
HXDLIN( 215)				if (!(::PlayerSettings_obj::player1->controls->_ui_leftR->check())) {
HXLINE( 215)					_hx_tmp = ::PlayerSettings_obj::player1->controls->_ui_rightR->check();
            				}
            				else {
HXLINE( 215)					_hx_tmp = true;
            				}
HXDLIN( 215)				if (_hx_tmp) {
HXLINE( 216)					 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 216)					_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 217)					this->holdTime = ( (Float)(0) );
            				}
            			}
            		}
            		else {
HXLINE( 221)			if (::PlayerSettings_obj::player1->controls->_ui_upP->check()) {
HXLINE( 222)				this->changeSelection(-1);
HXLINE( 223)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 223)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            			}
HXLINE( 225)			if (::PlayerSettings_obj::player1->controls->_ui_downP->check()) {
HXLINE( 226)				this->changeSelection(1);
HXLINE( 227)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 227)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            			}
HXLINE( 229)			if (::PlayerSettings_obj::player1->controls->_ui_leftP->check()) {
HXLINE( 230)				this->changeType(-1);
HXLINE( 231)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 231)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            			}
HXLINE( 233)			if (::PlayerSettings_obj::player1->controls->_ui_rightP->check()) {
HXLINE( 234)				this->changeType(1);
HXLINE( 235)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 235)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            			}
HXLINE( 237)			if (::PlayerSettings_obj::player1->controls->_reset->check()) {
HXLINE( 238)				{
HXLINE( 239)					this->resetValue(::NotesSubstate_obj::curSelected,0);
HXDLIN( 239)					this->resetValue(::NotesSubstate_obj::curSelected,1);
HXDLIN( 239)					this->resetValue(::NotesSubstate_obj::curSelected,2);
            				}
HXLINE( 241)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 241)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            			}
HXLINE( 243)			bool _hx_tmp;
HXDLIN( 243)			if (::PlayerSettings_obj::player1->controls->_accept->check()) {
HXLINE( 243)				_hx_tmp = (this->nextAccept <= 0);
            			}
            			else {
HXLINE( 243)				_hx_tmp = false;
            			}
HXDLIN( 243)			if (_hx_tmp) {
HXLINE( 244)				 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 244)				_hx_tmp->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
HXLINE( 245)				this->changingNote = true;
HXLINE( 246)				this->holdTime = ( (Float)(0) );
HXLINE( 247)				{
HXLINE( 247)					int _g = 0;
HXDLIN( 247)					int _g1 = this->grpNumbers->length;
HXDLIN( 247)					while((_g < _g1)){
HXLINE( 247)						_g = (_g + 1);
HXDLIN( 247)						int i = (_g - 1);
HXLINE( 248)						 ::Alphabet item = Dynamic( this->grpNumbers->members->__get(i)).StaticCast<  ::Alphabet >();
HXLINE( 249)						item->set_alpha(( (Float)(0) ));
HXLINE( 250)						if ((((::NotesSubstate_obj::curSelected * 3) + ::NotesSubstate_obj::typeSelected) == i)) {
HXLINE( 251)							item->set_alpha(( (Float)(1) ));
            						}
            					}
            				}
HXLINE( 254)				{
HXLINE( 254)					int _g2 = 0;
HXDLIN( 254)					int _g3 = this->grpNotes->length;
HXDLIN( 254)					while((_g2 < _g3)){
HXLINE( 254)						_g2 = (_g2 + 1);
HXDLIN( 254)						int i = (_g2 - 1);
HXLINE( 255)						 ::flixel::FlxSprite item = Dynamic( this->grpNotes->members->__get(i)).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 256)						item->set_alpha(( (Float)(0) ));
HXLINE( 257)						if ((::NotesSubstate_obj::curSelected == i)) {
HXLINE( 258)							item->set_alpha(( (Float)(1) ));
            						}
            					}
            				}
HXLINE( 261)				this->super::update(elapsed);
HXLINE( 262)				return;
            			}
            		}
HXLINE( 266)		Float lerpVal = ::CoolUtil_obj::boundTo((elapsed * ((Float)9.6)),( (Float)(0) ),( (Float)(1) ));
HXLINE( 267)		{
HXLINE( 267)			int _g = 0;
HXDLIN( 267)			int _g1 = this->grpNotes->length;
HXDLIN( 267)			while((_g < _g1)){
HXLINE( 267)				_g = (_g + 1);
HXDLIN( 267)				int i = (_g - 1);
HXLINE( 268)				 ::flixel::FlxSprite item = Dynamic( this->grpNotes->members->__get(i)).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 269)				Float intendedPos = ( (Float)((this->posX - 70)) );
HXLINE( 270)				if ((::NotesSubstate_obj::curSelected == i)) {
HXLINE( 271)					Float a = item->x;
HXDLIN( 271)					item->set_x((a + (lerpVal * ((intendedPos + 100) - a))));
            				}
            				else {
HXLINE( 273)					Float a = item->x;
HXDLIN( 273)					item->set_x((a + (lerpVal * (intendedPos - a))));
            				}
HXLINE( 275)				{
HXLINE( 275)					{
HXLINE( 276)						 ::Alphabet item2 = Dynamic( this->grpNumbers->members->__get((i * 3))).StaticCast<  ::Alphabet >();
HXLINE( 277)						item2->set_x((((item->x + 265) + (225 * ::hx::Mod(0,3))) - (( (Float)((30 * item2->lettersArray->length)) ) / ( (Float)(2) ))));
HXLINE( 278)						if ((::ClientPrefs_obj::arrowHSV->__get(i).StaticCast< ::Array< int > >()->__get(0) < 0)) {
HXLINE( 279)							item2->set_x((item2->x - ( (Float)(20) )));
            						}
            					}
HXLINE( 275)					{
HXLINE( 276)						 ::Alphabet item21 = Dynamic( this->grpNumbers->members->__get(((i * 3) + 1))).StaticCast<  ::Alphabet >();
HXLINE( 277)						item21->set_x((((item->x + 265) + (225 * ::hx::Mod(1,3))) - (( (Float)((30 * item21->lettersArray->length)) ) / ( (Float)(2) ))));
HXLINE( 278)						if ((::ClientPrefs_obj::arrowHSV->__get(i).StaticCast< ::Array< int > >()->__get(1) < 0)) {
HXLINE( 279)							item21->set_x((item21->x - ( (Float)(20) )));
            						}
            					}
HXLINE( 275)					{
HXLINE( 276)						 ::Alphabet item22 = Dynamic( this->grpNumbers->members->__get(((i * 3) + 2))).StaticCast<  ::Alphabet >();
HXLINE( 277)						item22->set_x((((item->x + 265) + (225 * ::hx::Mod(2,3))) - (( (Float)((30 * item22->lettersArray->length)) ) / ( (Float)(2) ))));
HXLINE( 278)						if ((::ClientPrefs_obj::arrowHSV->__get(i).StaticCast< ::Array< int > >()->__get(2) < 0)) {
HXLINE( 279)							item22->set_x((item22->x - ( (Float)(20) )));
            						}
            					}
            				}
HXLINE( 283)				if ((::NotesSubstate_obj::curSelected == i)) {
HXLINE( 284)					this->hsvText->setPosition((item->x + this->hsvTextOffsets->__get(0)),(item->y - this->hsvTextOffsets->__get(1)));
            				}
            			}
            		}
HXLINE( 288)		bool _hx_tmp;
HXDLIN( 288)		if (!(::PlayerSettings_obj::player1->controls->_back->check())) {
HXLINE( 288)			if (this->changingNote) {
HXLINE( 288)				_hx_tmp = ::PlayerSettings_obj::player1->controls->_accept->check();
            			}
            			else {
HXLINE( 288)				_hx_tmp = false;
            			}
            		}
            		else {
HXLINE( 288)			_hx_tmp = true;
            		}
HXDLIN( 288)		if (_hx_tmp) {
HXLINE( 289)			this->changeSelection(null());
HXLINE( 290)			if (!(this->changingNote)) {
            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            				void _hx_run( ::Alphabet spr){
            					HX_STACKFRAME(&_hx_pos_30acc222447c2979_292_update)
HXLINE( 292)					spr->set_alpha(( (Float)(0) ));
            				}
            				HX_END_LOCAL_FUNC1((void))

            				HX_BEGIN_LOCAL_FUNC_S0(::hx::LocalFunc,_hx_Closure_1) HXARGC(1)
            				void _hx_run( ::flixel::FlxSprite spr){
            					HX_STACKFRAME(&_hx_pos_30acc222447c2979_295_update)
HXLINE( 295)					spr->set_alpha(( (Float)(0) ));
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 291)				this->grpNumbers->forEachAlive( ::Dynamic(new _hx_Closure_0()),null());
HXLINE( 294)				this->grpNotes->forEachAlive( ::Dynamic(new _hx_Closure_1()),null());
HXLINE( 297)				this->close();
            			}
HXLINE( 299)			this->changingNote = false;
HXLINE( 300)			 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp = ::flixel::FlxG_obj::sound;
HXDLIN( 300)			_hx_tmp->play(::Paths_obj::sound(HX_("cancelMenu",39,a4,43,b7),null()),null(),null(),null(),null(),null());
            		}
HXLINE( 303)		if ((this->nextAccept > 0)) {
HXLINE( 304)			 ::NotesSubstate _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 304)			_hx_tmp->nextAccept = (_hx_tmp->nextAccept - 1);
            		}
HXLINE( 306)		this->super::update(elapsed);
            	}


void NotesSubstate_obj::changeSelection(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_30acc222447c2979_309_changeSelection)
HXLINE( 310)		 ::Dynamic _hx_tmp = ::hx::ClassOf< ::NotesSubstate >();
HXDLIN( 310)		::NotesSubstate_obj::curSelected = (::NotesSubstate_obj::curSelected + change);
HXLINE( 311)		if ((::NotesSubstate_obj::curSelected < 0)) {
HXLINE( 312)			::NotesSubstate_obj::curSelected = (::ClientPrefs_obj::arrowHSV->length - 1);
            		}
HXLINE( 313)		if ((::NotesSubstate_obj::curSelected >= ::ClientPrefs_obj::arrowHSV->length)) {
HXLINE( 314)			::NotesSubstate_obj::curSelected = 0;
            		}
HXLINE( 316)		this->curValue = ( (Float)(::ClientPrefs_obj::arrowHSV->__get(::NotesSubstate_obj::curSelected).StaticCast< ::Array< int > >()->__get(::NotesSubstate_obj::typeSelected)) );
HXLINE( 317)		this->updateValue(null());
HXLINE( 319)		{
HXLINE( 319)			int _g = 0;
HXDLIN( 319)			int _g1 = this->grpNumbers->length;
HXDLIN( 319)			while((_g < _g1)){
HXLINE( 319)				_g = (_g + 1);
HXDLIN( 319)				int i = (_g - 1);
HXLINE( 320)				 ::Alphabet item = Dynamic( this->grpNumbers->members->__get(i)).StaticCast<  ::Alphabet >();
HXLINE( 321)				item->set_alpha(((Float)0.6));
HXLINE( 322)				if ((((::NotesSubstate_obj::curSelected * 3) + ::NotesSubstate_obj::typeSelected) == i)) {
HXLINE( 323)					item->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
HXLINE( 326)		{
HXLINE( 326)			int _g2 = 0;
HXDLIN( 326)			int _g3 = this->grpNotes->length;
HXDLIN( 326)			while((_g2 < _g3)){
HXLINE( 326)				_g2 = (_g2 + 1);
HXDLIN( 326)				int i = (_g2 - 1);
HXLINE( 327)				 ::flixel::FlxSprite item = Dynamic( this->grpNotes->members->__get(i)).StaticCast<  ::flixel::FlxSprite >();
HXLINE( 328)				item->set_alpha(((Float)0.6));
HXLINE( 329)				item->scale->set(1,1);
HXLINE( 330)				if ((::NotesSubstate_obj::curSelected == i)) {
HXLINE( 331)					item->set_alpha(( (Float)(1) ));
HXLINE( 332)					item->scale->set(((Float)1.2),((Float)1.2));
HXLINE( 333)					this->hsvText->setPosition((item->x + this->hsvTextOffsets->__get(0)),(item->y - this->hsvTextOffsets->__get(1)));
            				}
            			}
            		}
HXLINE( 336)		 ::flixel::_hx_system::frontEnds::SoundFrontEnd _hx_tmp1 = ::flixel::FlxG_obj::sound;
HXDLIN( 336)		_hx_tmp1->play(::Paths_obj::sound(HX_("scrollMenu",4c,d4,18,06),null()),null(),null(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(NotesSubstate_obj,changeSelection,(void))

void NotesSubstate_obj::changeType(::hx::Null< int >  __o_change){
            		int change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_30acc222447c2979_339_changeType)
HXLINE( 340)		 ::Dynamic _hx_tmp = ::hx::ClassOf< ::NotesSubstate >();
HXDLIN( 340)		::NotesSubstate_obj::typeSelected = (::NotesSubstate_obj::typeSelected + change);
HXLINE( 341)		if ((::NotesSubstate_obj::typeSelected < 0)) {
HXLINE( 342)			::NotesSubstate_obj::typeSelected = 2;
            		}
HXLINE( 343)		if ((::NotesSubstate_obj::typeSelected > 2)) {
HXLINE( 344)			::NotesSubstate_obj::typeSelected = 0;
            		}
HXLINE( 346)		this->curValue = ( (Float)(::ClientPrefs_obj::arrowHSV->__get(::NotesSubstate_obj::curSelected).StaticCast< ::Array< int > >()->__get(::NotesSubstate_obj::typeSelected)) );
HXLINE( 347)		this->updateValue(null());
HXLINE( 349)		{
HXLINE( 349)			int _g = 0;
HXDLIN( 349)			int _g1 = this->grpNumbers->length;
HXDLIN( 349)			while((_g < _g1)){
HXLINE( 349)				_g = (_g + 1);
HXDLIN( 349)				int i = (_g - 1);
HXLINE( 350)				 ::Alphabet item = Dynamic( this->grpNumbers->members->__get(i)).StaticCast<  ::Alphabet >();
HXLINE( 351)				item->set_alpha(((Float)0.6));
HXLINE( 352)				if ((((::NotesSubstate_obj::curSelected * 3) + ::NotesSubstate_obj::typeSelected) == i)) {
HXLINE( 353)					item->set_alpha(( (Float)(1) ));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(NotesSubstate_obj,changeType,(void))

void NotesSubstate_obj::resetValue(int selected,int type){
            	HX_STACKFRAME(&_hx_pos_30acc222447c2979_358_resetValue)
HXLINE( 359)		this->curValue = ( (Float)(0) );
HXLINE( 360)		::ClientPrefs_obj::arrowHSV->__get(selected).StaticCast< ::Array< int > >()[type] = 0;
HXLINE( 361)		switch((int)(type)){
            			case (int)0: {
HXLINE( 362)				this->shaderArray->__get(selected).StaticCast<  ::ColorSwap >()->set_hue(( (Float)(0) ));
            			}
            			break;
            			case (int)1: {
HXLINE( 363)				this->shaderArray->__get(selected).StaticCast<  ::ColorSwap >()->set_saturation(( (Float)(0) ));
            			}
            			break;
            			case (int)2: {
HXLINE( 364)				this->shaderArray->__get(selected).StaticCast<  ::ColorSwap >()->set_brightness(( (Float)(0) ));
            			}
            			break;
            		}
HXLINE( 366)		Dynamic( this->grpNumbers->members->__get(((selected * 3) + type))).StaticCast<  ::Alphabet >()->changeText(HX_("0",30,00,00,00),null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(NotesSubstate_obj,resetValue,(void))

void NotesSubstate_obj::updateValue(::hx::Null< Float >  __o_change){
            		Float change = __o_change.Default(0);
            	HX_STACKFRAME(&_hx_pos_30acc222447c2979_368_updateValue)
HXLINE( 369)		 ::NotesSubstate _hx_tmp = ::hx::ObjectPtr<OBJ_>(this);
HXDLIN( 369)		_hx_tmp->curValue = (_hx_tmp->curValue + change);
HXLINE( 370)		int roundedValue = ::Math_obj::round(this->curValue);
HXLINE( 371)		Float max = ( (Float)(180) );
HXLINE( 372)		switch((int)(::NotesSubstate_obj::typeSelected)){
            			case (int)1: case (int)2: {
HXLINE( 373)				max = ( (Float)(100) );
            			}
            			break;
            		}
HXLINE( 376)		if ((roundedValue < -(max))) {
HXLINE( 377)			this->curValue = -(max);
            		}
            		else {
HXLINE( 378)			if ((roundedValue > max)) {
HXLINE( 379)				this->curValue = max;
            			}
            		}
HXLINE( 381)		roundedValue = ::Math_obj::round(this->curValue);
HXLINE( 382)		::ClientPrefs_obj::arrowHSV->__get(::NotesSubstate_obj::curSelected).StaticCast< ::Array< int > >()[::NotesSubstate_obj::typeSelected] = roundedValue;
HXLINE( 384)		switch((int)(::NotesSubstate_obj::typeSelected)){
            			case (int)0: {
HXLINE( 385)				this->shaderArray->__get(::NotesSubstate_obj::curSelected).StaticCast<  ::ColorSwap >()->set_hue((( (Float)(roundedValue) ) / ( (Float)(360) )));
            			}
            			break;
            			case (int)1: {
HXLINE( 386)				this->shaderArray->__get(::NotesSubstate_obj::curSelected).StaticCast<  ::ColorSwap >()->set_saturation((( (Float)(roundedValue) ) / ( (Float)(100) )));
            			}
            			break;
            			case (int)2: {
HXLINE( 387)				this->shaderArray->__get(::NotesSubstate_obj::curSelected).StaticCast<  ::ColorSwap >()->set_brightness((( (Float)(roundedValue) ) / ( (Float)(100) )));
            			}
            			break;
            		}
HXLINE( 389)		 ::Alphabet _hx_tmp1 = Dynamic( this->grpNumbers->members->__get(((::NotesSubstate_obj::curSelected * 3) + ::NotesSubstate_obj::typeSelected))).StaticCast<  ::Alphabet >();
HXDLIN( 389)		_hx_tmp1->changeText(::Std_obj::string(roundedValue),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(NotesSubstate_obj,updateValue,(void))

int NotesSubstate_obj::curSelected;

int NotesSubstate_obj::typeSelected;


::hx::ObjectPtr< NotesSubstate_obj > NotesSubstate_obj::__new() {
	::hx::ObjectPtr< NotesSubstate_obj > __this = new NotesSubstate_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< NotesSubstate_obj > NotesSubstate_obj::__alloc(::hx::Ctx *_hx_ctx) {
	NotesSubstate_obj *__this = (NotesSubstate_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NotesSubstate_obj), true, "NotesSubstate"));
	*(void **)__this = NotesSubstate_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

NotesSubstate_obj::NotesSubstate_obj()
{
}

void NotesSubstate_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NotesSubstate);
	HX_MARK_MEMBER_NAME(grpNumbers,"grpNumbers");
	HX_MARK_MEMBER_NAME(grpNotes,"grpNotes");
	HX_MARK_MEMBER_NAME(shaderArray,"shaderArray");
	HX_MARK_MEMBER_NAME(curValue,"curValue");
	HX_MARK_MEMBER_NAME(holdTime,"holdTime");
	HX_MARK_MEMBER_NAME(hsvText,"hsvText");
	HX_MARK_MEMBER_NAME(nextAccept,"nextAccept");
	HX_MARK_MEMBER_NAME(posX,"posX");
	HX_MARK_MEMBER_NAME(changingNote,"changingNote");
	HX_MARK_MEMBER_NAME(hsvTextOffsets,"hsvTextOffsets");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void NotesSubstate_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(grpNumbers,"grpNumbers");
	HX_VISIT_MEMBER_NAME(grpNotes,"grpNotes");
	HX_VISIT_MEMBER_NAME(shaderArray,"shaderArray");
	HX_VISIT_MEMBER_NAME(curValue,"curValue");
	HX_VISIT_MEMBER_NAME(holdTime,"holdTime");
	HX_VISIT_MEMBER_NAME(hsvText,"hsvText");
	HX_VISIT_MEMBER_NAME(nextAccept,"nextAccept");
	HX_VISIT_MEMBER_NAME(posX,"posX");
	HX_VISIT_MEMBER_NAME(changingNote,"changingNote");
	HX_VISIT_MEMBER_NAME(hsvTextOffsets,"hsvTextOffsets");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val NotesSubstate_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"posX") ) { return ::hx::Val( posX ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hsvText") ) { return ::hx::Val( hsvText ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"grpNotes") ) { return ::hx::Val( grpNotes ); }
		if (HX_FIELD_EQ(inName,"curValue") ) { return ::hx::Val( curValue ); }
		if (HX_FIELD_EQ(inName,"holdTime") ) { return ::hx::Val( holdTime ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpNumbers") ) { return ::hx::Val( grpNumbers ); }
		if (HX_FIELD_EQ(inName,"nextAccept") ) { return ::hx::Val( nextAccept ); }
		if (HX_FIELD_EQ(inName,"changeType") ) { return ::hx::Val( changeType_dyn() ); }
		if (HX_FIELD_EQ(inName,"resetValue") ) { return ::hx::Val( resetValue_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"shaderArray") ) { return ::hx::Val( shaderArray ); }
		if (HX_FIELD_EQ(inName,"updateValue") ) { return ::hx::Val( updateValue_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"changingNote") ) { return ::hx::Val( changingNote ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"hsvTextOffsets") ) { return ::hx::Val( hsvTextOffsets ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"changeSelection") ) { return ::hx::Val( changeSelection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool NotesSubstate_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { outValue = ( curSelected ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"typeSelected") ) { outValue = ( typeSelected ); return true; }
	}
	return false;
}

::hx::Val NotesSubstate_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"posX") ) { posX=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hsvText") ) { hsvText=inValue.Cast<  ::Alphabet >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"grpNotes") ) { grpNotes=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"curValue") ) { curValue=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"holdTime") ) { holdTime=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"grpNumbers") ) { grpNumbers=inValue.Cast<  ::flixel::group::FlxTypedGroup >(); return inValue; }
		if (HX_FIELD_EQ(inName,"nextAccept") ) { nextAccept=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"shaderArray") ) { shaderArray=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"changingNote") ) { changingNote=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"hsvTextOffsets") ) { hsvTextOffsets=inValue.Cast< ::Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool NotesSubstate_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"curSelected") ) { curSelected=ioValue.Cast< int >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"typeSelected") ) { typeSelected=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void NotesSubstate_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("grpNumbers",25,7c,95,ca));
	outFields->push(HX_("grpNotes",1c,82,cb,82));
	outFields->push(HX_("shaderArray",34,18,bc,fc));
	outFields->push(HX_("curValue",d1,79,66,79));
	outFields->push(HX_("holdTime",ec,cc,bf,3e));
	outFields->push(HX_("hsvText",58,29,de,08));
	outFields->push(HX_("nextAccept",5b,44,38,c0));
	outFields->push(HX_("posX",44,84,5c,4a));
	outFields->push(HX_("changingNote",3f,d5,59,d6));
	outFields->push(HX_("hsvTextOffsets",08,63,36,51));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NotesSubstate_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(NotesSubstate_obj,grpNumbers),HX_("grpNumbers",25,7c,95,ca)},
	{::hx::fsObject /*  ::flixel::group::FlxTypedGroup */ ,(int)offsetof(NotesSubstate_obj,grpNotes),HX_("grpNotes",1c,82,cb,82)},
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(int)offsetof(NotesSubstate_obj,shaderArray),HX_("shaderArray",34,18,bc,fc)},
	{::hx::fsFloat,(int)offsetof(NotesSubstate_obj,curValue),HX_("curValue",d1,79,66,79)},
	{::hx::fsFloat,(int)offsetof(NotesSubstate_obj,holdTime),HX_("holdTime",ec,cc,bf,3e)},
	{::hx::fsObject /*  ::Alphabet */ ,(int)offsetof(NotesSubstate_obj,hsvText),HX_("hsvText",58,29,de,08)},
	{::hx::fsInt,(int)offsetof(NotesSubstate_obj,nextAccept),HX_("nextAccept",5b,44,38,c0)},
	{::hx::fsInt,(int)offsetof(NotesSubstate_obj,posX),HX_("posX",44,84,5c,4a)},
	{::hx::fsBool,(int)offsetof(NotesSubstate_obj,changingNote),HX_("changingNote",3f,d5,59,d6)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(NotesSubstate_obj,hsvTextOffsets),HX_("hsvTextOffsets",08,63,36,51)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo NotesSubstate_obj_sStaticStorageInfo[] = {
	{::hx::fsInt,(void *) &NotesSubstate_obj::curSelected,HX_("curSelected",fb,eb,ab,32)},
	{::hx::fsInt,(void *) &NotesSubstate_obj::typeSelected,HX_("typeSelected",35,23,d0,98)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String NotesSubstate_obj_sMemberFields[] = {
	HX_("grpNumbers",25,7c,95,ca),
	HX_("grpNotes",1c,82,cb,82),
	HX_("shaderArray",34,18,bc,fc),
	HX_("curValue",d1,79,66,79),
	HX_("holdTime",ec,cc,bf,3e),
	HX_("hsvText",58,29,de,08),
	HX_("nextAccept",5b,44,38,c0),
	HX_("posX",44,84,5c,4a),
	HX_("changingNote",3f,d5,59,d6),
	HX_("hsvTextOffsets",08,63,36,51),
	HX_("update",09,86,05,87),
	HX_("changeSelection",bc,98,b5,48),
	HX_("changeType",4a,28,52,27),
	HX_("resetValue",22,b7,54,1a),
	HX_("updateValue",a8,e8,50,17),
	::String(null()) };

static void NotesSubstate_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NotesSubstate_obj::curSelected,"curSelected");
	HX_MARK_MEMBER_NAME(NotesSubstate_obj::typeSelected,"typeSelected");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NotesSubstate_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NotesSubstate_obj::curSelected,"curSelected");
	HX_VISIT_MEMBER_NAME(NotesSubstate_obj::typeSelected,"typeSelected");
};

#endif

::hx::Class NotesSubstate_obj::__mClass;

static ::String NotesSubstate_obj_sStaticFields[] = {
	HX_("curSelected",fb,eb,ab,32),
	HX_("typeSelected",35,23,d0,98),
	::String(null())
};

void NotesSubstate_obj::__register()
{
	NotesSubstate_obj _hx_dummy;
	NotesSubstate_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("NotesSubstate",d2,ed,f1,06);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &NotesSubstate_obj::__GetStatic;
	__mClass->mSetStaticField = &NotesSubstate_obj::__SetStatic;
	__mClass->mMarkFunc = NotesSubstate_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(NotesSubstate_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NotesSubstate_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NotesSubstate_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NotesSubstate_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NotesSubstate_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NotesSubstate_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void NotesSubstate_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_30acc222447c2979_130_boot)
HXDLIN( 130)		curSelected = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_30acc222447c2979_131_boot)
HXDLIN( 131)		typeSelected = 0;
            	}
}

