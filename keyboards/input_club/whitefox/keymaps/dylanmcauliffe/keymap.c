/*
Copyright 2015 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#include QMK_KEYBOARD_H

enum layers {
	_QWERTY = 0,
	_COLEMAK,
	_FUNCTION,
	_QUANTUM,
	_BLANK,
};

#define KC_OSFN	OSL(_FUNCTION)
#define KC_QNTM	OSL(_QUANTUM)
#define DF_QWTY	DF(_QWERTY)
#define DF_CLMK	DF(_COLEMAK)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_aria(
	    KC_ESC,	KC_1,	KC_2,	KC_3,	KC_4,	KC_5,	KC_6,	KC_7,	KC_8,	KC_9,	KC_0,	KC_MINS,	KC_EQL,	KC_BSPC,	KC_GRV,
	    KC_TAB,	KC_Q,	KC_W,	KC_E,	KC_R,	KC_T,	KC_Y,	KC_U,	KC_I,	KC_O,	KC_P,	KC_LBRC,	KC_RBRC,	KC_BSLS,	KC_DEL,
	    KC_OSFN,	KC_A,	KC_S,	KC_D,	KC_F,	KC_G,	KC_H,	KC_J,	KC_K,	KC_L,	KC_SCLN,	KC_QUOT,	KC_ENT,			KC_HOME,
	    KC_LSFT,			KC_Z,	KC_X,	KC_C,	KC_V,	KC_B,	KC_N,	KC_M,	KC_COMM,	KC_DOT,	KC_SLSH,	KC_RSFT,	KC_UP,	KC_END,
	    KC_LCTL,	KC_LGUI,	KC_LALT,							KC_SPC,					KC_LGUI,	KC_QNTM,			KC_LEFT,	KC_DOWN,	KC_RGHT
    ),

    [_COLEMAK] = LAYOUT_aria(
	    _______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,
	    _______,	_______,	_______,	KC_F,	KC_P,	KC_G,	KC_J,	KC_L,	KC_U,	KC_Y,	KC_SCLN,	_______,	_______,	_______,	_______,
	    _______,	_______,	KC_R,	KC_S,	KC_T,	KC_D,	_______,	KC_N,	KC_E,	KC_I,	KC_O,	_______,	_______,			_______,
	    _______,			_______,	_______,	_______,	_______,	KC_K,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,
	    _______,	_______,	_______,							_______,					_______,	_______,			_______,	_______,	_______
    ),

	[_FUNCTION] = LAYOUT_aria(
	    _______,	KC_F1,	KC_F2,	KC_F3,	KC_F4,	KC_F5,	KC_F6,	KC_F7,	KC_F8,	KC_F9,	KC_F10,	KC_F11,	KC_F12,	KC_PAUS,	KC_PSCR,
	    KC_NUM,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	KC_INS,
	    _______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	KC_MPLY,			KC_PGUP,
	    KC_CAPS,			_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	KC_MUTE,	KC_VOLU,	KC_PGDN,
	    _______,	_______,	_______,							_______,					_______,	_______,			KC_MPRV,	KC_VOLD,	KC_MNXT
    ),

    [_QUANTUM] = LAYOUT_aria(
	    QK_BOOT,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,
	    _______,	DF_QWTY,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	EE_CLR,
	    _______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,			_______,
	    _______,			_______,	_______,	DF_CLMK,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,
	    QK_RBT,	_______,	_______,							_______,					_______,	_______,			_______,	_______,	_______
    ),

	[_BLANK] = LAYOUT_aria(
	    _______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,
	    _______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,
	    _______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,			_______,
	    _______,			_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,	_______,
	    _______,	_______,	_______,							_______,					_______,	_______,			_______,	_______,	_______
    ),
};
