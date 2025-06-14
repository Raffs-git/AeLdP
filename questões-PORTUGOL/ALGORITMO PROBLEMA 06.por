programa {
  funcao inicio() {
     //Declaração de variáveis
    real x, y , troca
    //Entrada de dados
    escreva ("Informe o valor de x: ")
    leia (x)
    escreva ("Informe o valor de y: ")
    leia (y)
    //Processamento 
    troca = x
    x = y
    y =troca
    //Saída de dados
    escreva (" o novo valor de x: ", x)
    escreva (" o novo valor de y: ", y)
  }
}
