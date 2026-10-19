// Copyright 2024 SDK (@sdk66)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap_portuguese.h"
#include "rgb_record/rgb_record.h"

enum layers {
    _BL = 0,
    _FL,
    _MBL,
    _MFL,
    _DEFA,
};

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BL] = LAYOUT( /* Portuguese ISO Base (Win/Linux) */
        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_DEL,   KC_END,
        PT_BSLS,  PT_1,     PT_2,     PT_3,     PT_4,     PT_5,     PT_6,     PT_7,     PT_8,     PT_9,     PT_0,     PT_QUOT,  PT_LDAQ,  KC_BSPC,  KC_HOME,  
        KC_TAB,   PT_Q,     PT_W,     PT_E,     PT_R,     PT_T,     PT_Y,     PT_U,     PT_I,     PT_O,     PT_P,     PT_PLUS,  PT_ACUT,  KC_MUTE,  KC_PGUP,
        KC_CAPS,  PT_A,     PT_S,     PT_D,     PT_F,     PT_G,     PT_H,     PT_J,     PT_K,     PT_L,     PT_CCED,  PT_MORD,  PT_TILD,  KC_ENT,   KC_PGDN,          
        KC_LSFT,  PT_LABK,  PT_Z,     PT_X,     PT_C,     PT_V,     PT_B,     PT_N,     PT_M,     PT_COMM,  PT_DOT,   PT_MINS,  KC_RSFT,  KC_UP,
        KC_LCTL,  KC_LCMD,  KC_LALT,                      KC_SPC,                                 KC_ALGR,  MO(_FL),            KC_LEFT,  KC_DOWN,  KC_RGHT),

    [_FL] = LAYOUT( /* Function Layer (Win/Linux) */
        _______,  KC_MYCM,  KC_WHOM,  KC_MAIL,  KC_CALC,  KC_MSEL,  KC_MSTP,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_SCRL,  _______,
        _______,  RP_P0,    RP_P1,    RP_P2,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  RP_END,   KC_PSCR,   
        _______,  KC_BT1,   KC_BT2,   KC_BT3,   _______,  _______,  _______,  _______,  _______,  MO(_DEFA),KC_2G4,   _______,  KC_INS,   _______,  KC_PAUSE,  
        _______,  KC_NO,    TO(_MBL), _______,  _______,  _______,  _______,  _______,  _______,  MO(_DEFA),_______,  _______,  RM_NEXT,  HS_BATQ,  KC_END, 
        _______,  _______,  DEB_TOG,  _______,  _______,  _______,  NK_TOGG,  _______,  _______,  RM_HUEU,  _______,  _______,  MO(_DEFA),RM_VALU,
        _______,  GU_TOGG,  _______,                      EE_CLR,                                 _______,  _______,            RM_SPDD,  RM_VALD,  RM_SPDU),

    [_MBL] = LAYOUT( /* Portuguese ISO Base (macOS) */
        KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_DEL,   KC_END, 
        PT_BSLS,  PT_1,     PT_2,     PT_3,     PT_4,     PT_5,     PT_6,     PT_7,     PT_8,     PT_9,     PT_0,     PT_QUOT,  PT_LDAQ,  KC_BSPC,  KC_HOME,  
        KC_TAB,   PT_Q,     PT_W,     PT_E,     PT_R,     PT_T,     PT_Y,     PT_U,     PT_I,     PT_O,     PT_P,     PT_PLUS,  PT_ACUT,  KC_MUTE,  KC_PGUP,    
        KC_CAPS,  PT_A,     PT_S,     PT_D,     PT_F,     PT_G,     PT_H,     PT_J,     PT_K,     PT_L,     PT_CCED,  PT_MORD,  PT_TILD,  KC_ENT,   KC_PGDN,          
        KC_LSFT,  PT_LABK,  PT_Z,     PT_X,     PT_C,     PT_V,     PT_B,     PT_N,     PT_M,     PT_COMM,  PT_DOT,   PT_MINS,  KC_RSFT,  KC_UP,
        KC_LCTL,  KC_LALT,  KC_LCMD,                      KC_SPC,                                 KC_RCMD,  MO(_MFL),           KC_LEFT,  KC_DOWN,  KC_RGHT),

    [_MFL] = LAYOUT( /* Function Layer (macOS) */
        _______,  KC_BRID,  KC_BRIU,  _______,  _______,  RM_VALD,  RM_VALU,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  KC_SCRL,  _______,
        _______,  RP_P0,    RP_P1,    RP_P2,    _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  RP_END,   KC_PSCR,   
        _______,  KC_BT1,   KC_BT2,   KC_BT3,   _______,  _______,  _______,  _______,  _______,  MO(_DEFA),KC_2G4,   _______,  KC_INS,   _______,  KC_PAUSE,  
        _______,  TO(_BL),  KC_NO,    _______,  _______,  _______,  _______,  _______,  _______,  MO(_DEFA),_______,  _______,  RM_NEXT,  HS_BATQ,  KC_END, 
        _______,  _______,  DEB_TOG,  _______,  _______,  _______,  NK_TOGG,  _______,  _______,  RM_HUEU,  _______,  _______,  MO(_DEFA),RM_VALU,
        _______,  _______,  _______,                      EE_CLR,                                 _______,  _______,            RM_SPDD,  RM_VALD,  RM_SPDU),
    [_DEFA] = LAYOUT( /* Device / Test Layer */
        QK_BOOT,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, 
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_TEST,  _______,  _______,  _______,  _______,  _______,  
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_TEST,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,                      _______,                                _______,  _______,            _______,  _______,  _______),
};

