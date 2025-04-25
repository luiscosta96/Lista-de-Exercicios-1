#include <stdio.h>

int main() {
    system("cls"); //limpa a tela
    float celsius, fahrenheit;

    // entrada de dados
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &celsius); //Lê a temperatura em Celsius

    // processamento (cálculo dos dados)
    fahrenheit = celsius * (9.0 / 5.0) + 32.0; //fórmula

    // saida de dados
    printf("A temperatura em graus Fahrenheit eh: %.2f\n", fahrenheit);

    return 0; 
}