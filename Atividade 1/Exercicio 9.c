#include <stdio.h>

int main () {
    system("cls"); //limpa a tela
    float num1, num2;

    printf("Digite dois numeros a seguir: \n"); 
    scanf("%f %f",&num1, &num2);

    printf("Segundo numero: %f \nPrimeiro numero: %f\n",num2, num1);

    return 0;
}