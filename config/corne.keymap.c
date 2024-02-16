/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */

#include <behaviors.dtsi>
#include <dt-bindings/zmk/keys.h>
#include <dt-bindings/zmk/bt.h>

/ {
        keymap {
                compatible = "zmk,keymap";

                default_layer {
                        bindings = <
//    ┌─────────┬─────────────┬─────────────┬───────────┬───────────┬─────────┐   ┌───────────┬──────────┬────────────────┬───────────────┬────────────────┬──────────┐
//    │ &kp TAB │    &kp Q    │    &kp W    │   &kp E   │   &kp R   │  &kp T  │   │   &kp Y   │  &kp U   │     &kp I      │     &kp O     │     &kp P      │ &kp BSPC │
//    ├─────────┼─────────────┼─────────────┼───────────┼───────────┼─────────┤   ├───────────┼──────────┼────────────────┼───────────────┼────────────────┼──────────┤
//    │ &kp ESC │    &kp A    │    &kp S    │   &kp D   │   &kp F   │  &kp G  │   │   &kp H   │  &kp J   │     &kp K      │     &kp L     │    &kp SEMI    │ &kp SQT  │
//    ├─────────┼─────────────┼─────────────┼───────────┼───────────┼─────────┤   ├───────────┼──────────┼────────────────┼───────────────┼────────────────┼──────────┤
//    │  &mo 1  │ &mt LCTRL Z │ &mt RMETA X │ &mt LALT  │  &lt 2 V  │  &kp B  │   │   &kp N   │ &lt 2 M  │ &mt RALT COMMA │ &mt LMETA DOT │ &mt RCTRL FSLH │  &mo 1   │
//    └─────────┴─────────────┴─────────────┼───────────┼───────────┼─────────┤   ├───────────┼──────────┼────────────────┼───────────────┴────────────────┴──────────┘
//                                          │ &kp LSHFT │ &kp SPACE │ &kp RET │   │ &kp LMETA │ &kp BSPC │   &kp RSHIFT   │                                            
//                                          └───────────┴───────────┴─────────┘   └───────────┴──────────┴────────────────┘                                            
  &kp TAB   &kp Q         &kp W         &kp E       &kp R       &kp T         &kp Y       &kp U      &kp I            &kp O           &kp P            &kp BSPC
  &kp ESC   &kp A         &kp S         &kp D       &kp F       &kp G         &kp H       &kp J      &kp K            &kp L           &kp SEMI         &kp SQT 
  &mo 1     &mt LCTRL Z   &mt RMETA X   &mt LALT    &lt 2 V     &kp B         &kp N       &lt 2 M    &mt RALT COMMA   &mt LMETA DOT   &mt RCTRL FSLH   &mo 1   
                                        &kp LSHFT   &kp SPACE   &kp RET       &kp LMETA   &kp BSPC   &kp RSHIFT                                                
                        >;
                };
raise_layer {
                       bindings = <
//    ┌────────┬────────┬────────┬──────────┬──────────┬────────┐   ┌────────┬──────────┬──────────┬──────────────┬──────────────┬────────┐
//    │ &none  │ &none  │ &none  │ &kp LBRC │ &kp RBRC │ &none  │   │ &none  │ &kp LBKT │ &kp RBKT │ &kp KP_MINUS │ &kp KP_EQUAL │ &none  │
//    ├────────┼────────┼────────┼──────────┼──────────┼────────┤   ├────────┼──────────┼──────────┼──────────────┼──────────────┼────────┤
//    │ &none  │ &kp N1 │ &kp N2 │  &kp N3  │  &kp N4  │ &kp N5 │   │ &kp N6 │  &kp N7  │  &kp N8  │    &kp N9    │    &kp N0    │ &none  │
//    ├────────┼────────┼────────┼──────────┼──────────┼────────┤   ├────────┼──────────┼──────────┼──────────────┼──────────────┼────────┤
//    │ &trans │ &trans │ &trans │  &trans  │  &trans  │ &trans │   │ &trans │  &trans  │  &trans  │    &trans    │    &trans    │ &trans │
//    └────────┴────────┴────────┼──────────┼──────────┼────────┤   ├────────┼──────────┼──────────┼──────────────┴──────────────┴────────┘
//                               │  &trans  │  &trans  │ &trans │   │ &trans │  &trans  │  &trans  │                                       
//                               └──────────┴──────────┴────────┘   └────────┴──────────┴──────────┘                                       
  &none    &none    &none    &kp LBRC   &kp RBRC   &none        &none    &kp LBKT   &kp RBKT   &kp KP_MINUS   &kp KP_EQUAL   &none 
  &none    &kp N1   &kp N2   &kp N3     &kp N4     &kp N5       &kp N6   &kp N7     &kp N8     &kp N9         &kp N0         &none 
  &trans   &trans   &trans   &trans     &trans     &trans       &trans   &trans     &trans     &trans         &trans         &trans
                             &trans     &trans     &trans       &trans   &trans     &trans                                         
                        >;
                };

                lower_layer {
                       bindings = <
//    ┌───────┬───────┬───────┬────────┬────────┬────────┐   ┌──────────┬──────────┬────────┬───────────┬───────┬───────┐
//    │ &none │ &none │ &none │ &none  │ &none  │ &none  │   │  &none   │  &none   │ &none  │   &none   │ &none │ &none │
//    ├───────┼───────┼───────┼────────┼────────┼────────┤   ├──────────┼──────────┼────────┼───────────┼───────┼───────┤
//    │ &none │ &none │ &none │ &none  │ &none  │ &none  │   │ &kp LEFT │ &kp DOWN │ &kp UP │ &kp RIGHT │ &none │ &none │
//    ├───────┼───────┼───────┼────────┼────────┼────────┤   ├──────────┼──────────┼────────┼───────────┼───────┼───────┤
//    │ &none │ &none │ &none │ &none  │ &none  │ &none  │   │  &none   │  &none   │ &none  │   &none   │ &none │ &none │
//    └───────┴───────┴───────┼────────┼────────┼────────┤   ├──────────┼──────────┼────────┼───────────┴───────┴───────┘
//                            │ &trans │ &trans │ &trans │   │  &trans  │  &trans  │ &trans │                            
//                            └────────┴────────┴────────┘   └──────────┴──────────┴────────┘                            
  &none   &none   &none   &none    &none    &none        &none      &none      &none    &none       &none   &none
  &none   &none   &none   &none    &none    &none        &kp LEFT   &kp DOWN   &kp UP   &kp RIGHT   &none   &none
  &none   &none   &none   &none    &none    &none        &none      &none      &none    &none       &none   &none
                          &trans   &trans   &trans       &trans     &trans     &trans                            
                        >;
                };

        };
};
