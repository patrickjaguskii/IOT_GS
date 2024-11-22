#ifndef CONFIG_H
#define CONFIG_H

// Configurações do sensor de energia
#define ADC_CHANNEL ADC1_CHANNEL_0  // Canal 0 do ADC1
#define ADC_WIDTH   ADC_WIDTH_BIT_12 // Resolução de 12 bits
#define ADC_ATTEN   ADC_ATTEN_DB_12 // Atenuação do ADC (0-3.3V)

// Configurações do sensor DHT
#define DHTPIN 25      // Pino para o sensor DHT
#define DHTTYPE DHT22  // Tipo do sensor (DHT11 ou DHT22)

// Configurações do relé
#define RELAY_PIN 26  // Pino do relé

// Intervalos de medição
#define MEASUREMENT_INTERVAL_MS 1000 // Intervalo entre medições (ms)

// Fatores de calibração
#define VOLTAGE_DIVIDER_RATIO 10.0
#define CURRENT_SENSOR_FACTOR 0.066

// Thresholds
#define INEFFICIENCY_THRESHOLD 0.8 // Eficiência mínima aceitável

#endif // CONFIG_H
