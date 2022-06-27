/* Copyright 2021 Joe Maples <joe@maples.dev>
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

#include QMK_KEYBOARD_H
enum {
  TD_RUNREGRESS = 0,
  TD_RGB = 1
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(TD(TD_RUNREGRESS), KC_SPACE, TD(TD_RGB)),

};

// Tap Dance definitions
void runRegress(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count >= 3) {
        // Reset the keyboard if you tap the key more than three times
        reset_keyboard();
        reset_tap_dance(state);
    }
    else if (state->count == 2) {
        SEND_STRING("runRegress --auto --runall\n");
        reset_tap_dance(state);
    }
    else if (state->count == 1) {
        SEND_STRING("runRegress --auto --runall");
        reset_tap_dance(state);
    }
}

void td_rgb(qk_tap_dance_state_t *state, void *user_data) {
    if (state->count >= 3) {
        // Reset the keyboard if you tap the key more than three times
        reset_keyboard();
        reset_tap_dance(state);
    }
    else if (state->count == 2) {
        rgblight_toggle();
        reset_tap_dance(state);
    }
    else if (state->count == 1) {
        rgblight_step();
        reset_tap_dance(state);
    }
}

qk_tap_dance_action_t tap_dance_actions[] = {
    // Tap once for A, twice for B
    [TD_RUNREGRESS] = ACTION_TAP_DANCE_FN(runRegress),
    [TD_RGB] = ACTION_TAP_DANCE_FN(td_rgb),
};
