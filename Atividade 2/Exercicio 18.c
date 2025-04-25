#include <stdio.h>

int main() {
    system("cls"); //limpa a tela
    int numero1, numero2;

    // entrada de dados
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &numero1); // Lê o primeiro número inteiro

    printf("Digite o segundo numero inteiro (numero de deslocamentos): ");
    scanf("%d", &numero2); // Lê o segundo número inteiro

    // processamento (cálculo dos dados)
    int deslocamento_esquerda = numero1 << numero2; // Desloca à esquerda
    int deslocamento_direita = numero1 >> numero2;  // Desloca à direita

    // saida de dados
    printf("Deslocamento a esquerda de %d por %d: %d\n", numero1, numero2, deslocamento_esquerda);
    printf("Deslocamento a direita de %d por %d: %d\n", numero1, numero2, deslocamento_direita);

    return 0;
}