#include <stdio.h>

int main() {
    system("cls"); //limpa a tela
    float velocidade_kmh, velocidade_ms;

    // entrada de dados
    printf("Digite a velocidade em km/h: ");
    scanf("%f", &velocidade_kmh); // Lê a velocidade em km/h

    // processamento (cálculo dos dados)
    velocidade_ms = velocidade_kmh / 3.6; // M = K / 3.6

    // saida de dados
    printf("A velocidade em m/s eh: %.2f\n", velocidade_ms);

    return 0;
}