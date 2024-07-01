#include "Arduino_LED_Matrix.h"
#include "Test01.h"

ArduinoLEDMatrix matrix;

void setup() {
  Serial.begin(115200);
  matrix.loadSequence(Test01);
  matrix.begin();
  matrix.play(true);

}

void loop() {
  delay(500);
  Serial.println(millis());

}
