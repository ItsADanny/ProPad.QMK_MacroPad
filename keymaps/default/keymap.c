// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum custom_keycodes {
    CLEAR_SELECTED_LAYER,
    TOGGLE_FULLSCREEN_MODE,
    TOGGLE_PERSPECTIVE_GUIDE,
    BRUSHSIZE_INCREASE_1PER,
    BRUSHSIZE_INCREASE_10PER,
    BRUSHSIZE_DECREASE_1PER,
    BRUSHSIZE_DECREASE_10PER,
    COLOR_BALANCE_ADJUSTMENT,
    CLEAR_SELECTION,
    DUPLICATE_SELECTION,
    ACTIONS_MENU,
    HSB_ADJUSTMENT,
    COPY,
    PASTE,
    CUT
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌────┬────┬────┬────┬────┐
     * │B+1%│B+5%│B+10│ PT │ ET │
     * ├────┼────┼────┼────┼────┤
     * │B-1%│B-5%│B-10│ K9 │ K10│
     * ├────┼────┼────┼────┼────┤
     * │ K11│ K12│ K13│ K14│ K15│
     * ├────┼────┼────┼────┼────┤
     * │ K16│ K17│ K18│ K19│ K20│
     * ├────┼────┼────┼────┼────┤
     * │ K21│ K22│ K23│ K24│ K25│
     * └────┴────┴────┴────┴────┘
     */
    [0] = LAYOUT(
        BRUSHSIZE_INCREASE_1PER, KC_RIGHT_BRACKET, BRUSHSIZE_INCREASE_10PER, KC_B, KC_E,
        BRUSHSIZE_DECREASE_1PER, KC_LEFT_BRACKET, BRUSHSIZE_DECREASE_10PER, KC_C, KC_L,
        KC_SPC, ACTIONS_MENU, TOGGLE_PERSPECTIVE_GUIDE, KC_S, KC_V,
        KC_X, CLEAR_SELECTED_LAYER, TOGGLE_FULLSCREEN_MODE, COLOR_BALANCE_ADJUSTMENT, HSB_ADJUSTMENT,
        CUT, COPY, PASTE, CLEAR_SELECTION, DUPLICATE_SELECTION
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case CLEAR_SELECTED_LAYER:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LEFT_GUI) SS_TAP(X_BACKSPACE) SS_UP(X_LEFT_GUI));
            } else {
                //Key released
            }
            break;
        case TOGGLE_FULLSCREEN_MODE:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LEFT_GUI) SS_TAP(X_0) SS_UP(X_LEFT_GUI));
            } else {
                //Key released
            }
            break;
        case TOGGLE_PERSPECTIVE_GUIDE:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LEFT_GUI) SS_TAP(X_SEMICOLON) SS_UP(X_LEFT_GUI));
            } else {
                //Key released
            }
            break;
        case BRUSHSIZE_INCREASE_1PER:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LEFT_GUI) SS_TAP(X_RIGHT_BRACKET) SS_UP(X_LEFT_GUI));
            } else {
                //Key released
            }
            break;
        case BRUSHSIZE_INCREASE_10PER:
            if (record->event.pressed) { 
                SEND_STRING(SS_DOWN(X_LEFT_SHIFT) SS_TAP(X_RIGHT_BRACKET) SS_UP(X_LEFT_SHIFT));
            } else {
                //Key released
            }
            break;
        case BRUSHSIZE_DECREASE_1PER:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LEFT_GUI) SS_TAP(X_LEFT_BRACKET) SS_UP(X_LEFT_GUI));
            } else {
                //Key released
            }
            break;
        case BRUSHSIZE_DECREASE_10PER:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LEFT_SHIFT) SS_TAP(X_LEFT_BRACKET) SS_UP(X_LEFT_SHIFT));
            } else {
                //Key released
            }
            break;
        case COLOR_BALANCE_ADJUSTMENT:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LEFT_GUI) SS_TAP(X_B) SS_UP(X_LEFT_GUI));
            } else {
                //Key released
            }
            break;
        case CLEAR_SELECTION:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LEFT_GUI) SS_TAP(X_D) SS_UP(X_LEFT_GUI));
            } else {
                //Key released
            }
            break;
        case DUPLICATE_SELECTION:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LEFT_GUI) SS_TAP(X_J) SS_UP(X_LEFT_GUI));
            } else {
                //Key released
            }
            break;
        case ACTIONS_MENU:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LEFT_GUI) SS_TAP(X_K) SS_UP(X_LEFT_GUI));
            } else {
                //Key released
            }
            break;
        case HSB_ADJUSTMENT:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LEFT_GUI) SS_TAP(X_U) SS_UP(X_LEFT_GUI));
            } else {
                //Key released
            }
            break;
        case COPY:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LEFT_GUI) SS_TAP(X_C) SS_UP(X_LEFT_GUI));
            } else {
                //Key released
            }
            break;
        case PASTE:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LEFT_GUI) SS_TAP(X_V) SS_UP(X_LEFT_GUI));
            } else {
                //Key released
            }
            break;
        case CUT:
            if (record->event.pressed) {
                SEND_STRING(SS_DOWN(X_LEFT_GUI) SS_TAP(X_X) SS_UP(X_LEFT_GUI));
            } else {
                //Key released
            }
            break;
    }
    return true;
}