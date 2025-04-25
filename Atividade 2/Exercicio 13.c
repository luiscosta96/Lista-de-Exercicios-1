#include <stdio.h>
#include <math.h> 

int main() {
    system("cls"); //limpa a tela
    float a, b, h;

    // entrada de dados
    printf("Digite o valor do cateto a: ");
    scanf("%f", &a); // Lê o valor do cateto a

    printf("Digite o valor do cateto b: ");
    scanf("%f", &b); // Lê o valor do cateto b

    // processamento (cálculo dos dados)
    h = sqrt((a * a) + (b * b)); // h = √(a² + b²)

    // saida de dados
    printf("A hipotenusa eh: %.2f\n", h);

    return 0;
}