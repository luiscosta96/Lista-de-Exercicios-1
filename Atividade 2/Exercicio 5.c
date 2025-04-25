#include <stdio.h>

int main() {
    system("cls"); //limpa a tela
    int idade, ano, nasc;

    // entrada de dados
    printf("Digite o ano atual: ");
    scanf("%d", &ano); 
    printf("Digite sua idade: ");
    scanf("%d", &idade); 

    // processamento (cálculo dos dados)
    nasc = ano - idade;

    // saida de dados
    printf("Voce nasceu em %d", nasc);

    return 0; 
}