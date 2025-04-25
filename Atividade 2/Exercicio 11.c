#include <stdio.h>
#define PI 3.141592

int main() {
    system("cls"); //limpa a tela
    float raio, area;

    // entrada de dados
    printf("Digite o valor do raio do circulo: ");
    scanf("%f", &raio); // Lê o valor do raio

    // processamento (cálculo dos dados)
    area = PI * (raio * raio); // A = π * raio²

    // saida de dados
    printf("A area do circulo eh: %.6f\n", area);

    return 0;
}