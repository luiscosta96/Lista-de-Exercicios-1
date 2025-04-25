#include <stdio.h>

int main() {
    system("cls"); //limpa a tela
    int dia, mes, ano;

    printf("Digite sua data de nascimento(dia/mes/ano): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    printf("Data de nascimento: %d/%d/%d\n", dia, mes, ano);

    return 0;
}