const uint16_t PROGMEM rgbrec_default_effects[RGBREC_CHANNEL_NUM][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
       HS_GREEN, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
       ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
       ________, ________, HS_GREEN, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
       ________, HS_GREEN, HS_GREEN, HS_GREEN, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
       ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, HS_GREEN,
       ________, ________, ________,                     ________,                               ________, ________,           HS_GREEN, HS_GREEN, HS_GREEN),

    [1] = LAYOUT(
       ________, HS_RED,   HS_RED,   HS_RED,   ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
       ________, HS_RED,   HS_RED,   HS_RED,   HS_RED,   HS_RED,   ________, ________, ________, ________, ________, ________, ________, ________, ________,
       HS_RED,   HS_RED,   HS_RED,   HS_RED,   HS_RED,   ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
       ________, HS_RED,   HS_RED,   HS_RED,   ________, HS_RED,   ________, ________, ________, ________, ________, ________, ________, ________, ________,
       HS_RED,   ________, ________, ________, ________, ________, HS_RED,   ________, ________, ________, ________, ________, ________, ________, 
       HS_RED,   ________, HS_RED,                       ________,                               ________, ________,           ________, ________, ________),

    [2] = LAYOUT(
       HS_BLUE,  ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________, ________,
       ________, HS_BLUE,  HS_BLUE,  HS_BLUE,  HS_BLUE,  HS_BLUE,  HS_BLUE,  HS_BLUE,  ________, ________, ________, ________, ________, ________, ________,
       ________, HS_BLUE,  HS_BLUE,  HS_BLUE,  HS_BLUE,  HS_BLUE,  ________, ________, ________, ________, ________, ________, ________, ________, ________,
       ________, HS_BLUE,  HS_BLUE,  HS_BLUE,  HS_BLUE,  HS_BLUE,  ________, ________, ________, ________, ________, ________, ________, ________, ________,
       ________, ________, ________, ________, HS_BLUE,  HS_BLUE,  ________, ________, ________, ________, ________, ________, ________, ________, 
       ________, ________, ________,                     ________,                               ________, ________,           ________, ________, ________),
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [1] = {ENCODER_CCW_CW(_______, _______)},
    [2] = {ENCODER_CCW_CW(_______, _______)},
    [3] = {ENCODER_CCW_CW(_______, _______)},
    [4] = {ENCODER_CCW_CW(_______, _______)}
};
#endif
// clang-format on
