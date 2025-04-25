#include <stdio.h>

int main() {
    system("cls"); //limpa a tela
    char caractere;

    printf("Digite um caractere: ");
    scanf(" %c", &caractere); 

    printf("Caractere: \"%c\"\n", caractere);

    return 0; 
}