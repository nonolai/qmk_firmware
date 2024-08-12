#include QMK_KEYBOARD_H

enum planck_layers { _QWERTY, _RAISE, _LOWER, _NAV, _CONFIG };

/* clang-format off */
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/**
 *                                              Qwerty
 *
 * ┌───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┐
 * │  Tab  │   Q   │   W   │   E   │   R   │   T   │   Y   │   U   │   I   │   O   │   P   │ Bksp  │
 * ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┤
 * │  Nav  │   A   │   S   │   D   │   F   │   G   │   H   │   J   │   K   │   L   │   ;   │   '   │
 * ├───────┼───────┼───────┼───────┼───.───┼───────┼───────┼───.───┼───────┼───────┼───────┼───────┤
 * │ Shift │   Z   │   X   │   C   │   V   │   B   │   N   │   M   │   ,   │   .   │   /   │Sft/Ent│
 * ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┤
 * │ Ctrl  │  F17  │  Alt  │  GUI  │ Lower │ Space │  Esc  │ Raise │   ←   │   ↓   │   ↑   │   →   │
 * └───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┘
 */
[_QWERTY] = LAYOUT_planck_grid(
        KC_TAB,  KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
        MO(_NAV),KC_A,   KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
        KC_LSFT, KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, RSFT_T(KC_ENT),
        KC_LCTL, KC_F17, KC_LALT, KC_LGUI, TL_UPPR, KC_SPC,  KC_ESC,  TL_LOWR, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
),


/**
 *                                               Raise
 *
 * ┌───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┐
 * │   `   │   1   │   2   │   3   │   4   │   5   │       │   [   │   ]   │   _   │   +   │  Del  │
 * ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┤
 * │ █████ │   6   │   7   │   8   │   9   │   0   │       │   (   │   )   │   -   │   =   │ █████ │
 * ├───────┼───────┼───────┼───────┼───.───┼───────┼───────┼───.───┼───────┼───────┼───────┼───────┤
 * │       │  F1   │  F2   │  F3   │  F4   │  F5   │  F6   │   {   │   }   │   |   │   \   │       │
 * ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┤
 * │       │       │       │       │ Raise │ █████ │ █████ │ Confg │ Home  │ PgDn  │ PgUp  │  End  │
 * └───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┘
 */
[_RAISE] = LAYOUT_planck_grid(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    XXXXXXX, KC_LBRC, KC_RBRC, KC_UNDS, KC_PLUS, KC_DEL,
        XXXXXXX, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    XXXXXXX, KC_LPRN, KC_RPRN, KC_MINS, KC_EQL,  XXXXXXX,
        _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_LCBR, KC_RCBR, KC_PIPE, KC_BSLS, _______,
        _______, _______, _______, _______, TL_UPPR, XXXXXXX, XXXXXXX, TL_LOWR, KC_HOME, KC_PGDN, KC_PGUP, KC_END
),

/**
 *                                               Lower
 *
 * ┌───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┐
 * │   ~   │   !   │   @   │   #   │   $   │   %   │ █████ │ NmLck │   7   │   8   │   9   │   /   │
 * ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┤
 * │ █████ │   ^   │   &   │   *   │   (   │   )   │ █████ │ █████ │   4   │   5   │   6   │   -   │
 * ├───────┼───────┼───────┼───────┼───.───┼───────┼───────┼───.───┼───────┼───────┼───────┼───────┤
 * │       │  F7   │  F8   │  F9   │  F10  │  F11  │  F12  │ █████ │   1   │   2   │   3   │   +   │
 * ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┤
 * │       │       │       │       │ Confg │ █████ │ █████ │ Lower │   0   │   .   │ Enter │   *   │
 * └───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┘
 */
[_LOWER] = LAYOUT_planck_grid(
        KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, XXXXXXX, KC_NUM,  KC_P7, KC_P8,   KC_P9,   KC_PSLS,
        XXXXXXX, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, XXXXXXX, XXXXXXX, KC_P4, KC_P5,   KC_P6,   KC_PMNS,
        _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  XXXXXXX, KC_P1, KC_P2,   KC_P3,   KC_PPLS,
        _______, _______, _______, _______, TL_UPPR, XXXXXXX, XXXXXXX, TL_LOWR, KC_P0, KC_PDOT, KC_PENT, KC_PAST
),

/**
 *                                             Navigation
 *
 * ┌───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┐
 * │ █████ │ Home  │   ↑   │  End  │ PgUp  │ █████ │ PgUp  │ Home  │   ↑   │  End  │ PrntS │  Del  │
 * ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┤
 * │  Nav  │   ←   │   ↓   │   →   │ PgDn  │ █████ │ PgDn  │   ←   │   ↓   │   →   │ █████ │ █████ │
 * ├───────┼───────┼───────┼───────┼───.───┼───────┼───────┼───.───┼───────┼───────┼───────┼───────┤
 * │ █████ │ █████ │ █████ │ █████ │ █████ │ █████ │ █████ │ █████ │ Vol-  │ Mute  │ Vol+  │ █████ │
 * ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┤
 * │ █████ │ █████ │ █████ │ █████ │ █████ │ █████ │ █████ │ █████ │   ⏮   │   ⏯   │   ⏭   │ █████ │
 * └───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┘
 */
[_NAV] = LAYOUT_planck_grid(
        XXXXXXX, KC_HOME, KC_UP,   KC_END,  KC_PGUP, XXXXXXX, KC_PGUP, KC_HOME, KC_UP,   KC_END,  KC_PSCR, KC_DEL,
        MO(_NAV),KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, XXXXXXX, KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_VOLD, KC_MUTE, KC_VOLU, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MPRV, KC_MPLY, KC_MNXT, XXXXXXX
),

/**
 *                                              Config
 *
 * ┌───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┬───────┐
 * │ █████ │ █████ │ █████ │ █████ │ █████ │ █████ │ █████ │ Hue + │ Sat + │ Val + │ █████ │ █████ │
 * ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┤
 * │ █████ │ █████ │NextPat│PrevPat│RGBTogg│ █████ │ █████ │ Hue - │ Sat - │ Val - │ █████ │ █████ │
 * ├───────┼───────┼───────┼───────┼───.───┼───────┼───────┼───.───┼───────┼───────┼───────┼───────┤
 * │ █████ │ █████ │ █████ │ █████ │ █████ │ █████ │ █████ │ █████ │ █████ │ █████ │ █████ │ █████ │
 * ├───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┼───────┤
 * │EEPClr │ █████ │AltGUIN│AltGUIS│Config │ █████ │ █████ │Config │ █████ │ █████ │ █████ │Reboot │
 * └───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┴───────┘
 */
[_CONFIG] = LAYOUT_planck_grid(
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, UG_NEXT, UG_PREV, UG_TOGG, XXXXXXX, XXXXXXX, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
        EE_CLR,  XXXXXXX, AG_NORM, AG_SWAP, KC_TRNS, XXXXXXX, XXXXXXX, KC_TRNS, XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT
)
};
/* clang-format on */
