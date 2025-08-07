#include <stdio.h>

int main() {
    short int i;
    long int montante;
    int contas;
    printf("Informe sua idade: ");
    scanf("%d", &i);
    printf("Informe o montante: ");
    scanf("%d", &montante);
    printf("Informe o número de contas que o depósito será executado: ");
    scanf("%d", &contas);
    printf("A idade é: %d anos\n", i);
    printf("O montante é: %d\n", montante);
    printf("Número de contas é: %d\n", contas);
    return 0;
}
