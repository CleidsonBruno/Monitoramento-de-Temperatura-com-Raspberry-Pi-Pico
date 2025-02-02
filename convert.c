#include <stdio.h>             // Biblioteca padrão para entrada e saída, utilizada para printf.
#include "pico/stdlib.h"       // Biblioteca padrão para funções básicas do Pico, como GPIO e temporização.
#include "hardware/adc.h"      // Biblioteca para controle do ADC (Conversor Analógico-Digital).

#define ADC_MAX 4095           // Valor máximo do ADC de 12 bits.
#define VOLTAGE_REF 3.3        // Tensão de referência do ADC em volts.
#define TEMP_COEFFICIENT 27.0  // Temperatura típica de operação do sensor interno do Pico.
#define TEMP_OFFSET 0.706      // Offset de tensão em 27°C.
#define TEMP_SLOPE 0.001721    // Variação de tensão por grau Celsius.

int main() {
    stdio_init_all();
    adc_init();
    adc_gpio_init(26);  // Configura o pino GPIO 26 para entrada ADC.
    adc_select_input(0); // Seleciona o canal 0 do ADC.

    while (true) {
        uint16_t adc_value = adc_read();
        float voltage = adc_value * (VOLTAGE_REF / ADC_MAX); // Converte leitura ADC para tensão.
        float temperature_c = (TEMP_COEFFICIENT - (voltage - TEMP_OFFSET) / TEMP_SLOPE); // Converte para Celsius.
        float temperature_f = (temperature_c * 9 / 5) + 32; // Converte para Fahrenheit.

        printf("Temperatura: %.2f°F\n", temperature_f);
        sleep_ms(500);
    }

    return 0;
}
