programa {
  funcao inicio() {
    //Declaração de variáveis
    inteiro x, y, soma, subtracao, multiplicacao, divisao_resto, divisao_quociente
    //Entrada de dados
    escreva ("Informe um número inteiro x: ")
    leia (x)
     escreva ("Informe um número inteiro y: ")
     leia (y)
     //Processamento
     soma = x+y
     subtracao = x-y
     multiplicacao = x*y
     divisao_quociente = x/y
     divisao_resto = x % y
     //Saída de dados
    escreva ("O resultado da soma é: " ,soma, "\n", "O resultado da subtração é: " ,subtracao, "\n", "O resultado da multiplicação é: " , multiplicacao, "\n", "O quociente da divisão é: " ,divisao_quociente, "\n", "O resto da divisão é: " , divisao_resto, "\n")
  }
}
