#include <ThingerESP32.h>
#include <DHT.h>

// Configurações do WiFi
#define USER_SSID "JAGUSKI"
#define USER_PASSWORD "15072004"

// Configurações do Thinger.io
#define THINGER_USERNAME "patrickjaguski"
#define THINGER_DEVICE_ID "ESP32_Monitor"
#define THINGER_DEVICE_CREDENTIAL "ybNSF@eqrpbsv_J&"

// Configuração do sensor DHT22
#define DHTPIN 4
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);

// Configuração do relé
#define RELAY_PIN 5

// Configuração do Thinger.io
ThingerESP32 thing(THINGER_USERNAME, THINGER_DEVICE_ID, THINGER_DEVICE_CREDENTIAL);

void setup() {
    Serial.begin(115200);
    dht.begin();
    pinMode(RELAY_PIN, OUTPUT);

    // Configuração do WiFi no Thinger.io
    thing.add_wifi(USER_SSID, USER_PASSWORD);

    // Adicionar recurso para monitorar temperatura
    thing["temperature"] >> [](pson &out) {
        out = dht.readTemperature();
    };

    // Adicionar recurso para monitorar umidade
    thing["humidity"] >> [](pson &out) {
        out = dht.readHumidity();
    };

    // Adicionar recurso para controlar o relé
    thing["relay"] << [](pson &in) {
        digitalWrite(RELAY_PIN, in ? HIGH : LOW);
    };
}

void loop() {
    thing.handle();
}
