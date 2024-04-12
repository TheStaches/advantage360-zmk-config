/*
 * helper.h
 *
 * Convenience macros simplifying ZMK's keymap configuration.
 * See https://github.com/urob/zmk-nodefree-config for documentation.
 */

#pragma once

#define ZMK_HELPER_STRINGIFY(x) #x

#define ZMK_BEHAVIOR(name, type, ...) \
    / { \
        behaviors { \
            name: name { \
                label = ZMK_HELPER_STRINGIFY(ZB_ ## name); \
                ZMK_BEHAVIOR_CORE_ ## type; \
                __VA_ARGS__ \
            }; \
        }; \
    };
