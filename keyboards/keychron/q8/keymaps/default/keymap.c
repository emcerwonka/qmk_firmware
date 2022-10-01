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

#define KC_MCTL KC_MISSION_CONTROL
#define KC_LPAD KC_LAUNCHPAD

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     *    ┌────┬────┬────┬────┬────┬────┬────┐    ┌────┬────┬────┬────┬────┬────┬───────┐  ┌───┐
     *    │ Esc│ 1  │ 2  │ 3  │ 4  │ 5  │ 6  │    │ 7  │ 8  │ 9  │ 0  │ -  │ =  │  Bsp  │  │Ins│
     *   ┌┴────┴┬───┴┬───┴┬───┴┬───┴┬───┴┬───┘  ┌─┴──┬─┴──┬─┴──┬─┴──┬─┴──┬─┴──┬─┴──┬────┴┐ └┬──┴┐
     *   │ Tab  │ Q  │ W  │ E  │ R  │ T  │      │ Y  │ U  │ I  │ O  │ P  │ [  │ ]  │  \  │  │Del│
     *  ┌┴──────┼────┼────┼────┼────┼────┤      └┬───┴┬───┴┬───┴┬───┴┬───┴┬───┴┬───┴─────┴┐ └┬──┴┐
     *  │ Caps  │ A  │ S  │ D  │ F  │ G  │       │ H  │ J  │ K  │ L  │ ;  │ '  │   Enter  │  │Hme│
     * ┌┴───────┴┬───┴┬───┴┬───┴┬───┴┬───┴┐    ┌─┴──┬─┴──┬─┴──┬─┴──┬─┴──┬─┴──┬─┴─────┬────┘  └───┘
     * │ Shift   │ Z  │ X  │ C  │ V  │ B  │    │ B  │ N  │ M  │ ,  │ .  │ /  │ Shift │ ┌───┐
     * ├────┬────┴┬───┼────┴┬───┴────┴┬───┴┐   ├────┼────┴────┴─┬──┴───┬┴────┴───────┘ │Up │
     * │ Ctl│LOpt │   │LCom │ Space   │Fn2 │   │Fn4 │  Space    │ RCom │           ┌───┼───┼───┐
     * └────┴─────┘   └─────┴─────────┴────┘   └────┴───────────┴──────┘           │Lft│Dn │Rt │
     *                                                                             └───┴───┴───┘
     */
    [MAC_BASE] = LAYOUT_alice_q8(
        KC_ESC,  KC_1,    KC_2,    KC_3,   KC_4,     KC_5,     KC_6,   KC_7,    KC_8, KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_INS,
        KC_TAB,  KC_Q,    KC_W,    KC_E,   KC_R,     KC_T,     KC_Y,   KC_U,    KC_I, KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL,
        KC_CAPS, KC_A,    KC_S,    KC_D,   KC_F,     KC_G,     KC_H,   KC_J,    KC_K, KC_L,    KC_SCLN, KC_QUOT, KC_ENT,           KC_HOME,
        KC_LSFT, KC_Z,    KC_X,    KC_C,   KC_V,     KC_B,     KC_B,   KC_N,    KC_M, KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,
        KC_LCTL, KC_LOPT, KC_LCMD, KC_SPC, MO(_FN1), MO(_FN3), KC_SPC, KC_RCMD,                                  KC_LEFT, KC_DOWN, KC_RIGHT
    ),

    /*
     *    ┌────┬────┬────┬────┬────┬────┬────┐    ┌────┬────┬────┬────┬────┬────┬───────┐  ┌───┐
     *    │ Esc│ 1  │ 2  │ 3  │ 4  │ 5  │ 6  │    │ 7  │ 8  │ 9  │ 0  │ -  │ =  │  Bsp  │  │Ins│
     *   ┌┴────┴┬───┴┬───┴┬───┴┬───┴┬───┴┬───┘  ┌─┴──┬─┴──┬─┴──┬─┴──┬─┴──┬─┴──┬─┴──┬────┴┐ └┬──┴┐
     *   │ Tab  │ Q  │ W  │ E  │ R  │ T  │      │ Y  │ U  │ I  │ O  │ P  │ [  │ ]  │  \  │  │Del│
     *  ┌┴──────┼────┼────┼────┼────┼────┤      └┬───┴┬───┴┬───┴┬───┴┬───┴┬───┴┬───┴─────┴┐ └┬──┴┐
     *  │ Caps  │ A  │ S  │ D  │ F  │ G  │       │ H  │ J  │ K  │ L  │ ;  │ '  │   Enter  │  │Hme│
     * ┌┴───────┴┬───┴┬───┴┬───┴┬───┴┬───┴┐    ┌─┴──┬─┴──┬─┴──┬─┴──┬─┴──┬─┴──┬─┴─────┬────┘  └───┘
     * │ Shift   │ Z  │ X  │ C  │ V  │ B  │    │ B  │ N  │ M  │ ,  │ .  │ /  │ Shift │ ┌───┐
     * ├────┬────┴┬───┼────┴┬───┴────┴┬───┴┐   ├────┼────┴────┴─┬──┴───┬┴────┴───────┘ │Up │
     * │LCtl│LWin │   │LAlt │ Space   │Fn3 │   │Fn4 │  Space    │ RAlt │           ┌───┼───┼───┐
     * └────┴─────┘   └─────┴─────────┴────┘   └────┴───────────┴──────┘           │Lft│Dn │Rt │
     *                                                                             └───┴───┴───┘
     */
    [WIN_BASE] = LAYOUT_alice_q8(
        KC_ESC,  KC_1,    KC_2,    KC_3,   KC_4,     KC_5,     KC_6,   KC_7,    KC_8, KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_INS,
        KC_TAB,  KC_Q,    KC_W,    KC_E,   KC_R,     KC_T,     KC_Y,   KC_U,    KC_I, KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL,
        KC_CAPS, KC_A,    KC_S,    KC_D,   KC_F,     KC_G,     KC_H,   KC_J,    KC_K, KC_L,    KC_SCLN, KC_QUOT, KC_ENT,           KC_HOME,
        KC_LSFT, KC_Z,    KC_X,    KC_C,   KC_V,     KC_B,     KC_B,   KC_N,    KC_M, KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,
        KC_LCTL, KC_LWIN, KC_LALT, KC_SPC, MO(_FN2), MO(_FN3), KC_SPC, KC_RALT,                                  KC_LEFT, KC_DOWN, KC_RIGHT
    ),

    /*
     *    ┌────┬────┬────┬────┬────┬────┬────┐      ┌────┬────┬────┬────┬────┬────┬───────┐  ┌───┐
     *    │ `  │Scr-│Scr+│MCtl│Lpad│Brt-│Brt+│      │Prvs│Play│Next│Mute│Vol-│Vol+│RGB Md+│  │   │
     *   ┌┴────┴┬───┴┬───┴┬───┴┬───┴┬───┴──┬─┘    ┌─┴──┬─┴──┬─┴──┬─┴──┬─┴──┬─┴──┬─┴──┬────┴┐ └┬──┴┐
     *   │RGBTog│RGB+│Brt+│Hue+│Sat+│RGBSpi│      │    │    │    │    │    │    │    │     │  │   │
     *  ┌┴──────┼────┼────┼────┼────┼──────┤      └┬───┴┬───┴┬───┴┬───┴┬───┴┬───┴┬───┴─────┴┐ └┬──┴┐
     *  │       │RGB-│Brt-│Hue-│Sat-│RGBSpd│       │    │    │    │    │    │    │          │  │   │
     * ┌┴───────┴┬───┴┬───┴┬───┴┬───┴┬─────┴┐    ┌─┴──┬─┴──┬─┴──┬─┴──┬─┴──┬─┴──┬─┴─────┬────┘  └───┘
     * │         │    │    │    │    │      │    │    │    │    │    │    │    │       │ ┌───┐
     * ├────┬────┴┬───┼────┴┬───┴────┴┬─────┴┐   ├────┼────┴────┴─┬──┴───┬┴────┴───────┘ │   │
     * │    │     │   │     │         │      │   │    │           │      │           ┌───┼───┼───┐
     * └────┴─────┘   └─────┴─────────┴──────┘   └────┴───────────┴──────┘           │   │   │   │
     *                                                                               └───┴───┴───┘
     */
    [_FN1] = LAYOUT_alice_q8(
        KC_GRV,  KC_BRID,  KC_BRU,  KC_MCTL, KC_LPAD, BL_DEC,  BL_INC, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLU, KC_VOLD, RGB_MOD, ______,
        RGB_TOG, RGB_MOD,  RGB_VAI, RGB_HUI, RGB_SAI, RGB_SPI, ______, ______,  ______,  ______,  ______,  ______,  ______,  ______,  ______,
        ______,  RGB_RMOD, RGB_VAD, RGB_HUD, RGB_SAd, RGB_SPD, ______, ______,  ______,  ______,  ______,  ______,  ______,           ______,
        ______,  ______,   ______,  ______,  ______,  ______,  ______, ______,  ______,  ______,  ______,  ______,  ______,  ______,
        ______,  ______,  ______,  ______,  ______,  ______,  ______,  ______,                                      ______,  ______,  ______
    ),

    /*
     *    ┌────┬────┬────┬────┬────┬────┬────┐      ┌────┬────┬────┬────┬────┬────┬───────┐  ┌───┐
     *    │ `  │Scr-│Scr+│MCtr│LnPd│Brt-│Brt+│      │Prvs│Play│Next│Mute│Vol-│Vol+│RGB Md+│  │   │
     *   ┌┴────┴┬───┴┬───┴┬───┴┬───┴┬───┴──┬─┘    ┌─┴──┬─┴──┬─┴──┬─┴──┬─┴──┬─┴──┬─┴──┬────┴┐ └┬──┴┐
     *   │RGBTog│RGB+│Brt+│Hue+│Sat+│RGBSp+│      │    │    │    │    │    │    │    │     │  │   │
     *  ┌┴──────┼────┼────┼────┼────┼──────┤      └┬───┴┬───┴┬───┴┬───┴┬───┴┬───┴┬───┴─────┴┐ └┬──┴┐
     *  │       │RGB-│Brt-│Hue-│Sat-│RGBSp-│       │    │    │    │    │    │    │          │  │   │
     * ┌┴───────┴┬───┴┬───┴┬───┴┬───┴┬─────┴┐    ┌─┴──┬─┴──┬─┴──┬─┴──┬─┴──┬─┴──┬─┴─────┬────┘  └───┘
     * │         │    │    │    │    │      │    │    │    │    │    │    │    │       │ ┌───┐
     * ├────┬────┴┬───┼────┴┬───┴────┴┬─────┴┐   ├────┼────┴────┴─┬──┴───┬┴────┴───────┘ │   │
     * │    │     │   │     │         │      │   │    │           │      │           ┌───┼───┼───┐
     * └────┴─────┘   └─────┴─────────┴──────┘   └────┴───────────┴──────┘           │   │   │   │
     *                                                                               └───┴───┴───┘
     */
    [_FN2] = LAYOUT_alice_q8(
        KC_GRV,  KC_BRID,  KC_BRU,  KC_MCTL, KC_LPAD, BL_DEC,  BL_INC, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLU, KC_VOLD, RGB_MOD, ______,
        RGB_TOG, RGB_MOD,  RGB_VAI, RGB_HUI, RGB_SAI, RGB_SPI, ______, ______,  ______,  ______,  ______,  ______,  ______,  ______,  ______,
        ______,  RGB_RMOD, RGB_VAD, RGB_HUD, RGB_SAd, RGB_SPD, ______, ______,  ______,  ______,  ______,  ______,  ______,           ______,
        ______,  ______,   ______,  ______,  ______,  ______,  ______, ______,  ______,  ______,  ______,  ______,  ______,  ______,
        ______,  ______,   ______,  ______,  ______,  ______,  ______, ______,                                      ______,  ______,  ______
    ),

    /*
     *    ┌────┬────┬────┬────┬────┬────┬────┐     ┌────┬────┬────┬────┬────┬────┬───────┐  ┌───┐
     *    │ ~  │ F1 │ F2 │ F3 │ F4 │ F5 │ F6 │     │ F7 │ F8 │ F9 │F10 │F11 │F12 │       │  │   │
     *   ┌┴────┴┬───┴┬───┴┬───┴┬───┴┬───┴──┬─┘   ┌─┴──┬─┴──┬─┴──┬─┴──┬─┴──┬─┴──┬─┴──┬────┴┐ └┬──┴┐
     *   │RGBTog│RGB+│Brt+│Hue+│Sat+│RGBSp+│     │    │    │    │    │    │    │    │     │  │   │
     *  ┌┴──────┼────┼────┼────┼────┼──────┤     └┬───┴┬───┴┬───┴┬───┴┬───┴┬───┴┬───┴─────┴┐ └┬──┴┐
     *  │       │RGB-│Brt-│Hue-│Sat-│RGBSp-│      │    │    │    │    │    │    │          │  │   │
     * ┌┴───────┴┬───┴┬───┴┬───┴┬───┴┬─────┴┐   ┌─┴──┬─┴──┬─┴──┬─┴──┬─┴──┬─┴──┬─┴─────┬────┘  └───┘
     * │         │    │    │    │    │      │   │    │    │    │    │    │    │       │ ┌───┐
     * ├────┬────┴┬───┼────┴┬───┴────┴┬─────┴┐  ├────┼────┴────┴─┬──┴───┬┴────┴───────┘ │   │
     * │    │     │   │     │         │      │  │    │           │      │           ┌───┼───┼───┐
     * └────┴─────┘   └─────┴─────────┴──────┘  └────┴───────────┴──────┘           │   │   │   │
     *                                                                              └───┴───┴───┘
     */
    [_FN3] = LAYOUT_alice_q8(
        KC_GRV,  KC_F1,    KC_F2,   KC_F2,   KC_F3,   KC_F4,   KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, ______,
        RGB_TOG, RGB_MOD,  RGB_VAI, RGB_HUI, RGB_SAI, RGB_SPI, ______, ______, ______, ______, ______, ______, ______, ______, ______,
        ______,  RGB_RMOD, RGB_VAD, RGB_HUD, RGB_SAd, RGB_SPD, ______, ______, ______, ______, ______, ______, ______,         ______,
        ______,  ______,   ______,  ______,  ______,  ______,  ______, ______, ______, ______, ______, ______, ______, ______,
        ______,  ______,   ______,  ______,  ______,  ______,  ______, ______,                                 ______, ______, ______
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_MISSION_CONTROL:
            if (record->event.pressed) {
                host_consumer_send(0x29F);
            } else {
                host_consumer_send(0);
            }
            return false;  // Skip all further processing of this key
        case KC_LAUNCHPAD:
            if (record->event.pressed) {
                host_consumer_send(0x2A0);
            } else {
                host_consumer_send(0);
            }
            return false;  // Skip all further processing of this key
        default:
            return true;  // Process all other keycodes normally
    }
};
