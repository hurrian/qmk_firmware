/* Copyright 2021 Raymond Kenneth Kasilag <kenneth@kasilag.me>
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
    _BL = 0,    // Base layer
    _FL,        // Function layer
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_BL] = LAYOUT(
                          KC_F13,  KC_F14, KC_F15, KC_F16, KC_F17, KC_F18, KC_F19, KC_F20, KC_F21, KC_F22,  KC_F23,  KC_F24,
                          KC_F1,   KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10,  KC_F11,  KC_F12,
    KC_ESC,      KC_ESC,  KC_GRV,  KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,   KC_INS,  KC_HOME, KC_PGUP,    KC_NLCK, KC_PSLS, KC_PAST, KC_PMNS,
    KC_PSCR,     KC_PSCR, KC_TAB,  KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_ENT,    KC_DEL,  KC_END,  KC_PGDN,    KC_P7,   KC_P8,   KC_P9,   KC_BSPC,
    KC__VOLUP,   KC_MPRV, KC_CAPS, KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,    KC_SCLN, KC_QUOT, KC_BSLS,                     KC_UP,               KC_P4,   KC_P5,   KC_P6,   KC_PENT,
    KC__VOLDOWN, KC_MPLY, KC_LSFT, KC_NO,  KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,            KC_LEFT, KC_DOWN, KC_RIGHT,   KC_P1,   KC_P2,   KC_P3,   KC_PPLS,
    KC__MUTE,    KC_MNXT, KC_LCTL, KC_LGUI,                                        KC_SPC,                           KC_LALT, KC_RCTL,                     MO(_FL),               KC_P0,            KC_PDOT
  ),
  [_FL] = LAYOUT(
                      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
                      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,  _______, _______,    _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______,  RESET,   _______,    _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,                     _______,             _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,            _______, _______, _______,    _______, _______, _______, _______,
    _______, _______, _______, _______,                                              _______,                            _______, _______,                     _______,             _______,          _______
  ),
};

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {

  return true;
}

void led_set_user(uint8_t usb_led) {

}
