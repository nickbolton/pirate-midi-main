#include <Arduino.h>
#include "PetalInteroperabilityImpl.h"

unsigned long lastTime = 0l;
unsigned long loopCount = 0;

PETAL_CREATE_INSTANCE;

void setup() {
  Serial.begin(115200);
  delay(2000);
}

void printLoop() {
  unsigned long now = millis();
  if (now - lastTime >= 1000) {
    Serial.printf("LOOP %u!!\n", loopCount);
    lastTime = now;
    loopCount++;
  }
}

void loop() {
  printLoop();
  PETAL_INTEROP->processLoop();
}

void midi_SendPetalSysEx(const uint8_t* data, size_t size) {
}

void midi_SendPetalControlChange(uint8_t channel, uint8_t number, uint8_t value) {

}

void midi_SendPetalProgramChange(uint8_t channel, uint8_t number) {

}

void midi_AssignPetalControlChangeCallback(void (callback)(uint8_t channel, uint8_t number, uint8_t value)) {
}

void midi_AssignPetalProgramChangeCallback(void (callback)(uint8_t channel, uint8_t number)) {

}

void midi_AssignPetalSysemExclusiveCallback(void (callback)(uint8_t* array, unsigned size)) {

}

