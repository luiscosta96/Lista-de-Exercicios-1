#include <stdio.h>

int main() {
    system("cls"); //limpa a tela
    float primeiro_ganhador, segundo_ganhador, terceiro_ganhador,total = 780000.00;

    // processamento (cálculo dos dados)
    primeiro_ganhador = total * 0.46; // 46% do total
    segundo_ganhador = total * 0.32;  // 32% do total
    terceiro_ganhador = total * 0.22; // O restante (22%)

    // saida de dados
    printf("Primeiro ganhador: R$ %.2f\n", primeiro_ganhador);
    printf("Segundo ganhador: R$ %.2f\n", segundo_ganhador);
    printf("Terceiro ganhador: R$ %.2f\n", terceiro_ganhador);

    return 0;
}