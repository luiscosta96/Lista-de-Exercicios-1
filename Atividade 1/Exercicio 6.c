#include <stdio.h>

int main() {
    double numero; 

    printf("Digite um numero: "); 
    scanf("%lf", &numero); 

    printf("Valor lido: %e\n", numero);

    system("pause");
    return 0; 
    
}