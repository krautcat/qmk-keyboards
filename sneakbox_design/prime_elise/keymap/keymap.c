/* Copyright 2018 Holten Campbell
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

#include "krautcat.h"

enum krautcat_keycodes {
    LRT_ENT = LT(_KRAUTCAT_RIGHTED, KC_ENT),    // Tap is Enter, hold is turn on layer one, _KRAUTCAT_RIGHTED.
    LLT_ESC = LT(_KRAUTCAT_LEFTED, KC_ESC),     // Tap is Escape, hold is turn on layer two, _KRAUTCAT_LEFTED.
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_KRAUTCAT_BASE] = LAYOUT(
    //┌─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┐                 ┌─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┐
    //│             │             │             │             │             │             │                 │             │             │             │             │             │             │             │
        LALT_GRV,     KC_Q,         KC_W,         KC_E,         KC_R,         KC_T,                           KC_Y,         KC_U,         KC_I,         KC_O,         KC_P,         KC_LBRC,      KC_RBRC,
    //│             │             │             │             │             │             │                 │             │             │             │             │             │             │             │
    //├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤                 ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┴─────────────┤
    //│             │             │             │             │             │             │                 │             │             │             │             │             │                           │
        LCTL_TAB,     KC_A,         KC_S,         KC_D,         KC_F,         KC_G,                           KC_H,         KC_J,         KC_K,         KC_L,         KC_SCLN,      RCTL_ENT,
    //│             │             │             │             │             │             │                 │             │             │             │             │             │                           │
    //├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤   ┌─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼───────────────────────────┤
    //│             │             │             │             │             │             │   │             │             │             │             │             │             │                           │
        SC_LSPO,      KC_Z,         KC_X,         KC_C,         KC_V,         KC_B,             MO(3),        KC_N,         KC_M,         KC_COMM,      KC_DOT,       KC_SLSH,      SC_RSPC,
    //│             │             │             │             │             │             │   │             │             │             │             │             │             │                           │
    //├─────────────┼─────────────┼─────────┬───┴─────────────┼─────────────┴─────────────┤   ├─────────────┴─────────────┴───┬─────────┴─────┬───────┴───────────┬─┴───────────┬─┴───────────────────────────┤
    //│             │             │         │                 │                           │   │                               │               │                   │             │                             │
        KC_LGUI,      LNAV_ENT,               LDIG_TAB,         LSFT_SPC,                       RSFT_BSPC,                      LDIG_DEL,                           LNAV_ESC,     KC_RGUI
    //│             │             │         │                 │                           │   │                               │               │                   │             │                             │
    //└─────────────┴─────────────┘         └─────────────────┴───────────────────────────┘   └───────────────────────────────┴───────────────┘                   └─────────────┴─────────────────────────────┘
    ),

    [_KRAUTCAT_DIGITS] = LAYOUT(
    //┌─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┐                 ┌─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┐
    //│             │             │             │             │             │             │                 │             │             │             │             │             │             │             │
        LALT_ESC,     KC_F1,        KC_F2,        KC_F3,        KC_F4,        KC_F5,			      KC_F6,        KC_F7,        KC_F8,        KC_F9,        KC_F10,       KC_F11,       RALT_F12,
    //│             │             │             │             │             │             │                 │             │             │             │             │             │             │             │
    //├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤                 ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┴─────────────┤
    //│             │             │             │             │             │             │                 │             │             │             │             │             │                           │
        LCTL_PLUS,    KC_EXLM,      KC_AT,        KC_HASH,      KC_DLR,       KC_PERC,                        KC_CIRC,      KC_AMPR,      KC_ASTR,      KC_LPRN,      KC_RPRN,      RCTL_QTE,
    //│             │             │             │             │             │             │                 │             │             │             │             │             │                           │
    //├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤   ┌─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼───────────────────────────┤
    //│             │             │             │             │             │             │   │             │             │             │             │             │             │                           │
        LSFT_BSLS,    KC_1,         KC_2,         KC_3,         KC_4,         KC_5,             KC_MPLY,      KC_6,         KC_7,         KC_8,         KC_9,         KC_0,         RSFT_MNS,
    //│             │             │             │             │             │             │   │             │             │             │             │             │             │                           │
    //├─────────────┼─────────────┼─────────┬───┴─────────────┼─────────────┴─────────────┤   ├─────────────┴─────────────┴───┬─────────┴─────┬───────┴───────────┬─┴───────────┬─┴───────────────────────────┤
    //│             │             │         │                 │                           │   │                               │               │                   │             │                             │
        _______,      _______,                _______,          _______,                        _______,                        _______,                            _______,      _______
    //│             │             │         │                 │                           │   │                               │               │                   │             │                             │
    //└─────────────┴─────────────┘         └─────────────────┴───────────────────────────┘   └───────────────────────────────┴───────────────┘                   └─────────────┴─────────────────────────────┘
    ),

    [_KRAUTCAT_NAV] = LAYOUT(
    //┌─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┐                 ┌─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┐
    //│             │             │             │             │             │             │                 │             │             │             │             │             │             │             │
        KC_LALT,      KC_NO,        KC_NO,        KC_NO,        KC_NO,        KC_NO,                          KC_NO,        KC_NO,        KC_NO,        KC_NO,        KC_NO,        KC_NO,        KC_RALT,
    //│             │             │             │             │             │             │                 │             │             │             │             │             │             │             │
    //├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤                 ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┴─────────────┤
    //│             │             │             │             │             │             │                 │             │             │             │             │             │                           │
        KC_LCTL,      KC_NO,        KC_NO,        KC_NO,        KC_NO,        KC_NO,                          KC_LEFT,      KC_DOWN,      KC_UP,        KC_RGHT,      KC_NO,        KC_RCTL,
    //│             │             │             │             │             │             │                 │             │             │             │             │             │                           │
    //├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤   ┌─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼───────────────────────────┤
    //│             │             │             │             │             │             │   │             │             │             │             │             │             │                           │
        KC_LSFT,      KC_NO,        KC_END,       KC_PGDN,      KC_LBRC,      KC_LCBR,          MO(3),        KC_NO,        KC_NO,        KC_PGUP,      KC_HOME,      KC_NO,        KC_RSFT,
    //│             │             │             │             │             │             │   │             │             │             │             │             │             │                           │
    //├─────────────┼─────────────┼─────────┬───┴─────────────┼─────────────┴─────────────┤   ├─────────────┴─────────────┴───┬─────────┴─────┬───────┴───────────┬─┴───────────┬─┴───────────────────────────┤
    //│             │             │         │                 │                           │   │                               │               │                   │             │                             │
        _______,      _______,                _______,          _______,                        _______,                        _______,                            _______,      _______
    //│             │             │         │                 │                           │   │                               │               │                   │             │                             │
    //└─────────────┴─────────────┘         └─────────────────┴───────────────────────────┘   └───────────────────────────────┴───────────────┘                   └─────────────┴─────────────────────────────┘
    ),

    [_KRAUTCAT_WM] = LAYOUT(
    //┌─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┐                 ┌─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┐
    //│             │             │             │             │             │             │                 │             │             │             │             │             │             │             │
        QK_RBT,       _______,      _______,      _______,      _______,      _______,                        _______,      _______,      _______,      _______,      _______,      _______,      _______,
    //│             │             │             │             │             │             │                 │             │             │             │             │             │             │             │
    //├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤                 ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┴─────────────┤
    //│             │             │             │             │             │             │                 │             │             │             │             │             │                           │
        _______,      KC_MPRV,      KC_MPLY,      KC_MNXT,      _______,      _______,                        _______,      _______,      _______,      _______,      _______,      _______,
    //│             │             │             │             │             │             │                 │             │             │             │             │             │                           │
    //├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤   ┌─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼───────────────────────────┤
    //│             │             │             │             │             │             │   │             │             │             │             │             │             │                           │
        _______,      KC_VOLD,      KC_VOLU,      KC_MUTE,      _______,      _______,          MO(3),        _______,      _______,      _______,      _______,      _______,      _______,
    //│             │             │             │             │             │             │   │             │             │             │             │             │             │                           │
    //├─────────────┼─────────────┼─────────┬───┴─────────────┼─────────────┴─────────────┤   ├─────────────┴─────────────┴───┬─────────┴─────┬───────┴───────────┬─┴───────────┬─┴───────────────────────────┤
    //│             │             │         │                 │                           │   │                               │               │                   │             │                             │
        _______,      _______,                _______,           _______,                       _______,                        _______,                            _______,      _______
    //│             │             │         │                 │                           │   │                               │               │                   │             │                             │
    //└─────────────┴─────────────┘         └─────────────────┴───────────────────────────┘   └───────────────────────────────┴───────────────┘                   └─────────────┴─────────────────────────────┘
    )
};

void matrix_init_user(void) {
  // set CapsLock LED to output and low
  setPinOutput(B1);
  writePinHigh(B1);
  // set NumLock LED to output and low
  setPinOutput(B2);
  writePinHigh(B2);
  // set ScrollLock LED to output and low
  setPinOutput(B3);
  writePinHigh(B3);
}

void matrix_scan_user(void) {

}

//function for layer indicator LED
layer_state_t layer_state_set_user(layer_state_t state)
{
    if (get_highest_layer(state) == 1) {
        writePinHigh(B1);
    } else {
        writePinLow(B1);
    }
    return state;
}

