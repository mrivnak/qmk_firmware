#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
	_BASE,
	_FN
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-----------------------.
 * |     |     |     |     |
 * |-----+-----+-----+-----|
 * |     |     |     |     |
 * |     +-----+-----+-----|
 * |     |     |     |     |
 * |-----+-----+-----+-----|
 * |     |     |     |     |
 * |     +-----+-----+-----|
 * |     |     |           |
 * `-----------------------'
 */
[_BASE] = LAYOUT_numpad_reverse(
	KC_TAB,  KC_Q,    KC_W,    KC_E,
	KC_ESC,  KC_A,    KC_S,    KC_D,
	         KC_Z,    KC_X,    KC_C,
	KC_V,    KC_B,    KC_N,    KC_M,
	         KC_NO,   KC_LGUI
),

/* Lower
 * ,-----------------------.
 * |RESET|     |     |     |
 * |-----+-----+-----+-----|
 * |     |     |     |     |
 * |     +-----+-----+-----|
 * |     |     |     |     |
 * |-----+-----+-----+-----|
 * |     |     |     |     |
 * |     +-----+-----+-----|
 * |     |     |           |
 * `-----------------------'
 */
[_FN] = LAYOUT_numpad_reverse(
	RESET,   KC_Q,    KC_W,    KC_E,
	KC_ESC,  KC_A,    KC_S,    KC_D,
	         KC_Z,    KC_X,    KC_C,
	KC_V,    KC_B,    KC_N,    KC_M,
	         KC_NO,   KC_LGUI
),
};

void matrix_init_user(void) {

}
