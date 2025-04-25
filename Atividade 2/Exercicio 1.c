#include <stdio.h>

int main() {
    system("cls"); //limpa a tela
    int numero, antecessor, sucessor;

    // entrada de dados
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero); 

    // processamento (cálculo dos dados)
    antecessor = numero - 1;
    sucessor = numero + 1;

    // saida de dados
    printf("Antecessor: %d\n", antecessor);
    printf("Sucessor: %d\n", sucessor);

    return 0; 
}