#include QMK_KEYBOARD_H

/* THIS FILE WAS GENERATED!
 *
 * This file was generated by qmk json2c. You may or may not want to
 * edit it directly.
 */

enum tap_hold_mods_ac {
    LCTENT = LCTL_T(KC_ENT),
    LSFSPC = LSFT_T(KC_SPC),
    RSFBSP = RSFT_T(KC_BSPC),
    LALESC = LALT_T(KC_ESC),

    RLCTL = RCTL(KC_LCTRL),

    LA_TAB = LALT_T(KC_TAB),
};

enum layers {
    _KRAUTCAT_BASE = 0,
    _KRAUTCAT_RIGTHED,
    _KRAUTCAT_LEFTED,
    _KRAUTCAT_WM,
    _KRAUTCAT_MEDIA,
};

enum layers_ac {
    LT_RGT_TAB = LT(_KRAUTCAT_RIGTHED, KC_TAB),
    TT_LFT = TT(_KRAUTCAT_LEFTED),
    TT_WM = TT(_KRAUTCAT_WM),

    LM_WM = LM(_KRAUTCAT_WM, MOD_LGUI),
    MO_WM = MO(_KRAUTCAT_WM),
    TG_WM = TG(_KRAUTCAT_WM),
};
    
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_KRAUTCAT_BASE] = LAYOUT(
    //┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐                            ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐
    //│         │         │         │         │         │         │                            │         │         │         │         │         │         │
        KC_NO,    KC_1,     KC_2,     KC_3,     KC_4,     KC_5,                                  KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_NO,
    //│         │         │         │         │         │         │                            │         │         │         │         │         │         │
    //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                            ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
    //│         │         │         │         │         │         │                            │         │         │         │         │         │         │
        LA_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,                                  KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_ENT,
    //│         │         │         │         │         │         │                            │         │         │         │         │         │         │
    //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                            ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
    //│         │         │         │         │         │         │                            │         │         │         │         │         │         │
        LGUI_T(KC_TAB),   KC_A,     KC_S,     KC_D,     KC_F,     KC_G,                                  KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  RGUI_T(KC_QUOT), 
    //│         │         │         │         │         │         │                            │         │         │         │         │         │         │
    //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐        ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
    //│         │         │         │         │         │         │         │        │         │         │         │         │         │         │         │
        KC_LSPO,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_NO,             KC_NO,    KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSPC, 
    //│         │         │         │         │         │         │         │        │         │         │         │         │         │         │         │
    //└─────────┴─────────┴─────────┴────┬────┴────┬────┴────┬────┴────┬────┘        └────┬────┴────┬────┴────┬────┴────┬────┴─────────┴─────────┴─────────┘
    //                                   │         │         │         │                  │         │         │         │
                                           LCTENT,   LSFSPC,   LT_RGT_TAB,                      TT_LFT,   RSFBSP,   LALESC
    //                                   │         │         │         │                  │         │         │         │
    //                                   └─────────┴─────────┴─────────┘                  └─────────┴─────────┴─────────┘
    ),

	[_KRAUTCAT_RIGTHED] = LAYOUT(
    //┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐                            ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐
    //│         │         │         │         │         │         │                            │         │         │         │         │         │         │
        KC_NO,    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,                                 KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,
    //│         │         │         │         │         │         │                            │         │         │         │         │         │         │
    //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                            ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
    //│         │         │         │         │         │         │                            │         │         │         │         │         │         │
        KC_TAB,    KC_EXLM,  KC_AT,    KC_HASH,  KC_DLR,   KC_PERC,                               KC_CIRC,  KC_AMPR,  KC_ASTR,  RLCTL,    KC_NO,    KC_F12,
    //│         │         │         │         │         │         │                            │         │         │         │         │         │         │
    //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                            ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
    //│         │         │         │         │         │         │                            │         │         │         │         │         │         │
        KC_LCTL,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                                 KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_BSLS,  KC_RCTL,
    //│         │         │         │         │         │         │                            │         │         │         │         │         │         │
    //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐        ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
    //│         │         │         │         │         │         │         │        │         │         │         │         │         │         │         │
        _______,  KC_NO,    KC_HOME,  KC_PGUP,  KC_NO,    KC_NO,    KC_NO,             KC_RPRN,  KC_RCBR,  KC_RBRC,  KC_PGDN,  KC_END,   KC_NO,    _______,
    //│         │         │         │         │         │         │         │        │         │         │         │         │         │         │         │
    //└─────────┴─────────┴─────────┴────┬────┴────┬────┴────┬────┴────┬────┘        └────┬────┴────┬────┴────┬────┴────┬────┴─────────┴─────────┴─────────┘
    //                                   │         │         │         │                  │         │         │         │
                                           _______,  _______,  _______,                     LM_WM,    RGUI_T(KC_DEL), KC_RGUI
    //                                   │         │         │         │                  │         │         │         │
    //                                   └─────────┴─────────┴─────────┘                  └─────────┴─────────┴─────────┘
    ),

    [_KRAUTCAT_LEFTED] = LAYOUT(
    //┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐                            ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐
    //│         │         │         │         │         │         │                            │         │         │         │         │         │         │
        KC_NO,    KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,                                 KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11, 
    //│         │         │         │         │         │         │                            │         │         │         │         │         │         │
    //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                            ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
    //│         │         │         │         │         │         │                            │         │         │         │         │         │         │
        KC_NO,    KC_EXLM,  KC_AT,    KC_HASH,  KC_DLR,   KC_PERC,                               KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_NO,    KC_NO,    KC_F12, 
    //│         │         │         │         │         │         │                            │         │         │         │         │         │         │
    //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                            ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
    //│         │         │         │         │         │         │                            │         │         │         │         │         │         │
        KC_LCTL,  KC_GRV,   KC_NO,    KC_NO,    KC_MINS,  KC_EQL,                                KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_BSLS,  KC_RCTL, 
    //│         │         │         │         │         │         │                            │         │         │         │         │         │         │
    //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐        ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
    //│         │         │         │         │         │         │         │        │         │         │         │         │         │         │         │
        _______,  KC_NO,    KC_HOME,  KC_PGUP,  KC_LBRC,  KC_LCBR,  KC_LPRN,           KC_NO,    KC_NO,    KC_NO,    KC_PGDN,  KC_END,   KC_NO,    _______,
    //│         │         │         │         │         │         │         │        │         │         │         │         │         │         │         │
    //└─────────┴─────────┴─────────┴────┬────┴────┬────┴────┬────┴────┬────┘        └────┬────┴────┬────┴────┬────┴────┬────┴─────────┴─────────┴─────────┘
    //                                   │         │         │         │                  │         │         │         │
                                           KC_LGUI, LGUI_T(KC_TAB), KC_NO,                    TG(2),    _______,  KC_NO
    //                                   │         │         │         │                  │         │         │         │
    //                                   └─────────┴─────────┴─────────┘                  └─────────┴─────────┴─────────┘
    ),

	[_KRAUTCAT_WM] = LAYOUT(
    //┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐                            ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐
    //│         │         │         │         │         │         │                            │         │         │         │         │         │         │
        RESET,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                                 KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO, 
    //│         │         │         │         │         │         │                            │         │         │         │         │         │         │
    //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                            ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
    //│         │         │         │         │         │         │                            │         │         │         │         │         │         │
        KC_NO,    KC_NO,    _______,  _______,  KC_NO,    _______,                               KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO, 
    //│         │         │         │         │         │         │                            │         │         │         │         │         │         │
    //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                            ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
    //│         │         │         │         │         │         │                            │         │         │         │         │         │         │
        KC_NO,    KC_NO,    _______,  KC_NO,    KC_NO,    KC_NO,                                 KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_NO,    KC_NO,
    //│         │         │         │         │         │         │                            │         │         │         │         │         │         │
    //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐        ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
    //│         │         │         │         │         │         │         │        │         │         │         │         │         │         │         │
        _______,  KC_NO,    KC_COMM,  KC_PGUP,  KC_NO,    KC_NO,    KC_NO,             KC_NO,    KC_NO,    KC_NO,    KC_PGDN,  KC_DOT,   KC_NO,    _______, 
    //│         │         │         │         │         │         │         │        │         │         │         │         │         │         │         │
    //└─────────┴─────────┴─────────┴────┬────┴────┬────┴────┬────┴────┬────┘        └────┬────┴────┬────┴────┬────┴────┬────┴─────────┴─────────┴─────────┘
    //                                   │         │         │         │                  │         │         │         │
                                           KC_NO,    KC_NO,    KC_NO,                       TG_WM,    _______,  KC_NO
    //                                   │         │         │         │                  │         │         │         │
    //                                   └─────────┴─────────┴─────────┘                  └─────────┴─────────┴─────────┘
    ),

	[_KRAUTCAT_MEDIA] = LAYOUT(
    //┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐                            ┌─────────┬─────────┬─────────┬─────────┬─────────┬─────────┐
    //│         │         │         │         │         │         │                            │         │         │         │         │         │         │
        RESET,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,                                 KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO, 
    //│         │         │         │         │         │         │                            │         │         │         │         │         │         │
    //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                            ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
    //│         │         │         │         │         │         │                            │         │         │         │         │         │         │
        KC_NO,    KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_NO,    KC_NO,                                 KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO, 
    //│         │         │         │         │         │         │                            │         │         │         │         │         │         │
    //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤                            ├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
    //│         │         │         │         │         │         │                            │         │         │         │         │         │         │
        KC_NO,    KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_NO,    KC_NO,                                 KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,
    //│         │         │         │         │         │         │                            │         │         │         │         │         │         │
    //├─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┐        ┌─────────┼─────────┼─────────┼─────────┼─────────┼─────────┼─────────┤
    //│         │         │         │         │         │         │         │        │         │         │         │         │         │         │         │
        KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,             KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO, 
    //│         │         │         │         │         │         │         │        │         │         │         │         │         │         │         │
    //└─────────┴─────────┴─────────┴────┬────┴────┬────┴────┬────┴────┬────┘        └────┬────┴────┬────┴────┬────┴────┬────┴─────────┴─────────┴─────────┘
    //                                   │         │         │         │                  │         │         │         │
                                           KC_NO,    KC_NO,    KC_NO,                       _______,  _______,  KC_NO
    //                                   │         │         │         │                  │         │         │         │
    //                                   └─────────┴─────────┴─────────┘                  └─────────┴─────────┴─────────┘
    )
};
