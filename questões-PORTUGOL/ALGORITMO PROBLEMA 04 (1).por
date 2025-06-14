programa {
  funcao inicio() {
   //Declaração de variáveis
   real litrosUsados_MES_1,litrosUsados_MES_2, litrosUsados_MES_3, preco_combustivel,media_aritmetica,mes_1, mes_2, mes_3
   //Entrada de dados
   escreva ("informe os litros usados no mes_1 ")
   leia (litrosUsados_MES_1)
   escreva ("informe os litros usados no mes_2 ")
   leia (litrosUsados_MES_2)
   escreva ("informe os litros usados no mes_3 ")
   leia (litrosUsados_MES_3)
   escreva ("informe o preço do combustivel ")
   leia (preco_combustivel)
   //Processamento
   mes_1=litrosUsados_MES_1*preco_combustivel
   mes_2=litrosUsados_MES_2*preco_combustivel
   mes_3=litrosUsados_MES_3*preco_combustivel
   media_aritmetica= mes_1+mes_2+mes_3 /3
  //Saída de Dados
   escreva ("A media aritmetica e: ", media_aritmetica)
   
  }
}
