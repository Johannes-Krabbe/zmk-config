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
//    ┌─────────┬───────┬─────────────┬───────────┬───────────┬─────────┐   ┌───────────┬──────────┬────────────┬─────────┬──────────┬──────────┐
//    │ &kp TAB │ &kp Q │    &kp W    │   &kp E   │   &kp R   │  &kp T  │   │   &kp Y   │  &kp U   │   &kp I    │  &kp O  │  &kp P   │ &kp BSPC │
//    ├─────────┼───────┼─────────────┼───────────┼───────────┼─────────┤   ├───────────┼──────────┼────────────┼─────────┼──────────┼──────────┤
//    │ &kp ESC │ &kp A │    &kp S    │   &kp D   │   &kp F   │  &kp G  │   │   &kp H   │  &kp J   │   &kp K    │  &kp L  │ &kp SEMI │ &kp SQT  │
//    ├─────────┼───────┼─────────────┼───────────┼───────────┼─────────┤   ├───────────┼──────────┼────────────┼─────────┼──────────┼──────────┤
//    │  &mo 1  │ &kp Z │ &mp RMETA X │   &kp C   │   &kp V   │  &mt B  │   │   &kp N   │  &kp M   │ &kp COMMA  │ &kp DOT │ &kp FSLH │  &mo 1   │
//    └─────────┴───────┴─────────────┼───────────┼───────────┼─────────┤   ├───────────┼──────────┼────────────┼─────────┴──────────┴──────────┘
//                                    │ &kp LSHFT │ &kp SPACE │ &kp RET │   │ &kp LMETA │ &kp BSPC │ &kp RSHIFT │                                
//                                    └───────────┴───────────┴─────────┘   └───────────┴──────────┴────────────┘                                
  &kp TAB   &kp Q   &kp W         &kp E       &kp R       &kp T         &kp Y       &kp U      &kp I        &kp O     &kp P      &kp BSPC
  &kp ESC   &kp A   &kp S         &kp D       &kp F       &kp G         &kp H       &kp J      &kp K        &kp L     &kp SEMI   &kp SQT 
  &mo 1     &kp Z   &mp RMETA X   &kp C       &kp V       &mt B         &kp N       &kp M      &kp COMMA    &kp DOT   &kp FSLH   &mo 1   
                                  &kp LSHFT   &kp SPACE   &kp RET       &kp LMETA   &kp BSPC   &kp RSHIFT                                
                        >;
                };

        };
};
