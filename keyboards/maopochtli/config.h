/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once


/* USB Device descriptor parameter */

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 8
#define MATRIX_COLS 8

#define USE_SERIAL
#define SOFT_SERIAL_PIN D1

// wiring of each half
#define MATRIX_ROW_PINS { D3, D7, E6, B4 }
#define MATRIX_COL_PINS { D2, B5, F4, F5, F6, F7, B1, B3 }
// #define MATRIX_COL_PINS { B3, B1, F7, F6, F5, F4 } //uncomment this line and comment line above if you need to reverse left-to-right key order

#define DIODE_DIRECTION COL2ROW
/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

#define TAPPING_TERM 150

#define USB_POLLING_INTERVAL_MS 1
// #define QMK_KEYS_PER_SCAN 12

#ifdef ENCODER_ENABLE
#define ENCODER_RESOLUTION 4
#define ENCODERS_PAD_A { D4 }
#define ENCODERS_PAD_B { C6 }
//#define ENCODERS_PAD_A_RIGHT { B2 }
//#define ENCODERS_PAD_B_RIGHT { B6 }
#define ENCODERS 2
#define ENCODERS_CW_KEY  { { 6,0 },{ 6,4 } }
#define ENCODERS_CCW_KEY { { 7,0 },{ 7,4 } }
#endif
