#include <stdio.h>

int main() {
    int op;
    float a, b;

    printf("===== MENU =====\n");
    printf("1 - Adicao\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Escolha a opcao (1-4): ");
    scanf("%d", &op);

    printf("Digite o primeiro numero: ");
    scanf("%f", &a);

    printf("Digite o segundo numero: ");
    scanf("%f", &b);

    switch(op) {
        case 1:
            printf("Resultado: %.2f\n", a + b);
            break;
        case 2:
            printf("Resultado: %.2f\n", a - b);
            break;
        case 3:
            printf("Resultado: %.2f\n", a * b);
            break;
        case 4:
            printf("Resultado: %.2f\n", a / b);
            break;
        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}
