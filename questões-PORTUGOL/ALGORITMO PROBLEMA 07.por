programa {
  funcao inicio() {
    //Declaração de variáveis
    real raio, diametro, area, comprimento
    //Declaração de constantes
    const real pi = 3.14159
    //Entrada de dados
    escreva ("Informe o valor do raio: ")
    leia (raio)
    //Processamento
    diametro= 2 * raio
    comprimento = 2*pi*raio
    area= pi *(raio*raio)
    //Saída de dados
    escreva ("O diametro da circunferencia é: ", diametro, " e o comprimento da circunferencia é: ",comprimento, " e a área do circulo é: ", area)
  }
}
