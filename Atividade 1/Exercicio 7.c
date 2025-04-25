#include <stdio.h>

int main() {
    char caractere; 

    printf("Por favor, insira um caractere: ");
    scanf(" %c", &caractere); 

    printf("O valor inteiro do caractere '%c' e: %d\n", caractere, (int)caractere);

    system("pause");
    return 0;
    
}