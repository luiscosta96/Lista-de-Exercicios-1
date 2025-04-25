#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls"); //limpa a tela
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d",&num);

    if (num%2==0){
        printf("O numero %d eh par.\n",num);
    } else {
        printf("O numero %d eh impar.\n",num);
    }
    return 0;
}