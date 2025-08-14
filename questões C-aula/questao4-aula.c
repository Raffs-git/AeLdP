#include <stdio.h>

int main() {
    int op;
    float a, b;

    printf("1-Adicao\n2-Subtracao\n3-Multiplicacao\n4-Divisao\n");
    scanf("%d", &op);

    scanf("%f%f", &a, &b);

    if (op == 1) printf("%.2f\n", a + b);
    if (op == 2) printf("%.2f\n", a - b);
    if (op == 3) printf("%.2f\n", a * b);
    if (op == 4) printf("%.2f\n", a / b);

    return 0;
}
