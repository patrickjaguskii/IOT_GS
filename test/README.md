#include "monitoramento_energia.h"
#include <assert.h>

void test_read_voltage() {
    float voltage = read_voltage();
    assert(voltage >= 0 && voltage <= 3.3); // Verifique se a voltagem está dentro do intervalo esperado
}

void test_read_current() {
    float current = read_current();
    assert(current >= 0); // Verifique se a corrente é positiva
}

void test_all() {
    test_read_voltage();
    test_read_current();
}

void setup() {
    test_all();
    Serial.println("Testes concluídos com sucesso.");
}

void loop() {
    // Não é necessário loop para testes
}
