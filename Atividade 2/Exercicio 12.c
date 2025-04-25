#include <stdio.h>
#define PI 3.141592

int main() {
    system("cls"); //limpa a tela
    float altura, raio, volume;

    // entrada de dados
    printf("Digite a altura do cilindro: ");
    scanf("%f", &altura); // Lê a altura

    printf("Digite o raio da base do cilindro: ");
    scanf("%f", &raio); // Lê o raio

    // processamento (cálculo dos dados)
    volume = PI * (raio * raio) * altura; // V = π * r² * h

    // saida de dados
    printf("O volume do cilindro eh: %.6f\n", volume);

    return 0;
}