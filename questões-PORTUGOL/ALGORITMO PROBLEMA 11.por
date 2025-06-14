programa {
  funcao inicio() {
    //Declaração de variáveis
    real tempo, velocidade, distancia, litros_usado
    //Entrada de dados
    escreva ("Informe o tempo gasto na viagem (em horas) : ")
    leia (tempo)
    escreva ("Informe a velocidade média durante a viagem (em km/h): ")
    leia (velocidade)
    //Processamento
    distancia = tempo * velocidade
    litros_usado= distancia/12
    //Saída de dados
    escreva ("Velocidade média é: ",velocidade, "km/h", "\n")
    escreva ("Tempo gasto na viagem é: ",tempo, " horas", "\n")
    escreva ("Distancia percorrida é de: ",distancia, "km","\n")
    escreva ("Litros de combustível utilizados é de: ",litros_usado, " litros", "\n")

  }
}
