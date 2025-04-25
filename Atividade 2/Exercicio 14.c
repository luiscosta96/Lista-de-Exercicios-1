#include <stdio.h>

int main() {
    system("cls"); //limpa a tela
    char letra_maiuscula, letra_minuscula;

    // entrada de dados
    printf("Digite uma letra maiuscula: ");
    scanf(" %c", &letra_maiuscula); // Lê a letra maiúscula

    // Verifica se a letra está entre 'A' e 'Z'
    if (letra_maiuscula >= 'A' && letra_maiuscula <= 'Z') {
        // processamento (cálculo dos dados)
        letra_minuscula = letra_maiuscula + 32; // ou letra_minuscula = letra_maiuscula | 32;

        // saida de dados
        printf("A letra minuscula eh: %c\n", letra_minuscula);
    } else {
        printf("Por favor, insira uma letra maiuscula valida.\n");
    }

    return 0; 
}