#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls"); //limpa a tela
    int a,b;
    printf("Digite o valor de a: ");
    scanf("%d",&a);
    printf("Digite o valor de b: ");
    scanf("%d",&b);

    if (a>=b){
        printf("O maior numero eh %d\n",a);
    } else {
        printf("O maior numero eh %d\n",b);
    }
    return 0;
}