/* Copyright 2018 REPLACE_WITH_YOUR_NAME
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once
#include "quantum.h"

// This a shortcut to help you visually see your layout.
// The following is an example using the Planck MIT layout
// The first section contains all of the arguments
// The second converts the arguments into a two-dimensional array
#define LAYOUT( \
                k09, k19, k1A, k29, k39, k3A, k49, k59, k5A, k69, k79, k7A,                                                  \
                k0A, k0B, k1B, k2A, k2B, k3B, k4A, k4B, k5B, k6A, k6B, k7B,                                                  \
    k31, k32,   k34, k24, k25, k26, k27, k37, k38, k28, k2C, k2D, k2E, k3E, k3C, k3F,   k3G, k3H, k2G,   k2F, k2H, k2I, k20, \
    k21, k41,   k42, k44, k45, k46, k47, k57, k58, k48, k4C, k4D, k4E, k5E, k5C, k6F,   k1G, k5G, k4G,   k4F, k4H, k4I, k40, \
    k51, k52,   k62, k14, k15, k16, k17, k07, k08, k18, k1C, k1D, k1E, k0E, k6E,             k0G,        k1F, k1H, k1I, k10, \
    k11, k12,   k73, k74, k64, k65, k66, k67, k77, k78, k68, k6C, k6D, k7E,      k63,   k60, k0J, k1J,   k61, k6H, k6I, k7J, \
    k02, k01,   k00,    k70,                k71,             k03,      k72,                  k0F,        k7H,      k7I       \
) \
{ \
    {   k7J,   k7I,   k7H,   KC_NO, KC_NO, k7E, KC_NO, KC_NO, k7B, k7A, k79, k78, k77, KC_NO, KC_NO, KC_NO, k73,   k72,   k71, k70   }, \
    {   KC_NO, k6I,   k6H,   KC_NO, k6F,   k6E, k6D,   k6C,   k6B, k6A, k69, k68, k67, k66,   k65,   k64,   k63,   k62,   k61, k60   }, \
    {   KC_NO, KC_NO, KC_NO, k5G,   KC_NO, k5E, KC_NO, k5C,   k5B, k5A, k59, k58, k57, KC_NO, KC_NO, KC_NO, KC_NO, k52,   k51, KC_NO }, \
    {   KC_NO, k4I,   k4H,   k4G,   k4F,   k4E, k4D,   k4C,   k4B, k4A, k49, k48, k47, k46,   k45,   k44,   KC_NO, k42,   k41, k40   }, \
    {   KC_NO, KC_NO, k3H,   k3G,   k3F,   k3E, KC_NO, k3C,   k3B, k3A, k39, k38, k37, KC_NO, KC_NO, k34,   KC_NO, k32,   k31, KC_NO }, \
    {   KC_NO, k2I,   k2H,   k2G,   k2F,   k2E, k2D,   k2C,   k2B, k2A, k29, k28, k27, k26,   k25,   k24,   KC_NO, KC_NO, k21, k20   }, \
    {   k1J,   k1I,   k1H,   k1G,   k1F,   k1E, k1D,   k1C,   k1B, k1A, k19, k18, k17, k16,   k15,   k14,   KC_NO, k12,   k11, k10   }, \
    {   k0J,   KC_NO, KC_NO, k0G,   k0F,   k0E, KC_NO, KC_NO, k0B, k0A, k09, k08, k07, KC_NO, KC_NO, KC_NO, k03,   k02,   k01, k00   }, \
}
