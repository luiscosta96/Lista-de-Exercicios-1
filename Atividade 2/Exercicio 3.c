#include <stdio.h>

int main() {
    system("cls"); //limpa a tela
    int n1, n2, n3, soma;

    // entrada de dados
    printf("Digite tres numeros inteiros:\n");
    scanf("%d %d %d", &n1, &n2, &n3); 

    // processamento (cálculo dos dados)
    soma = n1 + n2 + n3;

    // saida de dados
    printf("Soma: %d\n", soma);

    return 0; 
}