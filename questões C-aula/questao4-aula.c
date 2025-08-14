#include <stdio.h>

int main() {
    int op;
    float a, b;

    printf("===== operações =====\n");
    printf("1 - adicao\n");
    printf("2 - subtracao\n");
    printf("3 - multiplicacao\n");
    printf("4 - divisao\n");
    printf("escolha a opcao (1-4): ");
    scanf("%d", &op);

    printf("informe seu primeiro numero: ");
    scanf("%f", &a);

    printf("informe seu segundo numero: ");
    scanf("%f", &b);

    switch(op) {
        case 1:
            printf("o resultado é: %.2f\n", a + b);
            break;
        case 2:
            printf("o resultado é: %.2f\n", a - b);
            break;
        case 3:
            printf("o resultado é: %.2f\n", a * b);
            break;
        case 4:
            printf("o resultado é: %.2f\n", a / b);
            break;
        default:
            printf("a opção não é correta\n");
    }

    return 0;
}
