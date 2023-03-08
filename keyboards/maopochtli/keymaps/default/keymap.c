#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.

enum layers {
    _BASE,
    _WIN,
    _GAMES,
    _NAVIGATION,
    _WIN_NAV,
    _NAV_ALT,
    _SYMBOLS,
    _ADJUST
};

enum custom_keycodes {
    PRT_SCR = SAFE_RANGE,
    MS_CTRL,
    CLIPBRD,
    EMOTES
};

#define FN1_SPC     LT(_NAVIGATION, KC_SPACE)
#define FN2_ENT     MO(_SYMBOLS)
#define FN4_ADJ     MO(_ADJUST)
#define SFT_ENT     RSFT_T(KC_ENT)
#define CTL_ESC     LCTL_T(KC_ESC)
#define FN_GAME     TG(_GAMES)
#define FN_WIN      TG(_WIN)
#define WIN_NAV     LT(_WIN_NAV, KC_SPACE)
#define NAV_ALT     MO(_NAV_ALT)

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [_BASE]       = { ENCODER_CCW_CW(KC_MS_WH_DOWN, KC_MS_WH_UP), ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
    [_WIN]        = { ENCODER_CCW_CW(KC_MS_WH_DOWN, KC_MS_WH_UP), ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
    [_GAMES]      = { ENCODER_CCW_CW(KC_MS_WH_DOWN, KC_MS_WH_UP), ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
    [_NAVIGATION] = { ENCODER_CCW_CW(KC_MS_WH_DOWN, KC_MS_WH_UP), ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
    [_WIN_NAV]    = { ENCODER_CCW_CW(KC_MS_WH_DOWN, KC_MS_WH_UP), ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
    [_NAV_ALT]    = { ENCODER_CCW_CW(KC_MS_WH_DOWN, KC_MS_WH_UP), ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
    [_SYMBOLS]    = { ENCODER_CCW_CW(KC_MS_WH_DOWN, KC_MS_WH_UP), ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
    [_ADJUST]     = { ENCODER_CCW_CW(KC_MS_WH_DOWN, KC_MS_WH_UP), ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
};
#endif


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
[_BASE] = LAYOUT_pair(
    KC_ESC , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                                     KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_DEL  , \
    KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , FN1_SPC,                   FN2_ENT, KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSPC , \
    CTL_ESC, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_LGUI, FN4_ADJ, FN4_ADJ, KC_RALT, KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOTE, \
    KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , FN_GAME, KC_PSCR, KC_MUTE, FN_WIN , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, SFT_ENT   \
),

[_WIN] = LAYOUT_pair(
    KC_ESC , KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                                     KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_DEL  , \
    KC_TAB , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , WIN_NAV,                   FN2_ENT, KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSPC , \
    KC_LGUI, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_LCTL, FN4_ADJ, FN4_ADJ, KC_RALT, KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOTE, \
    KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , FN_GAME, KC_PSCR, KC_MUTE, FN_WIN , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, SFT_ENT   \
),

[_GAMES] = LAYOUT_pair(
    KC_LCTL, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                                     KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , KC_DEL  , \
    KC_ESC , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_SPC,                    FN2_ENT, KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , KC_BSPC , \
    KC_LALT, KC_A   , KC_S   , KC_D   , KC_F   , KC_G   , KC_LGUI, FN4_ADJ, FN4_ADJ, KC_RALT, KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, KC_QUOTE, \
    KC_LSFT, KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   , FN_GAME, KC_PSCR, KC_MUTE, FN_WIN , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH, SFT_ENT   \
),

[_NAVIGATION] = LAYOUT_pair(
    _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______ , _______, _______, \
    _______, EMOTES , CLIPBRD, PRT_SCR, MS_CTRL, _______, _______,                   _______, _______, _______, KC_UP  , _______ , _______, _______, \
    _______, KC_LCTL, KC_LSFT, KC_LALT, KC_LGUI, _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_RIGHT, _______, _______, \
    _______, _______, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______, _______, _______, _______, _______, _______, _______, _______ , _______, _______  \
),

[_WIN_NAV] = LAYOUT_pair(
    _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______ , _______, _______, \
    _______, EMOTES , CLIPBRD, PRT_SCR, MS_CTRL, _______, _______,                   _______, _______, _______, KC_UP  , _______ , _______, _______, \
    _______, KC_LALT, KC_LSFT, KC_LCTL, NAV_ALT, _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_RIGHT, _______, _______, \
    _______, _______, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______, _______, _______, _______, _______, _______, _______, _______ , _______, _______  \
),

[_NAV_ALT] = LAYOUT_pair(
    _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______ , _______, _______, \
    _______, EMOTES , CLIPBRD, PRT_SCR, MS_CTRL, _______, _______,                   _______, _______, _______, KC_HOME  , _______ , _______, _______, \
    _______, KC_LALT, KC_LSFT, KC_LCTL, NAV_ALT, _______, _______, _______, _______, _______, _______, KC_HOME, KC_END , KC_END, _______, _______, \
    _______, _______, KC_MPRV, KC_MPLY, KC_MNXT, _______, _______, _______, _______, _______, _______, _______, _______, _______ , _______, _______  \
),

[_SYMBOLS] = LAYOUT_pair(
    _______, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, _______, \
    _______, KC_EXLM, KC_AT  , KC_HASH, KC_DLR , KC_PERC, _______,                   _______, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______, \
    _______, KC_QUES, KC_TILD, KC_PIPE, KC_MINS, _______, _______, _______, _______, _______, _______, KC_EQL , KC_LBRC, KC_RBRC, _______, _______, \
    _______, KC_SLSH, KC_GRV , KC_BSLS, KC_UNDS, _______, _______, _______, _______, _______, _______, KC_PPLS, KC_LCBR, KC_RCBR, _______, _______  \
),

[_ADJUST] = LAYOUT_pair(
    QK_BOOT, _______, _______, _______, _______, _______,                                     _______, _______, _______, _______, _______, QK_BOOT, \
    _______, KC_F9  , KC_F10 , KC_F11 , KC_F12 , _______, _______,                   _______, _______, _______, _______, _______, _______, _______, \
    _______, KC_F5  , KC_F6  , KC_F7  , KC_F8  , _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, \
    _______, KC_F1  , KC_F2  , KC_F3  , KC_F4  , _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______  \
)
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch(keycode) {
        case PRT_SCR:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LALT) SS_DOWN(X_LSFT) SS_TAP(X_S));
            } else {
                clear_keyboard();
            }
            break;
        case MS_CTRL:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LCTL) SS_TAP(X_UP));
            } else {
                clear_keyboard();
            }
            break;
        case CLIPBRD:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LALT) SS_DOWN(X_LGUI) SS_TAP(X_V));
            } else {
                clear_keyboard();
            }
            break;
        case EMOTES:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LCTL) SS_DOWN(X_LGUI) SS_TAP(X_SPC));
            } else {
                clear_keyboard();
            }
            break;
    }
    return true;
}
