programa {
  funcao inicio() {
    //Declaração de variáveis
    real premio_primeiro_ganhador, premio_segundo_ganhador, premio_terceiro_ganhador, restante
    //Declaração de constante
    const real premio=780000.00
    //Processamento 
    premio_primeiro_ganhador= 0.46 * premio //46% do prêmio total
    premio_segundo_ganhador= 0.32 *premio   //32% do prêmio total
    restante= premio- (premio_primeiro_ganhador+premio_segundo_ganhador)
    premio_terceiro_ganhador= restante 
    //Saída de Dados
    escreva (" o primeiro ganhador recebeu: R$", premio_primeiro_ganhador, "\n")
    escreva (" o segundo ganhador recebeu: R$", premio_segundo_ganhador, "\n")
    escreva (" o terceiro ganhador recebeu: R$" , premio_terceiro_ganhador, "\n")
  }
}
