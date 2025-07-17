#include <stdio.h>
#include <stdlib.h>

int main()
{
int a=35;
int b=7;
int soma, dif,multi,quociente, resto;
soma = a+b;
dif= a-b;
multi= a*b;
quociente= a/b;
resto = a%b;
printf ("A soma do número %d com o número %d é = %d\n",a,b,soma);
printf ("A diferença do número %d com o número %d é = %d\n",a,b,dif);
printf ("A multiplicação do número %d com o número %d é = %d\n",a,b,multi);
printf ("O quociente do número %d com o número %d é = %d, e o resto é %d.\n",a,b,quociente,resto);
return 0;
}
