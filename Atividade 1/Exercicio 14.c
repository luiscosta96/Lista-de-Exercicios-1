#include <stdio.h>

int main() {
    system("cls"); //limpa a tela
    char char1, char2, char3;

    printf("Digite tres caracteres: ");
    scanf(" %c %c %c", &char1, &char2, &char3); // Lê três caracteres

    printf("%c\n%c\n%c\n", char1, char2, char3);

    return 0; 
}