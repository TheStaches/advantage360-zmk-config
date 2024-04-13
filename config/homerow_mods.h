/* Homerow mods */
#define KEYS_L LT0 LT1 LT2 LT3 LT4 LM0 LM1 LM2 LM3 LM4 LB0 LB1 LB2 LB3 LB4  // left hand
#define KEYS_R RT0 RT1 RT2 RT3 RT4 RM0 RM1 RM2 RM3 RM4 RB0 RB1 RB2 RB3 RB4  // right hand
#define THUMBS LH2 LH1 LH0 RH0 RH1 RH2                                     // thumbs

// left-hand HRMs
ZMK_BEHAVIOR(hml, hold_tap,
        flavor = "balanced";
        tapping-term-ms = <280>;
        quick-tap-ms = <175>;
        bindings = <&kp>, <&kp>;
        require-prior-idle-ms = <150>;
        hold-trigger-key-positions = <KEYS_R THUMBS>;
        hold-trigger-on-release;
)

// right-hand
ZMK_BEHAVIOR(hmr, hold_tap,
        flavor = "balanced";
        tapping-term-ms = <280>;
        quick-tap-ms = <175>;
        // bindings = <&kp>, <&kp>;
        // require-prior-idle-ms = <150>;
        // hold-trigger-key-positions = <KEYS_L THUMBS>;
        // hold-trigger-on-release;
)

// used for HRM-combo
ZMK_BEHAVIOR(hml_repeat, hold_tap,
        flavor = "balanced";
        tapping-term-ms = <280>;
        quick-tap-ms = <175>;
        bindings = <&kp>, <&key_repeat>;
        require-prior-idle-ms = <150>;
        hold-trigger-key-positions = <KEYS_R THUMBS>;
        hold-trigger-on-release;
)


// Base Layer home row mods
#define A_LGUI     &hml LGUI A
#define R_LALT     &hml LALT R
#define S_LCTRL    &hml LCTRL S
#define T_LSHFT    &hml LSHFT T
#define N_RSHFT    &hmr RSHFT N
#define E_RCTRL    &hmr RCTRL E
#define I_RALT     &hmr RALT I
#define O_RGUI     &hmr RGUI O
