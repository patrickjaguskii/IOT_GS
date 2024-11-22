#ifndef RELAY_H
#define RELAY_H

#include <Arduino.h>
#include "config.h"

void init_relay() {
    pinMode(RELAY_PIN, OUTPUT);
    digitalWrite(RELAY_PIN, HIGH); // Relé desligado inicialmente
}

void set_relay_state(bool state) {
    digitalWrite(RELAY_PIN, state ? LOW : HIGH); // Liga/desliga o relé
}

#endif // RELAY_H
