#include <FastLED.h>
#include <IRremote.hpp>

#define DATA_PIN 7
#define NUM_LEDS 60
#define COLOR_ORDER GRB
#define CHIPSET WS2812
#define VOLTS 5
#define MAX_AMPS 500
#define IR_RECEIVE_PIN 6
#define P1 0xEE11FB04
#define P2 0xED12FB04
#define P3 0xEC13FB04
#define P4 0xF708FB04

CRGB leds[NUM_LEDS];

void setup () {
  FastLED.addLeds<CHIPSET, DATA_PIN, COLOR_ORDER> (leds, NUM_LEDS);
  FastLED.setMaxPowerInVoltsAndMilliamps (VOLTS, MAX_AMPS);
  FastLED.clear();
  FastLED.show();
  IrReceiver.begin(IR_RECEIVE_PIN);
}
void loop () {
  if (IrReceiver.decode()) {
    if (IrReceiver.decodedIRData.decodedRawData == P1) {
    leds [0] = CRGB (255, 30, 0);
    leds [1] = CRGB (255, 30, 0);
    leds [2] = CRGB (255, 30, 0);
    leds [3] = CRGB (255, 30, 0);
    leds [4] = CRGB (255, 30, 0);
    leds [5] = CRGB (255, 30, 0);
    leds [6] = CRGB (255, 30, 0);
    leds [7] = CRGB (255, 30, 0);
    leds [8] = CRGB (255, 30, 0);
    leds [9] = CRGB (255, 30, 0);
    leds [10] = CRGB (255, 30, 0);
    leds [11] = CRGB (255, 30, 0);
    leds [12] = CRGB (255, 30, 0);
    leds [13] = CRGB (255, 30, 0);
    leds [14] = CRGB (255, 30, 0);
    leds [15] = CRGB (255, 30, 0);
    leds [16] = CRGB (255, 30, 0);
    leds [17] = CRGB (255, 30, 0);
    leds [18] = CRGB (255, 30, 0);
    leds [19] = CRGB (255, 30, 0);
    leds [20] = CRGB (255, 30, 0);
    leds [21] = CRGB (255, 30, 0);
    leds [22] = CRGB (255, 30, 0);
    leds [23] = CRGB (255, 30, 0);
    leds [24] = CRGB (255, 30, 0);
    leds [25] = CRGB (255, 30, 0);
    leds [26] = CRGB (255, 30, 0);
    leds [27] = CRGB (255, 30, 0);
    leds [28] = CRGB (255, 30, 0);
    leds [29] = CRGB (255, 30, 0);
    leds [30] = CRGB (255, 30, 0);
    FastLED.show ();
    delay (500);
    }
    else if (IrReceiver.decodedIRData.decodedRawData == P2) {
    leds [32] = CRGB (255, 7, 0);
    leds [33] = CRGB (255, 7, 0);
    leds [34] = CRGB (255, 7, 0);
    leds [35] = CRGB (255, 7, 0);
    leds [36] = CRGB (255, 7, 0);
    leds [37] = CRGB (255, 7, 0);
    leds [38] = CRGB (255, 7, 0);
    leds [39] = CRGB (255, 7, 0);
    leds [40] = CRGB (255, 7, 0);
    leds [41] = CRGB (255, 7, 0);
    leds [42] = CRGB (255, 7, 0);
    leds [43] = CRGB (255, 7, 0);
    leds [44] = CRGB (255, 7, 0);
    leds [45] = CRGB (255, 7, 0);
    leds [46] = CRGB (255, 7, 0);
    leds [47] = CRGB (255, 7, 0);
    leds [48] = CRGB (255, 7, 0);
    leds [49] = CRGB (255, 7, 0);
    leds [50] = CRGB (255, 7, 0);
    FastLED.show ();
    delay (500);
    }
    else if (IrReceiver.decodedIRData.decodedRawData == P3) {
    leds [55] = CRGB (255, 0, 0);
    leds [56] = CRGB (255, 0, 0);
    leds [57] = CRGB (255, 0, 0);
    leds [58] = CRGB (255, 0, 0);
    FastLED.show ();
    delay (500);
    }
    else if (IrReceiver.decodedIRData.decodedRawData == P4) {
    FastLED.show ();
    delay (50);
    }
    IrReceiver.resume();
  }
}
