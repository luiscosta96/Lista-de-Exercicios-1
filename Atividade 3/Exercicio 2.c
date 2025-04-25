#include <stdio.h>
#include <stdlib.h>

int main() {
    system("cls"); //limpa a tela
    int a,b;
    printf("Digite o valor de a: ");
    scanf("%d",&a);
    printf("Digite o valor de b: ");
    scanf("%d",&b);

    if (a>b){
        printf("O maior numero eh a.\n(a = %d)\n",a);
    } else {
        if (a<b) {
            printf("O maior numero eh b.\n(b = %d)",b);
        } else {
            if (a==b){
                printf("Os dois numeros sao iguais.\n");
            }
        }
    }
    return 0;
}