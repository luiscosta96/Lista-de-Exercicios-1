#include <stdio.h>

int main() {
    system("cls"); //limpa a tela
    int numero1, numero2;

    // entrada de dados
    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &numero1); // Lê o primeiro número inteiro

    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &numero2); // Lê o segundo número inteiro

    // processamento (cálculo dos dados)
    int ou_exclusivo = numero1 ^ numero2; // Ou exclusivo
    int ou_bit_a_bit = numero1 | numero2; // Ou bit a bit
    int e_bit_a_bit = numero1 & numero2;  // E bit a bit

    // saida de dados
    printf("Resultado do OU exclusivo entre %d e %d: %d\n", numero1, numero2, ou_exclusivo);
    printf("Resultado do OU bit a bit entre %d e %d: %d\n", numero1, numero2, ou_bit_a_bit);
    printf("Resultado do E bit a bit entre %d e %d: %d\n", numero1, numero2, e_bit_a_bit);

    return 0;
}