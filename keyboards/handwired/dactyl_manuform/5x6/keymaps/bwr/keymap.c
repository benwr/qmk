// keymap/via12/keymap.c
#include QMK_KEYBOARD_H

#define EXPR000 LT(3,KC_CAPS)
#define EXPR001 LT(3,KC_QUOT)
#define EXPR002 LT(2,KC_DEL)
#define EXPR003 LT(2,KC_ENT)
#define EXPR004 LCTL(LSFT(KC_B))
#define EXPR005 LALT(KC_PSCR)
#define EXPR006 RGB_RMOD
#define EXPR007 LALT(KC_INS)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_5x6(
KC_ESC ,KC_1   ,KC_2   ,KC_3   ,KC_4   ,KC_5   ,                         KC_6   ,KC_7   ,KC_8   ,KC_9   ,KC_0   ,KC_MINS,
KC_TAB ,KC_Q   ,KC_W   ,KC_E   ,KC_R   ,KC_T   ,                         KC_Y   ,KC_U   ,KC_I   ,KC_O   ,KC_P   ,KC_EQL ,
KC_BSPC,KC_A   ,KC_S   ,KC_D   ,KC_F   ,KC_G   ,                         KC_H   ,KC_J   ,KC_K   ,KC_L   ,KC_SCLN,KC_QUOT,
KC_GRV ,KC_Z   ,KC_X   ,KC_C   ,KC_V   ,KC_B   ,                         KC_N   ,KC_M   ,KC_COMM,KC_DOT ,KC_SLSH,KC_BSLS,
                KC_LCTL,KC_LCMD,                                                         KC_RCMD,KC_RCTL                ,
                                MO(2)  ,KC_LSFT,                         KC_RSFT,KC_SPC                                 ,
                                        KC_LALT,KC_HOME,         KC_MEH ,KC_RALT                                        ,
                                        KC_LALT,KC_END ,         EXPR004,KC_ENT ),
    [1] = LAYOUT_5x6(
_______,_______,_______,_______,_______,_______,                         _______,_______,_______,_______,_______,_______,
_______,_______,_______,_______,_______,_______,                         _______,_______,_______,_______,_______,_______,
_______,_______,_______,_______,_______,_______,                         _______,_______,_______,_______,_______,_______,
_______,_______,_______,_______,_______,_______,                         _______,_______,_______,_______,_______,_______,
                _______,_______,                                                         _______,_______                ,
                                _______,_______,                         _______,_______                                ,
                                        _______,_______,         _______,_______                                        ,
                                        _______,_______,         _______,_______),
    // TODO add square brackets here

    [2] = LAYOUT_5x6(
_______,KC_F1  ,KC_F2  ,KC_F3  ,KC_F4  ,KC_F5  ,                         KC_F6  ,KC_F7  ,KC_F8  ,KC_F9  ,KC_F10 ,KC_F11 ,
_______,_______,_______,KC_LCBR,KC_RCBR,_______,                         KC_MUTE,KC_VOLD,KC_VOLU,_______,KC_MPLY,KC_F12 ,
_______,_______,_______,_______,_______,_______,                         KC_LEFT,KC_DOWN,KC_UP  ,KC_RGHT,_______,_______,
_______,_______,_______,KC_LPRN,KC_RPRN,_______,                         KC_HOME,KC_PGDN,KC_PGUP,KC_END ,_______,_______,
                _______,_______,                                                         _______,_______                ,
                                KC_TRNS,_______,                         _______,_______                                ,
                                        _______,_______,         _______,_______                                        ,
                                        _______,_______,         _______,_______),
    [3] = LAYOUT_5x6(
KC_ESC ,_______,_______,_______,_______,_______,                         _______,_______,_______,_______,_______,_______,
_______,RGB_VAD,RGB_SAI,RGB_VAI,_______,KC_LBRC,                         KC_RBRC,_______,RGB_VAD,RGB_SAI,RGB_VAI,_______,
_______,RGB_HUD,RGB_SAD,RGB_HUI,_______,KC_LCBR,                         KC_RCBR,_______,RGB_HUD,RGB_SAD,RGB_HUI,_______,
EXPR006,RGB_MOD,RGB_SPD,RGB_SPI,_______,_______,                         _______,EXPR006,RGB_MOD,RGB_SPD,RGB_SPI,_______,
                EXPR007,KC_GRV ,                                                         DF(0)  ,DF(1)                  ,
                                _______,RGB_TOG,                         RGB_TOG,_______                                ,
                                        _______,_______,         _______,_______                                        ,
                                        _______,RESET  ,         RESET  ,_______)
};

