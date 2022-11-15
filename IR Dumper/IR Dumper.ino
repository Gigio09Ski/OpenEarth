#include <IRremote.hpp>

#define IR_RECEIVE_PIN 6

void setup() {
  Serial.begin(9600);
  IrReceiver.begin(IR_RECEIVE_PIN);
}

void loop() {
  if (IrReceiver.decode()) {
   IrReceiver.printIRResultShort(&Serial);
   IrReceiver.resume();
  }
}
 

  