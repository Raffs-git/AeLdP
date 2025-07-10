#include <stdio.h>

int main() {
   
    //Declaração de variáveis
    int x, y, soma, subtracao, multiplicacao, divisao_resto, divisao_quociente;
    //Entrada de dados
    printf("Informe um número inteiro x: ");
    scanf ("%d",&x);
    printf("Informe um número inteiro y: ");
    scanf ("%d",&y);
     //Processamento
     soma = x+y;
     subtracao = x-y;
     multiplicacao = x*y;
     divisao_quociente = x/y;
     divisao_resto = x % y;
     //Saída de dados
    printf ("o valor da soma é= %d\n",soma);
    printf ("o valor da subtração é= %d\n",subtracao);
    printf ("o valor da multiplicação é= %d\n",multiplicacao);
    printf ("o valor do quociente é= %d\n",divisao_quociente);
    printf ("o valor do resto é= %d\n",divisao_resto);
   
   
    return 0;
}
