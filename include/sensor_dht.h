#ifndef SENSOR_DHT_H
#define SENSOR_DHT_H

#include <DHT.h>
#include "config.h"

DHT dht(DHTPIN, DHTTYPE);

void init_dht() {
    dht.begin();
}

float read_temperature() {
    return dht.readTemperature();
}

float read_humidity() {
    return dht.readHumidity();
}

#endif // SENSOR_DHT_H
