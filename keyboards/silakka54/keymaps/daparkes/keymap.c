// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include "keycodes.h"
#include QMK_KEYBOARD_H

#define KC_SGRV     S(KC_GRV)
#define KC_PIP      S(KC_NUHS)
#define KC_COPY     LCMD(KC_C)
#define KC_PAS      LCMD(KC_P)
#define WS_LFT      C(KC_LEFT)
#define WS_RGT      C(KC_RIGHT)
#define MS_CTRL     C(KC_UP)

__const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
        KC_SGRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
        KC_TAB,     KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_DEL,
        KC_ESC,     KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, MT(MOD_RSFT, KC_QUOT),
        KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                               KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RCTL,
                                            KC_LCTL, MO(1), KC_ENT,              KC_SPC,  KC_RGUI,  KC_RALT
    ),
    [1] = LAYOUT(
        KC_GRV,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,     KC_F8,     KC_F9,   KC_F10,  KC_F11,
        KC_TRNS,  KC_TRNS, KC_TRNS, KC_LGUI, KC_TRNS, KC_TRNS,                            KC_COPY, KC_LCBR,   KC_RCBR,   KC_LBRC, KC_RBRC,  KC_F12,
        KC_TRNS,  KC_VOLD, KC_VOLU, KC_MPRV, KC_MNXT, KC_MPLY,                            KC_LEFT, KC_DOWN,   KC_UP,     KC_RGHT, KC_EQL,  KC_PLUS,
        KC_TRNS,  WS_LFT,  KC_TRNS, MS_CTRL, WS_RGT,  KC_TRNS,                            KC_PAS,  KC_PIPE,   KC_NUHS,   KC_MINS, KC_UNDS, KC_TRNS,
                                            KC_TRNS, KC_TRNS, KC_TRNS,           KC_TRNS,  KC_TRNS,  KC_TRNS
    )
};
