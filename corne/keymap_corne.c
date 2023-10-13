/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

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
#include <stdio.h>

// https://github.com/qmk/qmk_firmware/blob/master/docs/keycodes.md

#define A_TAB    LALT(KC_TAB)
#define A_STAB   LALT(LSFT(KC_TAB))
#define A_TILDE  LALT(KC_TILDE)
#define A_GRAVE  LALT(KC_GRAVE)


#define SHFT_GR  MT(MOD_LSFT, KC_GRAVE)
#define SHFT_QU  MT(MOD_LSFT, KC_QUOTE)
#define SHFT_SPC MT(MOD_LSFT, KC_SPC)
#define SHFT_SLSH MT(MOD_LSFT, KC_SLSH)
#define SHFT_BSLSH MT(MOD_LSFT, KC_BSLS)
#define SHFT_Z MT(MOD_LSFT, KC_Z)

#define SHFT_A  MT(MOD_LSFT, KC_A)
#define SHFT_S  MT(MOD_LSFT, KC_S)
#define SHFT_F  MT(MOD_LSFT, KC_F)


#define SHFT_EXLM  MT(MOD_LSFT, KC_EXLM)


#define CTRL_A  MT(MOD_LCTL, KC_A)
#define CTRL_S  MT(MOD_LCTL, KC_S)
#define CTRL_D  MT(MOD_LCTL, KC_D)
#define CTRL_Z  MT(MOD_LCTL, KC_Z)
#define CTRL_SC  MT(MOD_LCTL, KC_SCLN)
#define CTRL_SL MT(MOD_RCTL, KC_SLSH)

#define SHFT_SC MT(MOD_RSFT, KC_SCLN)
#define SHFT_SL MT(MOD_LSFT, KC_SLSH)
#define SHFT_0 LT(MOD_LSFT, KC_0)
#define SHFT_1 LT(MOD_LSFT, KC_1)

#define LCTL_TAB  MT(MOD_LCTL, KC_TAB)
#define L3_ENT LT(3, KC_ENT)
#define L2_ENT LT(2, KC_ENT)
#define L2_TAB LT(2, KC_TAB)
#define L2_EXLM  LT(2, KC_EXLM)
#define L2_Z LT(2, KC_Z)
#define L1_TAB LT(1, KC_TAB)
#define L1_ESC LT(1, KC_ESC)
#define L1_SPC LT(1, KC_SPC)
#define L2_SPC LT(2, KC_SPC)
#define L3_INSERT LT(3, KC_INSERT)
#define M4_GRAVE  LT(4, KC_GRAVE)

#define SHFT_INS LCTL(KC_INSERT)
#define CTRL_INS LSFT(KC_INSERT)

#if 0
/Users/nwanua/qmk_firmware/keyboards/crkbd/keymaps/nwanua
(cd ~; qmk flash -kb crkbd -km nwanua)
#endif

