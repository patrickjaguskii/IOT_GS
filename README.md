# Sistema IoT para Otimização de Consumo de Energia

## Objetivo

Desenvolver uma plataforma IoT para monitoramento e otimização do consumo de energia de dispositivos inteligentes em tempo real, com foco na eficiência energética e na identificação de ineficiências. A solução integra sensores de corrente e voltagem para medir o consumo de energia, calcula a eficiência do dispositivo e envia esses dados para um painel de controle interativo.

## Funcionalidades

- **Leitura em tempo real**: Monitora o consumo de energia de dispositivos inteligentes.
- **Cálculo de eficiência**: Analisa a eficiência do consumo de energia e identifica dispositivos ineficientes.
- **Previsão de consumo**: Calcula a energia consumida e a eficiência ao longo do tempo.
- **Painel de Controle**: Um painel interativo exibe os dados de consumo e eficiência energética, permitindo ações em tempo real.
  
## Como funciona

### Sensores e Atuadores

O sistema utiliza sensores de corrente e voltagem para medir o consumo de energia. A partir desses dados, é calculada a potência e a eficiência do consumo. Caso a eficiência caia abaixo de um limiar (80%), o dispositivo é marcado como ineficiente.

### Comunicação e Dashboard

Os dados de consumo e eficiência são transmitidos para um servidor Flask que, por sua vez, envia para um painel de controle em tempo real. A comunicação entre os dispositivos e o servidor é realizada via MQTT.

## Configuração

1. Clone este repositório.
2. Use o Wokwi para simular o sistema ou utilize um ESP32 real com a plataforma PlatformIO.
3. Acesse o painel através da URL `http://<ip_do_servidor>:5000/data` para visualizar os dados em tempo real.

## Tecnologias Utilizadas

- **ESP32**: Microcontrolador para coletar dados dos sensores e controlar atuadores.
- **Flask**: Framework Python para criar uma API e servir os dados.
- **MQTT**: Protocolo de comunicação entre os dispositivos e o servidor.
