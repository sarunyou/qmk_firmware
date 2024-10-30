/*
Copyright 2022 qwertykeys

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

// Left-hand home row mods
// #define HOME_A LGUI_T(KC_A)
#define HOME_A LT(2, KC_A)
#define HOME_S LALT_T(KC_S)
#define HOME_D LCTL_T(KC_D)
#define HOME_F LSFT_T(KC_F)
#define HOME_Z LGUI_T(KC_Z)

// Right-hand home row mods
#define HOME_J RSFT_T(KC_J)
#define HOME_K RCTL_T(KC_K)
#define HOME_L LALT_T(KC_L)
// #define HOME_SCLN RGUI_T(KC_SCLN)
#define HOME_SCLN LT(2, KC_SCLN)
#define HOME_SLASH RGUI_T(KC_SLASH)

// Left-hand home row mods on symbol layer
#define HOME_EXLM_SYMBOL KC_EXLM
#define HOME_MINS_SYMBOL KC_MINS
#define HOME_PLUS_SYMBOL KC_PLUS
#define HOME_EQL_SYMBOL KC_EQL

// Right-hand home row mods on symbol layer
#define HOME_COLON_SYMBOL KC_COLN
#define HOME_RPRN_SYMBOL KC_RPRN
#define HOME_LPRN_SYMBOL KC_LPRN
#define HOME_QUES_SYMBOL KC_QUES


const uint16_t PROGMEM capword_combo[] = {KC_X, KC_COMM, COMBO_END};
const uint16_t PROGMEM enter_combo[] = {KC_E, KC_I, COMBO_END};
combo_t key_combos[] = {
    COMBO(capword_combo, CW_TOGG),
    COMBO(enter_combo, KC_ENT),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_65_ansi_blocker(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_DEL,
        LT(1, KC_TAB),  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_PGUP,
        MT(MOD_LCTL,KC_ESC), HOME_A,   HOME_S,  HOME_D,  HOME_F,  KC_G,    KC_H,    HOME_J,  HOME_K,  HOME_L,  HOME_SCLN,  KC_QUOT,          KC_ENT,  KC_PGDN,
        KC_LSFT,          HOME_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  HOME_SLASH, KC_RSFT, KC_UP,   MO(1),
        KC_LCTL, KC_LALT, MO(1),                             KC_SPC,                    MO(2), KC_DEL,          KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [1] = LAYOUT_65_ansi_blocker(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_TRNS, KC_VOLU,
        KC_TRNS, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_TRNS, KC_TRNS, KC_TRNS, KC_VOLD,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, KC_TRNS, KC_TRNS,         KC_MUTE,
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,                            KC_BSPC,                   KC_BSPC, KC_DEL,          KC_TRNS, KC_TRNS,   KC_TRNS
    ),

    [2] = LAYOUT_65_ansi_blocker(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_QUOT, KC_LABK, KC_RABK, KC_DQUO, KC_GRV,  KC_AMPR, KC_SCLN, KC_LBRC, KC_RBRC, KC_PERC, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, HOME_EXLM_SYMBOL, HOME_MINS_SYMBOL, HOME_PLUS_SYMBOL, HOME_EQL_SYMBOL,  KC_HASH, KC_PIPE, HOME_COLON_SYMBOL, HOME_LPRN_SYMBOL, HOME_RPRN_SYMBOL, HOME_QUES_SYMBOL, KC_TRNS,          KC_TRNS, KC_TRNS,
        KC_TRNS,          KC_CIRC, KC_SLSH, KC_ASTR, KC_UNDS, KC_BSLS,   KC_TILD, KC_DLR,  KC_LCBR, KC_RCBR, KC_AT,  KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS,                   KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS
    ),

    [3] = LAYOUT_65_ansi_blocker(
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,
        KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS,                   KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS
    )

};
