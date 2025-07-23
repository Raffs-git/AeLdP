#include <stdio.h>
  int main() {
    //declaracao de variavel 
    float fahrenheit, celsius;

    //entrada de dados
    printf("digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahrenheit);

    //processamento 
    celsius = ((fahrenheit - 32)*5)/9;

    //Saida de dados
  printf("A temperatura em celsius é: %.f", celsius);
    return 0;
}
