#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the Keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */

#define LAYOUT_numpad_reverse( \
    K00, K01, K02, K03, \
    K10, K11, K12, K13, \
         K21, K22, K23, \
    K30, K31, K32, K33, \
         K41, K42       \
) \
{ \
    { K00,   K01, K02, K03   }, \
    { K10,   K11, K12, K13   }, \
    { KC_NO, K21, K22, K23   }, \
    { K30,   K31, K32, K33   }, \
    { KC_NO, K41, K42, KC_NO }, \
}
