#include <stdio.h>

int main() {
    system("cls"); //limpa a tela
    char caractere;
    int inteiro;
    float flutuante;

    printf("Digite um caractere: ");
    scanf(" %c", &caractere); 

    printf("Digite um numero inteiro: ");
    scanf("%d", &inteiro); 

    printf("Digite um numero decimal: ");
    scanf("%f", &flutuante); 

    // Imprime as variáveis separadas por espaços
    printf("Separadas por espacos: %c %d %.2f\n", caractere, inteiro, flutuante);

    // Imprime as variáveis separadas por uma tabulação horizontal
    printf("Separadas por tabulacao: %c\t%d\t%.2f\n", caractere, inteiro, flutuante);

    // Imprime as variáveis, uma em cada linha
    printf("Uma em cada linha:\n%c\n%d\n%.2f\n", caractere, inteiro, flutuante);

    return 0; 
}