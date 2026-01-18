#include <stdio.h>

/**
 * Projeto: Conversor de Celsius para Fahrenheit
 * Objetivo: Praticar entrada/saida e operacoes matematicas.
 */

int main() {
    float celsius, fahrenheit;

    printf("--- Conversor de Temperatura ---\n");
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    // Formula de conversao
    fahrenheit = (celsius * 9 / 5) + 32;

    printf("\nResultado: %.2f graus Celsius equivalem a %.2f graus Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}
