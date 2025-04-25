#include <stdio.h>

int main() {
    system("cls"); //limpa a tela
    int numero, complemento;

    // entrada de dados
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero); // Lê o número inteiro

    // processamento (cálculo dos dados)
    complemento = ~numero; // Inverte todos os bits do número

    // saida de dados
    printf("O complemento bit a bit de %d eh: %d\n", numero, complemento);

    return 0;
}