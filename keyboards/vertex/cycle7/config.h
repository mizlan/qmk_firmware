/* Copyright 2022 Eason

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
#define WS2812_SPI_DRIVER SPID2
#define WS2812_SPI_MOSI_PAL_MODE 5

/*
 * Another key-down on a Tap-or-Hold key is immediately emitted as a
 * hold upon the simultaneous key-down of another key.
 *
 * ref: https://docs.qmk.fm/tap_hold#hold-on-other-key-press
 */
#define HOLD_ON_OTHER_KEY_PRESS

/*
 * By default, if a Tap-or-Hold key is tapped and then immediately pressed
 * down again, the latter emits as a tap (to allow a way for hold-for-key-repeat).
 * Prefer emitting hold.
 *
 * ref: https://docs.qmk.fm/tap_hold#quick-tap-term
 */
#define QUICK_TAP_TERM 0
