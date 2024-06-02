#ifndef DEBUG_H
#define DEBUG_H

#include <Arduino.h>

/* --------- DEBUGGING MODES --------- */

// Function prototype for debugf (declared even if DEBUG is not defined)
void debugf(const char* format, ...);

// Function prototype for debug_init (declared even if DEBUG is not defined)
void debug_init(int baudrate);

#ifdef DEBUG

// Function definition for debugf when DEBUG is defined
void debugf(const char* format, ...) {
  Serial.printf(format, __VA_ARGS__);
}

// Function definition for debug_init when DEBUG is defined
void debug_init(int baudrate) {
  Serial.begin(baudrate);
}

#endif // DEBUG

#endif // DEBUG_H
