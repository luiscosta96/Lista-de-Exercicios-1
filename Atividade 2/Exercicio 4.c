#include <stdio.h>

int main() {
    system("cls"); //limpa a tela
    float n1, n2, n3, n4, media;

    // entrada de dados
    printf("Digite quatro numeros reais:\n");
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4); 

    // processamento (cálculo dos dados)
    media = (n1 + n2 + n3 + n4) / 4;

    // saida de dados
    printf("Media: %f\n", media);

    return 0; 
}