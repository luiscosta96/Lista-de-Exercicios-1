#include <stdio.h>

int main() {
    system("cls"); //limpa a tela
    float numero, fracao;

    // entrada de dados
    printf("Digite um numero real: ");
    scanf("%f", &numero); 

    // processamento (cálculo dos dados)
    fracao = numero / 5;

    // saida de dados
    printf("Quinta parte: %f\n", fracao);

    return 0; 
}