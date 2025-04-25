#include <stdio.h>

int main() {
    system("cls"); //limpa a tela
    int numero, multiplicacao, divisao;

    // entrada de dados
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero); // Lê o número inteiro

    // processamento (cálculo dos dados)
    multiplicacao = numero << 1; // Desloca os bits para a esquerda (multiplica por 2)
    divisao = numero >> 1; // Desloca os bits para a direita (divide por 2)

    // saida de dados
    printf("%d * 2: %d\n", numero, multiplicacao);
    printf("%d / 2: %d\n", numero, divisao);

    return 0;
}