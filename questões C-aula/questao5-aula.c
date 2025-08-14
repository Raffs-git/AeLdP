#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if ((n % 2 == 0 && n % 3 != 0) || (n % 3 == 0 && n % 2 != 0))
        printf("Sim\n");
    else
        printf("Nao\n");

    return 0;
}
