#include <stdio.h>

int main() {
    //Declaração de Variáveis
    float c , f;
    //Entrada de dados 
    printf("Informe o valor da temperaura em Celsius: ");
    scanf ("%f",&c);
    //Processamento 
    f= (9*c+160)/5;
    //Saída de dados
    printf ("O valor da temperatura em Fahrenheit é: %.f", f);

    return 0;
}
