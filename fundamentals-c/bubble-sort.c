#include <stdio.h>

/**
 * Projeto: Ordenacao de Dados (Bubble Sort)
 * Objetivo: Implementar um algoritmo classico de ordenacao.
 */

void ordenar(int vet[], int tam) {
    int i, j, aux;
    for (i = 0; i < tam - 1; i++) {
        for (j = 0; j < tam - i - 1; j++) {
            if (vet[j] > vet[j + 1]) {
                aux = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = aux;
            }
        }
    }
}

int main() {
    int dados[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(dados) / sizeof(dados[0]);

    printf("Lista original: 64, 34, 25, 12, 22, 11, 90\n");

    ordenar(dados, n);

    printf("Lista ordenada: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", dados[i]);
    }
    printf("\n");

    return 0;
}
