#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  HSV_0_0_255,
  HSV_172_255_255,
  HSV_86_255_128,
  HSV_27_255_255,
  HSV_215_255_128,
  HSV_0_255_255,
  HSV_0_0_0,
  HSV_43_255_255,
  HSV_83_255_255,
  HSV_123_255_255,
  HSV_145_255_255,
  HSV_222_255_255,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           LT(4,KC_ESCAPE),                                LT(4,KC_ESCAPE),KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_EQUAL,       
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_EQUAL,                                       KC_MINUS,       KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLASH,      
    KC_CAPSLOCK,    LT(1,KC_A),     LT(2,KC_S),     LCTL_T(KC_D),   LSFT_T(KC_K),   KC_G,           KC_BSPACE,                                                                      KC_BSPACE,      RSFT_T(KC_H),   RCTL_T(KC_D),   KC_K,           LT(2,KC_L),     LT(1,KC_SCOLON),KC_QUOTE,       
    LSFT_T(KC_ENTER),LCTL_T(KC_Z),   KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         RCTL_T(KC_SLASH),RSFT_T(KC_ENTER),
    TG(3),          LCTL_T(KC_NO),  KC_LALT,        KC_AUDIO_VOL_DOWN,LGUI_T(KC_ENTER),MT(MOD_HYPR, KC_ESCAPE),                                                                                                MT(MOD_MEH, KC_ESCAPE),RGUI_T(KC_ENTER),KC_AUDIO_VOL_UP,RALT_T(KC_LBRACKET),RCTL_T(KC_RBRACKET),TG(1),          
    KC_SPACE,       KC_ENTER,       KC_BRIGHTNESS_UP,                KC_BRIGHTNESS_DOWN,KC_ENTER,       KC_SPACE
  ),
  [1] = LAYOUT_moonlander(
    KC_TILD,        KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_LPRN,        KC_RPRN,        KC_UNDS,        
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_LCBR,        KC_RCBR,        KC_ASTR,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_AMPR,        KC_7,           KC_8,           KC_9,           KC_TRANSPARENT, KC_PIPE,        
    KC_TRANSPARENT, KC_HASH,        KC_DLR,         KC_LPRN,        KC_RPRN,        KC_EQUAL,       KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_MINUS,       KC_4,           KC_5,           KC_6,           KC_ASTR,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_PERC,        KC_CIRC,        KC_LBRACKET,    KC_RBRACKET,    KC_PLUS,                                        KC_UNDS,        KC_1,           KC_2,           KC_3,           KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_0,           KC_DOT,         KC_COMMA,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_DELETE,                                      KC_DELETE,      KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_LEFT,  KC_MS_UP,       KC_MS_WH_RIGHT, KC_MS_WH_DOWN,  KC_PGUP,                                        KC_PGDOWN,      KC_MEDIA_PREV_TRACK,KC_MEDIA_STOP,  KC_MEDIA_PLAY_PAUSE,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT, KC_F12,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_WH_UP,    KC_HOME,                                                                        KC_END,         KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    WEBUSB_PAIR,    KC_TRANSPARENT, KC_MS_BTN1,     KC_MS_BTN3,     KC_MS_BTN2,     KC_AUDIO_MUTE,                                                                                                  KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_ACCEL0,   KC_MS_ACCEL1,   KC_MS_ACCEL2,   RESET,          
    KC_TRANSPARENT, KC_AUDIO_VOL_UP,KC_BRIGHTNESS_UP,                KC_BRIGHTNESS_DOWN,KC_AUDIO_VOL_DOWN,KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_EQUAL,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_ESCAPE,                                      KC_DELETE,      KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TRANSPARENT,                                 TO(0),          KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLASH,      
    KC_CAPSLOCK,    KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_F6,                                                                          KC_F9,          KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      KC_QUOTE,       
    KC_LSHIFT,      KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RSHIFT,      
    KC_TRANSPARENT, LCTL_T(KC_LEFT),LALT_T(KC_RIGHT),KC_BSPACE,      LGUI_T(KC_ENTER),KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, RGUI_T(KC_ENTER),KC_BSPACE,      RALT_T(KC_UP),  RCTL_T(KC_DOWN),KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    MU_TOG,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    MU_MOD,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    AU_TOG,         HSV_0_0_255,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, HSV_0_0_0,      KC_TRANSPARENT, 
    KC_TRANSPARENT, HSV_172_255_255,HSV_86_255_128, HSV_27_255_255, HSV_215_255_128,HSV_0_255_255,                                  HSV_43_255_255, HSV_83_255_255, HSV_123_255_255,HSV_145_255_255,HSV_222_255_255,KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RGB_MOD,                                                                                                        RGB_TOG,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    RGB_VAI,        RGB_VAD,        TOGGLE_LAYER_COLOR,                RGB_SLD,        RGB_HUD,        RGB_HUI
  ),
  [5] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [1] = { {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {0,0,255}, {0,0,255}, {0,0,255}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243}, {0,0,255}, {0,0,255}, {0,0,255}, {138,34,243}, {138,34,243}, {138,34,243}, {138,34,243} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,0}, {141,255,233}, {141,255,233}, {0,0,0}, {141,255,233}, {0,0,0}, {141,255,233}, {141,255,233}, {0,0,0}, {141,255,233}, {0,0,0}, {141,255,233}, {141,255,233}, {0,0,0}, {141,255,233}, {0,0,0}, {141,255,233}, {141,255,233}, {0,0,0}, {0,0,0}, {105,255,255}, {105,255,255}, {0,0,0}, {154,255,255}, {154,255,255}, {154,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {141,255,233}, {0,0,0}, {243,222,234}, {105,255,255}, {0,0,0}, {141,255,233}, {0,0,0}, {243,222,234}, {105,255,255}, {0,0,0}, {141,255,233}, {0,0,0}, {243,222,234}, {105,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {243,222,234}, {105,255,255}, {0,0,0}, {0,0,0}, {105,255,255}, {105,255,255}, {0,0,0}, {154,255,255}, {154,255,255}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,183,238}, {0,183,238}, {0,183,238}, {43,50,255}, {43,50,255}, {43,50,255}, {43,50,255}, {43,50,255}, {180,255,233}, {43,50,255}, {43,50,255}, {43,50,255}, {43,50,255}, {85,203,158}, {43,50,255}, {43,50,255}, {43,50,255}, {43,50,255}, {31,255,255}, {43,50,255}, {43,50,255}, {43,50,255}, {43,50,255}, {205,255,118}, {43,50,255}, {43,50,255}, {43,50,255}, {43,50,255}, {14,255,255}, {43,50,255}, {43,50,255}, {43,50,255}, {31,255,255}, {31,255,255}, {31,255,255}, {31,255,255}, {43,50,255}, {43,50,255}, {43,50,255}, {43,50,255}, {43,50,255}, {43,50,255}, {43,50,255}, {0,0,11}, {250,159,255}, {43,50,255}, {43,50,255}, {43,50,255}, {43,50,255}, {141,255,233}, {43,50,255}, {43,50,255}, {43,50,255}, {43,50,255}, {134,255,213}, {43,50,255}, {43,50,255}, {43,50,255}, {43,50,255}, {105,255,255}, {43,50,255}, {43,50,255}, {43,50,255}, {43,50,255}, {32,176,255}, {43,50,255}, {43,50,255}, {43,50,255}, {31,255,255}, {31,255,255}, {31,255,255}, {31,255,255} },

    [5] = { {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255}, {10,255,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (g_suspend_state || keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case HSV_0_0_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(0,0,255);
      }
      return false;
    case HSV_172_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(172,255,255);
      }
      return false;
    case HSV_86_255_128:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(86,255,128);
      }
      return false;
    case HSV_27_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(27,255,255);
      }
      return false;
    case HSV_215_255_128:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(215,255,128);
      }
      return false;
    case HSV_0_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(0,255,255);
      }
      return false;
    case HSV_0_0_0:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(0,0,0);
      }
      return false;
    case HSV_43_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(43,255,255);
      }
      return false;
    case HSV_83_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(83,255,255);
      }
      return false;
    case HSV_123_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(123,255,255);
      }
      return false;
    case HSV_145_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(145,255,255);
      }
      return false;
    case HSV_222_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(222,255,255);
      }
      return false;
  }
  return true;
}
