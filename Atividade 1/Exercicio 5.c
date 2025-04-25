#include <stdio.h>

int main () {
    
    float numero;
    printf("Digite um numero: "); 
    scanf("%f",&numero);
    printf("Valor lido: %d \n",numero); 
    // o programa nao vai conseguir ler ou imprimir o valor, pois a variável declarada nao é inteira e sim flutuante
    // para que o numero seja lido e impresso corretamente é preciso que a variavel e os codigos estejam corretos tbm (sejam a mesma variável)

    system("pause");
    return 0;

}