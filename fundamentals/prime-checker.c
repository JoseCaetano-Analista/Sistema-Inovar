#include <stdio.h>
#include <stdbool.h>

/**
 * Projeto: Verificador de Numeros Primos
 * Objetivo: Demonstrar uso de loops (for) e otimizacao de busca.
 */

int main() {
    int numero;
    bool ehPrimo = true;

    printf("--- Verificador de Numeros Primos ---\n");
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    if (numero <= 1) {
        ehPrimo = false;
    } else {
        // Otimizacao: testamos apenas ate a metade do numero
        for (int i = 2; i <= numero / 2; i++) {
            if (numero % i == 0) {
                ehPrimo = false;
                break;
            }
        }
    }

    if (ehPrimo) {
        printf("O numero %d e primo!\n", numero);
    } else {
        printf("O numero %d nao e primo.\n", numero);
    }

    return 0;
}
