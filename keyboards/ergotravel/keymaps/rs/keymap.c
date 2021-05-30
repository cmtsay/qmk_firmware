#include QMK_KEYBOARD_H
#include "rs.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT(
  //,----+----+----+----+----+----+----.     ,----+----+----+----+----+----+----.
     KC_TAB , KC_Q  , KC_W  , KC_E  , KC_R  , KC_T  , KC_GRV,      KC_BSLS, KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,KC_EQL ,
  //|----+----+----+----+----+----+----|     |----+----+----+----+----+----+----|
     KC_ESCC, KC_A  , KC_S  , KC_D  , KC_F  , KC_G  ,KC_PIPE,      KC_MINS, KC_H  , KC_J  , KC_K  , KC_L  ,KC_SCLN,KC_QUOT,
  //|----+----+----+----+----+----+----|     |----+----+----+----+----+----+----|
     KC_LSFT, KC_Z  , KC_X  , KC_C  , KC_V  , KC_B  , KC_SPC,      KC_BSPC, KC_N  , KC_M  ,KC_COMM,KC_DOT ,KC_SLSH,KC_ENTS,
  //|----+----+----+----+----+----+----.     .----+----+----+----+----+----+----|
      KC_FN ,_______,KC_LCTL,KC_LALT,KC_LGUI, KC_SPC,               KC_BSPC, KC_CODE,KC_LEFT, KC_UP ,KC_DOWN,KC_RIGHT
  //`----+----+----+--+-+----/----/               \----\----+----+----+----+----'
  ),
  [_CODE] = LAYOUT(
    //,----+----+----+----+----+----+----.     ,----+----+----+----+----+----+----.
       KC_GRV ,KC_EXLM, KC_AT ,KC_HASH, KC_DLR,KC_PERC,_______,      _______,KC_CIRC,KC_LPLT,KC_ASTR,KC_RPGT,KC_NEQL,_______,
    //|----+----+----+----+----+----+----|     |----+----+----+----+----+----+----|
       _______, KC_1  , KC_2  , KC_3  , KC_4  , KC_5  ,_______,      _______,KC_MINS,KC_LBRC, KC_UP ,KC_RBRC,_______,KC_BSLS,
    //|----+----+----+----+----+----+----|     |----+----+----+----+----+----+----|
       _______, KC_6  , KC_7  , KC_8  , KC_9  , KC_0  , KC_DOT,      _______,KC_AMPR,KC_LEFT,KC_DOWN,KC_RGHT,_______,KC_PIPE,
    //|----+----+----+----+----+----+----.     .----+----+----+----+----+----+----|
       _______,_______,_______,_______,_______,_______,                _______,_______,_______,_______,_______,_______
    //`----+----+----+----+----/----/               \----\----+----+----+----+----'
  ),
  [_FN] = LAYOUT(
    //,----+----+----+----+----+----+----.     ,----+----+----+----+----+----+----.
       _______, KC_F1 , KC_F2 , KC_F3 , KC_F4 , KC_F5 ,_______,      _______, KC_F6 , KC_F7 , KC_F8 , KC_F9 , KC_F10,KC_F11 ,
    //|----+----+----+----+----+----+----|     |----+----+----+----+----+----+----|
       _______,_______,_______,_______,_______,_______,KC_BRMU,      _______,_______,_______,KC_PGUP,_______,_______,_______,
    //|----+----+----+----+----+----+----|     |----+----+----+----+----+----+----|
       _______,_______,_______,_______,_______, KC_RST,KC_BRMD,      KC_VOLU,_______,KC_CTRA,KC_PGDN,KC_CTRE,_______,_______,
    //|----+----+----+----+----+----+----.     .----+----+----+----+----+----+----|
       _______,_______,_______,_______,_______,_______,                KC_VOLD,KC_MUTE,_______,_______,_______,_______
    //`----+----+----+----+----/----/               \----\----+----+----+----+----'
  ),
};
