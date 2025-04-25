#include <stdio.h>
#define PI 3.141592

int main() {
    system("cls"); //limpa a tela
    float graus, radianos;

    // entrada de dados
    printf("Digite o angulo em graus: ");
    scanf("%f", &graus); // Lê o ângulo em graus

    // processamento (cálculo dos dados)
    radianos = graus * (PI / 180);

    // saida de dados
    printf("O angulo em radianos eh %.6f\n", radianos);

    return 0;
}