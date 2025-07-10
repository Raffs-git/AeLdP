#include <stdio.h>
   int main() {
    //declaracao de variavel 
    float volume_interno, raio, altura;
    //Declaração de constantes
    const float volume = 3.14;
    //Entrada de dados
    printf("Informe o raio da base: ");
    scanf("%f", &raio);
    printf ("Informe a altura da base: ");
    scanf("%f", &altura);
    //Processamento
    volume_interno = volume * raio * raio * altura;
    //Saída de dados 
     escreva ("O volume interno da lata é: %.f", volume_interno);
     return 0;
  }
