#include QMK_KEYBOARD_H

enum layers {
    MAC_BASE,
    WIN_BASE,
    _FN1,
    _FN2,
    _FN3
};

enum custom_keycodes {
   KC_MISSION_CONTROL = SAFE_RANGE,
   KC_LAUNCHPAD
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
   [MAC_BASE] = LAYOUT_alice_q8(

   ),

   [WIN_BASE] = LAYOUT_alice_q8(

   ),

   [_FN1] = LAYOUT_alice_q8(

   ),

   [_FN2] = LAYOUT_alice_q8(

   ),

   [_FN3] = LAYOUT_alice_q8(

   )
};
