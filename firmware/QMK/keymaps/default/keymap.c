#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = LAYOUT(
    KC_ESC,        KC_TAB,        MO(1),
    KC_LEFT,       KC_DOWN,       KC_RGHT,
    KC_HOME,       KC_UP,         KC_END,
    KC_LCTL,       KC_LSFT,       KC_LALT
),

[1] = LAYOUT(
    KC_LCBR, KC_RCBR, KC_TRNS,
    KC_LBRC, KC_RBRC, KC_PIPE,
    KC_LPRN, KC_RPRN, KC_BSLS,
    KC_LT,   KC_GT,   KC_TRNS
),

[2] = LAYOUT(
    LCTL(KC_C), LCTL(KC_V), LCTL(KC_Z),
    LCTL(KC_S), LCTL(KC_F), LCTL(KC_R),
    LCTL(LSFT(KC_T)), LALT(KC_TAB), KC_ENT,
    KC_NO, KC_TRNS, KC_TRNS
)

};