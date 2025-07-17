#include <stdio.h>
#include <stdlib.h>

int main()
{
int a,b, operacao;
printf("Informe o primeiro número: ");
scanf ("%d",&a);
printf("Informe o segundo número: ");
scanf ("%d",&b);
operacao = a % b;
printf("O resto será= %d\n",operacao);
printf("O número serão multiplos se o resto da divisão for um número inteiro");

return 0;
}
