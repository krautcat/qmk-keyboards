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

enum layers {
    _KRAUTCAT_BASE = 0,
    _KRAUTCAT_RIGHTED,
    _KRAUTCAT_LEFTED,
    _KRAUTCAT_WM,
    _KRAUTCAT_MEDIA,
};

enum krautcat_keycodes {
    LGUI_TAB = LGUI_T(KC_TAB),  // Tap is Tab, hold is Left GUI.
    RGUI_DEL = RGUI_T(KC_DEL),  // Tap is Delete, hold is Right GUI.

    LRT_SPC = LT(_KRAUTCAT_RIGHTED, KC_SPC),    // Tap is Space, hold is turn on layer one, _KRAUTCAT_RIGHTED.
    LLT_BSPC = LT(_KRAUTCAT_LEFTED, KC_BSPC),   // Tap is Backspace, hold is turn on layer two, _KRAUTCAT_LEFTED.
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_KRAUTCAT_BASE] = LAYOUT(
    //┌─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┐                 ┌─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┐
    //│             │             │             │             │             │             │                 │             │             │             │             │             │             │             │
        KC_GESC,      KC_Q,         KC_W,         KC_E,         KC_R,         KC_T,                           KC_Y,         KC_U,         KC_I,         KC_O,         KC_P,         KC_DEL,       KC_BSPC,
    //│             │             │             │             │             │             │                 │             │             │             │             │             │             │             │
    //├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤                 ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┴─────────────┤
    //│             │             │             │             │             │             │                 │             │             │             │             │             │                           │
        LGUI_TAB,     KC_A,         KC_S,         KC_D,         KC_F,         KC_G,                           KC_H,         KC_J,         KC_K,         KC_L,         KC_SCLN,      KC_ENT,
    //│             │             │             │             │             │             │                 │             │             │             │             │             │                           │
    //├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤   ┌─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼───────────────────────────┤
    //│             │             │             │             │             │             │   │             │             │             │             │             │             │                           │
        KC_LSPO,      KC_Z,         KC_X,         KC_C,         KC_V,         KC_B,             KC_MPLY,      KC_N,         KC_M,         KC_COMM,      KC_DOT,       KC_SLSH,      KC_RSPC,
    //│             │             │             │             │             │             │   │             │             │             │             │             │             │                           │
    //├─────────────┼─────────────┼─────────┬───┴─────────────┼─────────────┴─────────────┤   ├─────────────┴─────────────┴───┬─────────┴─────┬───────┴───────────┬─┴───────────┬─┴───────────────────────────┤
    //│             │             │         │                 │                           │   │                               │               │                   │             │                             │
        KC_LCTL,      KC_LGUI,                KC_LALT,          LRT_SPC,                        LLT_BSPC,                       KC_RALT,                            KC_RGUI,      KC_RCTL
    //│             │             │         │                 │                           │   │                               │               │                   │             │                             │
    //└─────────────┴─────────────┘         └─────────────────┴───────────────────────────┘   └───────────────────────────────┴───────────────┘                   └─────────────┴─────────────────────────────┘
    ),

    [_KRAUTCAT_RIGHTED] = LAYOUT(
    //┌─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┐                 ┌─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┐
    //│             │             │             │             │             │             │                 │             │             │             │             │             │             │             │
        KC_GRV,       KC_1,         KC_2,         KC_3,         KC_4,         KC_5,                           KC_6,         KC_7,         KC_8,         KC_9,         KC_0,         KC_MINS,      KC_EQL,
    //│             │             │             │             │             │             │                 │             │             │             │             │             │             │             │
    //├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤                 ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┴─────────────┤
    //│             │             │             │             │             │             │                 │             │             │             │             │             │                           │
        _______,      _______,      _______,      _______,      KC_MINS,      KC_EQL,                        KC_LEFT,      KC_DOWN,      KC_UP,        KC_RGHT,      KC_QUOT,      _______,
    //│             │             │             │             │             │             │                 │             │             │             │             │             │                           │
    //├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤   ┌─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼───────────────────────────┤
    //│             │             │             │             │             │             │   │             │             │             │             │             │             │                           │
        _______,      _______,       KC_END,      KC_PGDN,      KC_LBRC,      KC_LCBR,          _______,      KC_RCBR,      KC_RBRC,      KC_PGUP,      KC_HOME,      KC_BSLS,      _______,
    //│             │             │             │             │             │             │   │             │             │             │             │             │             │                           │
    //├─────────────┼─────────────┼─────────┬───┴─────────────┼─────────────┴─────────────┤   ├─────────────┴─────────────┴───┬─────────┴─────┬───────┴───────────┬─┴───────────┬─┴───────────────────────────┤
    //│             │             │         │                 │                           │   │                               │               │                   │             │                             │
        KC_LCTL,      KC_LALT,                _______,            _______,                        RGUI_DEL,                       _______,                            KC_RGUI,      KC_RCTL
    //│             │             │         │                 │                           │   │                               │               │                   │             │                             │
    //└─────────────┴─────────────┘         └─────────────────┴───────────────────────────┘   └───────────────────────────────┴───────────────┘                   └─────────────┴─────────────────────────────┘
    ),

    [_KRAUTCAT_LEFTED] = LAYOUT(
    //┌─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┐                 ┌─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┐
    //│             │             │             │             │             │             │                 │             │             │             │             │             │             │             │
        KC_GRV,       KC_F1,        KC_F2,        KC_F3,        KC_F4,        KC_F5,                          KC_F6,        KC_F7,        KC_F8,        KC_F9,        KC_F10,       KC_F11,       KC_F12,
    //│             │             │             │             │             │             │                 │             │             │             │             │             │             │             │
    //├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤                 ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┴─────────────┤
    //│             │             │             │             │             │             │                 │             │             │             │             │             │                           │
        _______,      _______,      _______,      _______,      KC_MINS,      KC_EQL,                         KC_LEFT,      KC_DOWN,      KC_UP,        KC_RGHT,      _______,      _______,
    //│             │             │             │             │             │             │                 │             │             │             │             │             │                           │
    //├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤   ┌─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼───────────────────────────┤
    //│             │             │             │             │             │             │   │             │             │             │             │             │             │                           │
        _______,      _______,       _______,      _______,     KC_LBRC,      KC_LCBR,          MO(3),        KC_RCBR,      KC_RBRC,      _______,      _______,      _______,      _______,
    //│             │             │             │             │             │             │   │             │             │             │             │             │             │                           │
    //├─────────────┼─────────────┼─────────┬───┴─────────────┼─────────────┴─────────────┤   ├─────────────┴─────────────┴───┬─────────┴─────┬───────┴───────────┬─┴───────────┬─┴───────────────────────────┤
    //│             │             │         │                 │                           │   │                               │               │                   │             │                             │
        KC_LCTL,      KC_LALT,                _______,           LGUI_TAB,                       _______,                        _______,                            KC_RGUI,      KC_RCTL
    //│             │             │         │                 │                           │   │                               │               │                   │             │                             │
    //└─────────────┴─────────────┘         └─────────────────┴───────────────────────────┘   └───────────────────────────────┴───────────────┘                   └─────────────┴─────────────────────────────┘
    ),

    [_KRAUTCAT_WM] = LAYOUT(
    //┌─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┐                 ┌─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┬─────────────┐
    //│             │             │             │             │             │             │                 │             │             │             │             │             │             │             │
        RESET,        _______,      _______,      _______,      _______,      _______,                        _______,      _______,      _______,      _______,      _______,      _______,      _______,
    //│             │             │             │             │             │             │                 │             │             │             │             │             │             │             │
    //├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤                 ├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┴─────────────┤
    //│             │             │             │             │             │             │                 │             │             │             │             │             │                           │
        _______,      _______,      _______,      _______,      _______,      _______,                        _______,      _______,      _______,      _______,      _______,      _______,
    //│             │             │             │             │             │             │                 │             │             │             │             │             │                           │
    //├─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┤   ┌─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼─────────────┼───────────────────────────┤
    //│             │             │             │             │             │             │   │             │             │             │             │             │             │                           │
        _______,      _______,      _______,      _______,      _______,      _______,          MO(3),        _______,      _______,      _______,      _______,      _______,      _______,
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
  writePinLow(B1);
  // set NumLock LED to output and low
  setPinOutput(B2);
  writePinLow(B2);
  // set ScrollLock LED to output and low
  setPinOutput(B3);
  writePinLow(B3);
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
