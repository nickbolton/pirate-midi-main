#pragma once
#include <Arduino.h>

#define MIDI_OUT_PIN                12
#define MIDI_IN_PIN                 10

void midi_SendPetalSysEx(const uint8_t* data, size_t size);
void midi_SendPetalControlChange(uint8_t channel, uint8_t number, uint8_t value);
void midi_SendPetalProgramChange(uint8_t channel, uint8_t number);
void midi_AssignPetalControlChangeCallback(void (callback)(uint8_t channel, uint8_t number, uint8_t value));
void midi_AssignPetalProgramChangeCallback(void (callback)(uint8_t channel, uint8_t number));
void midi_AssignPetalSysemExclusiveCallback(void (callback)(uint8_t* array, unsigned size));

