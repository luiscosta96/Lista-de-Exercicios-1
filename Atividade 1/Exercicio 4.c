#include <stdio.h>

int main () {
    
    int numero;
    printf("Digite um numero: "); 
    scanf("%d",&numero);
    printf("Valor lido: %f \n",numero); 
    // o programa nao vai conseguir ler ou imprimir o valor, pois a variável declarada nao é flutuante e sim inteiro
    // para que o numero seja lido e impresso corretamente é preciso que a variavel e os codigos estejam corretos tbm (sejam a mesma variável)

    system("pause");
    return 0;

}