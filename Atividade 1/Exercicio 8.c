#include <stdio.h>

int main () {
    
    int num1, num2;
    system("cls"); //limpa a tela
    
    printf("Digite um numero: "); 
    scanf("%d",&num1);
    printf("Digite outro numero: "); 
    scanf("%d",&num2);

    printf("Segundo numero: %d \n",num2); 
    printf("Primeiro numero: %d \n",num1); 

    system("pause");
    return 0;

}