programa {
  funcao inicio() {
    //declaracao de variavel 
    real fahrenheit, celsius

    //entrada de dados
    escreva("digite a temperatura em Fahrenheit: ")
    leia(fahrenheit)

    //processamento 
    celsius = ((fahrenheit - 32)*5)/9

    //Saida de dados
   escreva("A temperatura em celsius é: ", celsius)
  }
}