#if 0
qwert yuiop   QWERT YUIOP    !@#$% ^&*-+
asdfg hjkl;   ASDFG HJKL:    `~  = _[]"'
zxcvb nm,./   ZXCVB NM<>?           {}\|
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT_split_3x6_3(
        KC_ESC,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,         KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_BSPC,
        M4_GRAVE, SHFT_A,   KC_S,     KC_D,     KC_F,     KC_G,         KC_H,     KC_J,     KC_K,     KC_L,     SHFT_SC,  KC_QUOTE,
        KC_LALT,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,         KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  XXXXXXX,
                                      MO(4),    KC_LCTL,  L1_TAB,       L2_SPC,   L3_ENT,   XXXXXXX
  ),

  [1] = LAYOUT_split_3x6_3(
        _______,  KC_1,     KC_2,     KC_3,     KC_4,     KC_5,         KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     _______,
        KC_TILDE, KC_EXLM,  KC_AT,    KC_HASH,  KC_DLR,   KC_PERC,      KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_MINUS, KC_COLON, KC_DQT,
        _______,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_SCRL,  KC_EQL,       KC_PLUS,  KC_UNDS,  KC_LT,    KC_GT,    KC_QUES,  XXXXXXX,
                                      _______,  _______,  _______,      KC_ENT,   L2_ENT ,  _______
  ),

  [2] = LAYOUT_split_3x6_3(
        XXXXXXX,  KC_LCBR,  KC_RCBR,  XXXXXXX,  XXXXXXX,  KC_INSERT,    KC_DEL,   KC_PLUS,  KC_LPRN, KC_RPRN,  KC_BSLS,  _______,
        XXXXXXX,  KC_LBRC,  KC_RBRC,  XXXXXXX,  XXXXXXX,  XXXXXXX,      KC_TAB,   KC_EQL,   KC_LBRC,  KC_RBRC,  KC_PIPE,  XXXXXXX,
        XXXXXXX,  XXXXXXX,  XXXXXXX,  SHFT_INS, CTRL_INS, XXXXXXX,      KC_SPC,   KC_UNDS,  KC_LCBR,  KC_RCBR,  KC_SLSH,  XXXXXXX,    
                                      KC_LCTL,  XXXXXXX,  XXXXXXX,      XXXXXXX,  KC_ENT,   _______
  ),

  [3] = LAYOUT_split_3x6_3(
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_PGUP,  KC_HOME,
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,      KC_LEFT,  KC_DOWN,  KC_UP,    KC_RIGHT, KC_PGDN,  KC_END,
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
                                      XXXXXXX,  XXXXXXX,  XXXXXXX,      _______,  _______, _______
  ),

  [4] = LAYOUT_split_3x6_3(
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,      XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,      KC_MS_L,  KC_MS_D,  KC_MS_U,  KC_MS_R,  XXXXXXX,  XXXXXXX,
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  KC_BTN2,  XXXXXXX,      XXXXXXX,  KC_WH_D,  KC_WH_U,  XXXXXXX,  XXXXXXX,  XXXXXXX,
                                      XXXXXXX,  XXXXXXX,  XXXXXXX,      KC_BTN1,  KC_BTN3,  KC_BTN2
  ),


  [5] = LAYOUT_split_3x6_3(
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,      KC_COLON,  KC_7,    KC_8,    KC_9,     KC_P,      KC_BSPC,  
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,      KC_DOT,    KC_4,    KC_5,    KC_6,     KC_MINUS,  KC_SLSH,
        XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,  XXXXXXX,      KC_0,      KC_1,    KC_2,    KC_3,     KC_PLUS,   KC_ASTR,
                                      XXXXXXX,  XXXXXXX,  XXXXXXX,      _______,   KC_ENT,  _______
  )
};
 


bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case L1_TAB:
            // Immediately select the hold action when another key is pressed.
            return true;
        default:
            // Do not select the hold action when another key is pressed.
            return false;
    }
}


#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master()) {
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  }
  return rotation;
}

#define L_BASE 0
#define L_LOWER 2
#define L_RAISE 4
#define L_ADJUST 8

void oled_render_layer_state(void) {
    oled_write_P(PSTR("Layer: "), false);
    switch (layer_state) {
        case L_BASE:
            oled_write_ln_P(PSTR("Default"), false);
            break;
        case L_LOWER:
            oled_write_ln_P(PSTR("Lower"), false);
            break;
        case L_RAISE:
            oled_write_ln_P(PSTR("Raise"), false);
            break;
        case L_ADJUST:
        case L_ADJUST|L_LOWER:
        case L_ADJUST|L_RAISE:
        case L_ADJUST|L_LOWER|L_RAISE:
            oled_write_ln_P(PSTR("Adjust"), false);
            break;
    }
}


char keylog_str[24] = {};

const char code_to_name[60] = {
    ' ', ' ', ' ', ' ', 'a', 'b', 'c', 'd', 'e', 'f',
    'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p',
    'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
    '1', '2', '3', '4', '5', '6', '7', '8', '9', '0',
    'R', 'E', 'B', 'T', '_', '-', '=', '[', ']', '\\',
    '#', ';', '\'', '`', ',', '.', '/', ' ', ' ', ' '};

void set_keylog(uint16_t keycode, keyrecord_t *record) {
  char name = ' ';
    if ((keycode >= QK_MOD_TAP && keycode <= QK_MOD_TAP_MAX) ||
        (keycode >= QK_LAYER_TAP && keycode <= QK_LAYER_TAP_MAX)) { keycode = keycode & 0xFF; }
  if (keycode < 60) {
    name = code_to_name[keycode];
  }

  // update keylog
  snprintf(keylog_str, sizeof(keylog_str), "%dx%d, k%2d : %c",
           record->event.key.row, record->event.key.col,
           keycode, name);
}

void oled_render_keylog(void) {
    oled_write(keylog_str, false);
}

void render_bootmagic_status(bool status) {
    /* Show Ctrl-Gui Swap options */
    static const char PROGMEM logo[][2][3] = {
        {{0x97, 0x98, 0}, {0xb7, 0xb8, 0}},
        {{0x95, 0x96, 0}, {0xb5, 0xb6, 0}},
    };
    if (status) {
        oled_write_ln_P(logo[0][0], false);
        oled_write_ln_P(logo[0][1], false);
    } else {
        oled_write_ln_P(logo[1][0], false);
        oled_write_ln_P(logo[1][1], false);
    }
}

void oled_render_logo(void) {
    static const char PROGMEM crkbd_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, 0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, 0xb0, 0xb1, 0xb2, 0xb3, 0xb4,
        0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, 0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, 0xd0, 0xd1, 0xd2, 0xd3, 0xd4,
        0};
    oled_write_P(crkbd_logo, false);
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        oled_render_layer_state();
        oled_render_keylog();
    } else {
        oled_render_logo();
    }
    return false;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    set_keylog(keycode, record);
  }
  return true;
}
#endif // OLED_ENABLE


