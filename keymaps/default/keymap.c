#include "dirac.h"

// layers
#define _QWERTY 0
#define _NUMBER 1
#define _SYMBOL 2
#define _MOVE   3

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

#define MO_NUML MO(_NUMBER)
#define MO_SYML MO(_SYMBOL)
#define MO_MOVE MO(_MOVE)
#define KC_RSPC SFT_T(KC_SPC)


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_QWERTY] = {
  {KC_ESC , KC_Q ,   KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    ALT_T(KC_BSPC)},
  {KC_LCTL, XXXXXXX, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    CTL_T(KC_SCLN)},
  {KC_LSFT, KC_Z,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  SFT_T(KC_SLSH)},
  {MO_MOVE, KC_LALT, KC_LGUI, KC_LALT, MO_SYML, KC_SPC,  KC_RSPC, MO_NUML, KC_RALT, KC_RCTL, KC_UP  , KC_RGUI}
},

[_NUMBER] = {
  {KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_MINS},
  {_______, XXXXXXX, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0},
  {_______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, _______},
  {_______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______, _______, _______, KC_RGUI},
},

[_SYMBOL] = {
  {KC_GRV,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE},
  {_______, XXXXXXX, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN},
  {_______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, _______, KC_QUOT, _______, _______},
  {_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______}
},

[_MOVE] = {
  {KC_TAB,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_UNDS, KC_TAB,  KC_LCBR, KC_RCBR, KC_PIPE},
  {_______, XXXXXXX, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______},
  {_______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_END , KC_ENT,  KC_BSPC, _______, _______},
  {_______, _______, _______, _______, KC_BTN1, KC_BTN1, _______, _______, _______, _______, _______, KC_RGUI}
},

};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
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
