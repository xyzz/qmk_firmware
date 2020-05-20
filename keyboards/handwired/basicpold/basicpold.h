#pragma once

#include "quantum.h"

#define LAYOUT_66_ansi( \
    K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0E,        K0G, \
    K10,   K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E,      K1G, \
    K20,    K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D,               \
    K31,       K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3D,       K3F,      \
    K40,  K41, K42,              K46,               K4A,   K4B,  K4C,  K4E, K4F, K4G  \
) { \
    { K00,   K01,   K02,   K03,   K04,   K05,   K06,   K07,   K08,   K09,   K0A,   K0B,   K0C,   KC_NO, K0E,   KC_NO, K0G   }, \
    { K10,   KC_NO, K12,   K13,   K14,   K15,   K16,   K17,   K18,   K19,   K1A,   K1B,   K1C,   K1D,   K1E,   KC_NO, K1G   }, \
    { K20,   KC_NO, K22,   K23,   K24,   K25,   K26,   K27,   K28,   K29,   K2A,   K2B,   K2C,   K2D,   KC_NO, KC_NO, KC_NO }, \
    { KC_NO, K31,   K32,   K33,   K34,   K35,   K36,   K37,   K38,   K39,   K3A,   K3B,   KC_NO, K3D,   KC_NO, K3F,   KC_NO }, \
    { K40,   K41,   K42,   KC_NO, KC_NO, KC_NO, K46,   KC_NO, KC_NO, KC_NO, K4A,   K4B,   K4C,   KC_NO, K4E,   K4F,   K4G   }, \
}
