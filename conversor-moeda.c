#include <stdio.h>

int main() {
    float reais, dolares, cotacao;
    printf("Digite o valor em Reais (BRL): ");
    scanf("%f", &reais);
    printf("Digite a cotacao do Dolar (USD): ");
    scanf("%f", &cotacao);
    dolares = reais / cotacao;
    printf("R$ %.2f equivale a $ %.2f\n", reais, dolares);
    return 0;
}
