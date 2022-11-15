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
    FastLED.show ();
    delay (500);
    }
    else if (IrReceiver.decodedIRData.decodedRawData == P2) {
    leds [1] = CRGB (255, 30, 0);
    FastLED.show ();
    delay (500);
    }
    else if (IrReceiver.decodedIRData.decodedRawData == P3) {
    leds [2] = CRGB (255, 30, 0);
    FastLED.show ();
    delay (500);
    }
    else if (IrReceiver.decodedIRData.decodedRawData == P4) {
    leds [0] = CRGB (0, 0, 0);
    FastLED.show ();
    delay (50);
    leds [1] = CRGB (0, 0, 0);
    FastLED.show ();
    delay (50);
    leds [2] = CRGB (0, 0, 0);
    FastLED.show ();
    delay (50);
    }
    IrReceiver.resume();
  }
}
