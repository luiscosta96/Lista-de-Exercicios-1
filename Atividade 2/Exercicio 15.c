#include <stdio.h>

int main() {
    system("cls"); //limpa a tela

    int numero, numero_invertido;

    // Entrada de dados
    printf("Digite um numero inteiro positivo de tres digitos: ");
    scanf("%d", &numero); // Lê um número inteiro

    // Verifica se o número está entre 100 e 999
    if (numero >= 100 && numero <= 999) {
        // Extrai os dígitos
        int n1 = numero / 100;          // Primeiro dígito
        int n2 = (numero / 10) % 10;    // Segundo dígito
        int n3 = numero % 10;           // Terceiro dígito

        // processamento (cálculo dos dados)
        // Forma o número invertido
        numero_invertido = (n3 * 100) + (n2 * 10) + n1;

        // saida de dados
        printf("Numero gerado: %d\n", numero_invertido);
    } else {
        printf("Por favor, insira um numero inteiro positivo de tres digitos.\n");
    }

    return 0; 
}