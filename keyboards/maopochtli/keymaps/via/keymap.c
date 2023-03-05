#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Qwerty
 * ,-----------------------------------------.                               ,-----------------------------------------.
 * |  ESC |   1  |   2  |   3  |   4  |   5  |                               |   6  |   7  |   8  |   9  |   0  | BACK |
 * |------+------+------+------+------+------|-------------.   .------+------|------+------+------+------+------+------|
 * | TAB  |   Q  |   W  |   E  |   R  |   T  |   M1 |  M2  |   |  M2  |   M1 |   Y  |   U  |   I  |   O  |   P  | ENTER|
 * |------+------+------+------+------+------+------+------´   `------+------+------+------+------+------+------|------|
 * | Shift|   A  |   S  |   D  |   F  |   G  | ALT  |                 | ALT  |   H  |   J  |   K  |   L  |   Ñ  | SHIFT|
 * |------+------+------+------+------+---------+---|------.          |---------+----------+------+------+------+------|
 * | Ctrl |   Z  |   X  |   C  |   V  |   B  | space|  K1  |   |  k2  | Space|   N  |   M  |   ;  |   :  |   ?  | Ctrl |
 * `----------------------------------+------+------+------´   `------+------+------+----------------------------------´
 */
[0] = LAYOUT_pair_via(
    KC_ESC,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,         _______,_______,  _______,_______,          KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_BSPACE,\
    KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,       MO(2),                            MO(2),      KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_ENTER, \
    KC_LSFT,    KC_A,       KC_S,       KC_D,       KC_F,       KC_G,       KC_LALT,      MO(3),    MO(3),    KC_RALT,    KC_H,       KC_J,       KC_K,       KC_L,       KC_QUOTE,   KC_RSHIFT,\
    KC_LCTL,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_SPACE,   KC__MUTE,   KC_HOME,   KC_SPACE,   KC_N,       KC_M,       KC_COMMA,   KC_DOT,     KC_SLASH,   KC_RCTL \
),
/* Qwerty
 * ,----------------------------------.
 * |   Q  |   W  |   E  |   R  |   T  |
 * |------+------+------+------+------|
 * |   A  |   S  |   D  |   F  |   G  |
 * |------+------+------+------+------+
 * |   Z  |   X  |   C  |   V  |   B  |
 * |------+------+------+------+------+---------+----------.
 * | Ctrl | Alt  | GUI  |Lower | Down |    M1   |    M2    |
 * `----------------------------------+------+------+------.
 *                                    | space| Shift|  K1  |
 *                                    `--------------------'
 */
[1] = LAYOUT_pair_via(
    KC_ESC,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,         _______,_______,  _______,_______,          KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_BSPACE,\
    KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,       MO(2),                            MO(2),      KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_ENTER, \
    KC_LSFT,    KC_A,       KC_S,       KC_D,       KC_F,       KC_G,       KC_LALT,      MO(3),    MO(3),    KC_RALT,    KC_H,       KC_J,       KC_K,       KC_L,       KC_QUOTE,   KC_RSHIFT,\
    KC_LCTL,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_SPACE,   KC__MUTE,   KC_HOME,   KC_SPACE,   KC_N,       KC_M,       KC_COMMA,   KC_DOT,     KC_SLASH,   KC_RCTL \
),
/* Qwerty
 * ,----------------------------------.
 * |   Q  |   W  |   E  |   R  |   T  |
 * |------+------+------+------+------|
 * |   A  |   S  |   D  |   F  |   G  |
 * |------+------+------+------+------+
 * |   Z  |   X  |   C  |   V  |   B  |
 * |------+------+------+------+------+---------+----------.
 * | Ctrl | Alt  | GUI  |Lower | Down |    M1   |    M2    |
 * `----------------------------------+------+------+------.
 *                                    | space| Shift|  K1  |
 *                                    `--------------------'
 */
[2] = LAYOUT_pair_via(
    KC_ESC,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,         _______,_______,  _______,_______,          KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_BSPACE,\
    KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,       MO(2),                            MO(2),      KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_ENTER, \
    KC_LSFT,    KC_A,       KC_S,       KC_D,       KC_F,       KC_G,       KC_LALT,      MO(3),    MO(3),    KC_RALT,    KC_H,       KC_J,       KC_K,       KC_L,       KC_QUOTE,   KC_RSHIFT,\
    KC_LCTL,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_SPACE,   KC__MUTE,   KC_HOME,   KC_SPACE,   KC_N,       KC_M,       KC_COMMA,   KC_DOT,     KC_SLASH,   KC_RCTL \
),
/* Qwerty
 * ,----------------------------------.
 * |   Q  |   W  |   E  |   R  |   T  |
 * |------+------+------+------+------|
 * |   A  |   S  |   D  |   F  |   G  |
 * |------+------+------+------+------+
 * |   Z  |   X  |   C  |   V  |   B  |
 * |------+------+------+------+------+---------+----------.
 * | Ctrl | Alt  | GUI  |Lower | Down |    M1   |    M2    |
 * `----------------------------------+------+------+------.
 *                                    | space| Shift|  K1  |
 *                                    `--------------------'
 */
[3] = LAYOUT_pair_via(
    KC_ESC,     KC_1,       KC_2,       KC_3,       KC_4,       KC_5,         _______,_______,  _______,_______,          KC_6,       KC_7,       KC_8,       KC_9,       KC_0,       KC_BSPACE,\
    KC_TAB,     KC_Q,       KC_W,       KC_E,       KC_R,       KC_T,       MO(2),                            MO(2),      KC_Y,       KC_U,       KC_I,       KC_O,       KC_P,       KC_ENTER, \
    KC_LSFT,    KC_A,       KC_S,       KC_D,       KC_F,       KC_G,       KC_LALT,      MO(3),    MO(3),    KC_RALT,    KC_H,       KC_J,       KC_K,       KC_L,       KC_QUOTE,   KC_RSHIFT,\
    KC_LCTL,    KC_Z,       KC_X,       KC_C,       KC_V,       KC_B,       KC_SPACE,   KC__MUTE,   KC_HOME,   KC_SPACE,   KC_N,       KC_M,       KC_COMMA,   KC_DOT,     KC_SLASH,   KC_RCTL \
),
};



