/*
Copyright 2012,2013 Jun Wako <wakojun@gmail.com>

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

#include "krautcat.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_KRAUTCAT_BASE] = LAYOUT_ortho_5x12(
    //┌─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┐
    //│             │             │             │             │             │             │             │             │             │             │             │             │
        KC_BSLS,      KC_1,         KC_2,         KC_3,         KC_4,         KC_5,         KC_6,         KC_7,         KC_8,         KC_9,         KC_0,         KC_GRV,
    //│             │             │             │             │             │             │             │             │             │             │             │             │
    //├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
    //│             │             │             │             │             │             │             │             │             │             │             │             │
        LGUI_LBRC,    KC_Q,         KC_W,         KC_E,         KC_R,         KC_T,         KC_Y,         KC_U,         KC_I,         KC_O,         KC_P,         RGUI_RBRC,
    //│             │             │             │             │             │             │             │             │             │             │             │             │
    //├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
    //│             │             │             │             │             │             │             │             │             │             │             │             │
        LCTL_TAB,     KC_A,         KC_S,         KC_D,         KC_F,         KC_G,         KC_H,         KC_J,         KC_K,         KC_L,         KC_SCLN,      RCTL_QTE, 
    //│             │             │             │             │             │             │             │             │             │             │             │             │
    //├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
    //│             │             │             │             │             │             │             │             │             │             │             │             │
        LSFT_BSLS,    KC_Z,         KC_X,         KC_C,         KC_V,         KC_B,         KC_N,         KC_M,         KC_COMM,      KC_DOT,       KC_SLSH,      RSFT_MNS,
    //│             │             │             │             │             │             │             │             │             │             │             │             │
    //├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
    //│             │             │             │             │             │             │             │             │             │             │             │             │
        KC_LGUI,      KC_LCTL,      KC_LALT,      LNAV_ENT,     LDIG_TAB,     LSFT_SPC,     RSFT_BSPC,    LDIG_DEL,     LNAV_ESC,     KC_RALT,      KC_RCTL,      KC_RGUI 
    //│             │             │             │             │             │             │             │             │             │             │             │             │
    //└─────────────┴─────────────┴─────────────┴─────────────┴─────────────┴─────────────┴─────────────┴─────────────┴─────────────┴─────────────┴─────────────┴─────────────┘
    ),
    [_KRAUTCAT_DIGITS] = LAYOUT_ortho_5x12(
    //┌─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┐
    //│             │             │             │             │             │             │             │             │             │             │             │             │
        RESET,        KC_F1,        KC_F2,        KC_F3,        KC_F4,        KC_F5,        KC_F6,        KC_F7,        KC_F8,        KC_F9,        KC_F10,       KC_F11,
    //│             │             │             │             │             │             │             │             │             │             │             │             │
    //├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
    //│             │             │             │             │             │             │             │             │             │             │             │             │
        LGUI_F1,      KC_F2,        KC_F3,        KC_F4,        KC_F5,        KC_F6,        KC_F7,        KC_F8,        KC_F9,        KC_F10,       KC_F11,       RGUI_F12, 
    //│             │             │             │             │             │             │             │             │             │             │             │             │
    //├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
    //│             │             │             │             │             │             │             │             │             │             │             │             │
        LCTL_PLUS,    KC_EXLM,      KC_AT,	      KC_HASH,      KC_DLR,       KC_PERC,      KC_CIRC,      KC_AMPR,      KC_ASTR,      KC_LPRN,      KC_RPRN,      RCTL_UNDS,   
    //│             │             │             │             │             │             │             │             │             │             │             │             │
    //├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
    //│             │             │             │             │             │             │             │             │             │             │             │             │
        LALT_EQL,     KC_1,         KC_2,	      KC_3,	    	KC_4,   	  KC_5,	  	    KC_6,		   KC_7,		KC_8,	      KC_9,	    	 KC_0,   	  RALT_MNS,
    //│             │             │             │             │             │             │             │             │             │             │             │             │
    //├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
    //│             │             │             │             │             │             │             │             │             │             │             │             │
        _______,      _______,      _______,      _______,      _______,      _______,      _______,      _______,      _______,      _______,      _______,      _______
    //│             │             │             │             │             │             │             │             │             │             │             │             │
    //└─────────────┴─────────────┴─────────────┴─────────────┴─────────────┴─────────────┴─────────────┴─────────────┴─────────────┴─────────────┴─────────────┴─────────────┘
    ),

    [_KRAUTCAT_NAV] = LAYOUT_ortho_5x12(
    //┌─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┐
    //│             │             │             │             │             │             │             │             │             │             │             │             │
        KC_NO,        KC_F1,        KC_F2,        KC_F3,        KC_F4,        KC_F5,        KC_F6,        KC_F7,        KC_F8,        KC_F9,        KC_F10,       KC_F11, 
    //│             │             │             │             │             │             │             │             │             │             │             │             │
    //├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
    //│             │             │             │             │             │             │             │             │             │             │             │             │
        KC_LGUI,      KC_NO,        KC_NO,        KC_NO,        KC_NO,        KC_NO,        KC_NO,        KC_NO,        KC_NO,	      KC_NO,        KC_NO,	      KC_RGUI,
    //│             │             │             │             │             │             │             │             │             │             │             │             │
    //├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
    //│             │             │             │             │             │             │             │             │             │             │             │             │
        KC_LCTL,      KC_NO,        KC_NO,        KC_NO,        KC_NO,        KC_NO,        KC_LEFT,      KC_DOWN,      KC_UP,        KC_RGHT,      KC_NO,        KC_RCTL,
    //│             │             │             │             │             │             │             │             │             │             │             │             │
    //├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
    //│             │             │             │             │             │             │             │             │             │             │             │             │
        KC_LALT,      KC_NO,        KC_END,       KC_PGDN,      KC_NO,        KC_NO,        KC_NO,        KC_NO,        KC_PGUP,      KC_HOME,      KC_NO,        KC_RALT,
    //│             │             │             │             │             │             │             │             │             │             │             │             │
    //├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤
    //│             │             │             │             │             │             │             │             │             │             │             │             │
        _______,      _______,      _______,      _______,      _______,      _______,      _______,      _______,      _______,      _______,      _______,      _______
    //│             │             │             │             │             │             │             │             │             │             │             │             │
    //└─────────────┴─────────────┴─────────────┴─────────────┴─────────────┴─────────────┴─────────────┴─────────────┴─────────────┴─────────────┴─────────────┴─────────────┘
    )
};

bool get_ignore_mod_tap_interrupt(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LSFT_SPC:
            return true;
        default:
            return false;
    }
}
