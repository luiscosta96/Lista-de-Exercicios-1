#include <stdio.h>

int main() {
    system("cls"); //limpa a tela
    float real,dolar,cotacao;

    // entrada de dados
    printf("Digite o valor em real: ");
    scanf("%f", &real); 
    printf("Digite a cotacao em dolar: ");
    scanf("%f", &cotacao); 

    // processamento (cálculo dos dados)
    dolar=real/cotacao;

    // saida de dados
    printf("\nValor em dolar: %f\n\n", dolar);

    return 0; 
}