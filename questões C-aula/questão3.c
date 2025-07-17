#include <stdio.h>
#include <stdlib.h>

int main()
{
int numero,resultado;
printf("Informe o valor do número: ");
scanf ("%d",&numero);
resultado= numero % 2;
printf ("o resto é = %d\n", resultado);
printf ("agora observe se ele é par ou não! DICA: ele será PAR caso o resto seja 0 :P");



return 0;
}
