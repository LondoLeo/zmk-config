#define LEFT_KEYS <0 1 2 3 4 10 11 12 13 14 15 22 23 24 25 26 27>
#define RIGHT_KEYS <5 6 7 8 9 16 17 18 19 20 21 28 29 30 31 32 33>

&caps_word {
    continue-list = <UNDERSCORE MINUS BSPC LSHFT RSHFT>;
};
/ {
    behaviors {
        hml: home_row_mod_left {
            compatible = "zmk,behavior-hold-tap";
            #binding-cells = <2>;
            bindings = <&kp>, <&kp>;
            flavor = "balanced";
            require-prior-idle-ms = <150>;
            tapping-term-ms = <280>;
            quick-tap-ms = <175>;
            hold-trigger-key-positions = RIGHT_KEYS;
            hold-trigger-on-release;
        };
        hll: home_row_layer_left {
            compatible = "zmk,behavior-hold-tap";
            #binding-cells = <2>;
            bindings = <&mo>, <&kp>;
            flavor = "balanced";
            require-prior-idle-ms = <150>;
            tapping-term-ms = <280>;
            quick-tap-ms = <175>;
            hold-trigger-key-positions = RIGHT_KEYS;
            hold-trigger-on-release;
        };
        hmr: home_row_mod_right {
            compatible = "zmk,behavior-hold-tap";
            #binding-cells = <2>;
            bindings = <&kp>, <&kp>;
            flavor = "balanced";
            require-prior-idle-ms = <150>;
            tapping-term-ms = <280>;
            quick-tap-ms = <175>;
            hold-trigger-key-positions = LEFT_KEYS; 
            hold-trigger-on-release;
        };
        hlr: home_row_layer_right {
            compatible = "zmk,behavior-hold-tap";
            #binding-cells = <2>;
            bindings = <&mo>, <&kp>;
            flavor = "balanced";
            require-prior-idle-ms = <150>;
            tapping-term-ms = <280>;
            quick-tap-ms = <175>;
            hold-trigger-key-positions = LEFT_KEYS;
            hold-trigger-on-release;
        };
        mt: mod_tap {
            compatible = "zmk,behavior-hold-tap";
            #binding-cells = <2>;
            bindings = <&kp>, <&kp>;
            flavor = "hold-preferred";
            tapping-term-ms = <175>;
            display-name = "Mod-Tap";
        };
        lt: layer_tap {
            compatible = "zmk,behavior-hold-tap";
            #binding-cells = <2>;
            bindings = <&mo>, <&kp>;
            flavor = "hold-preferred";
            tapping-term-ms = <175>;
            display-name = "Layer-Tap";
        };
    };
};

#define SPC1 LC(LG(N1))
#define SPC2 LC(LG(N2))
#define SPC3 LC(LG(N3))
#define SPC4 LC(LG(N4))
#define SPC5 LC(LG(N5))

#define TAB1 LG(N1)
#define TAB2 LG(N2)
#define TAB3 LG(N3)
#define TAB4 LG(N4)
#define TAB5 LG(N5)
#define TAB6 LG(N6)
#define TAB7 LG(N7)
#define TAB8 LG(N8)
#define TAB9 LG(N9)
#define TAB0 LG(N0)

#define BRW_BCK LG(LEFT)
#define BRW_FWD LG(RIGHT)
