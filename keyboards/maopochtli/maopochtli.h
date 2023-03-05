#pragma once

#include "maopochtli.h"
#include "quantum.h"

#define KNO KC_NO

#define LAYOUT_pair( \
	L00, L01, L02, L03, L04, L05,           R00, R01, R02, R03, R04, R05,               \
	L10, L11, L12, L13, L14, L15, L16,      R10, R11, R12, R13, R14, R15, R16,          \
	L20, L21, L22, L23, L24, L25, L26, L27, R20, R21, R22, R23, R24, R25, R26, R27,     \
	L30, L31, L32, L33, L34, L35, L36, L37, R30, R31, R32, R33, R34, R35, R36, R37      \
	){ \
		{ L00, L01, L02, L03, L04, L05, KNO, KNO, }, \
		{ L10, L11, L12, L13, L14, L15, L16, KNO, }, \
		{ L20, L21, L22, L23, L24, L25, L26, L27, }, \
		{ L30, L31, L32, L33, L34, L35, L36, L37, }, \
        { R05, R04, R03, R02, R01, R00, KNO, KNO, }, \
        { R16, R15, R14, R13, R12, R11, R10, KNO, }, \
        { R27, R26, R25, R24, R23, R22, R21, R20, }, \
        { R37, R36, R35, R34, R33, R32, R31, R30  }  \
	}
#define LAYOUT_pair_via( \
	L00, L01, L02, L03, L04, L05,k00_a,k00_b, R00,R01,R02, R03, R04, R05,k01_a,k01_b,\
	L10, L11, L12, L13, L14, L15, L16,        R10, R11, R12, R13, R14, R15, R16,\
    L20, L21, L22, L23, L24, L25, L26, L27,   R20, R21, R22, R23, R24, R25, R26, R27,\
    L30, L31, L32, L33, L34, L35, L36, L37,   R30, R31, R32, R33, R34, R35, R36, R37 \
	){ \
		{   L00,   L01,  L02, L03, L04, L05, k00_a,k00_b },\
		{   L10,   L11,  L12, L13, L14, L15, L16, },\
		{   L20,   L21,  L22, L23, L24, L25, L26,L27, },\
		{   L30,   L31,  L32, L33, L34, L35, L36, L37, },\
        {   R05,   R04,  R03, R02, R01, R00,k01_a, k01_b, }, \
        {    R16,  R15, R14, R13, R12, R11, R10, }, \
        {  R27,R26,   R25,  R24, R23, R22, R21, R20, }, \
        {   R37,   R36,  R35, R34, R33, R32, R31, R30  } \
	}
