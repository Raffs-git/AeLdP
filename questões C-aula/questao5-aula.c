#include <stdio.h>

int main() {
    int n;

    printf("informe um numero inteiro: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("é divisivel por 2\n");
    if (n % 3 == 0)
        printf("é divisivel por 3\n");
    if (!(n % 2 == 0 && n % 3 == 0))
        printf("nao é divisivel simultaneamente\n");

    return 0;
}
