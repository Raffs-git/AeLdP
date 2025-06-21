programa
{
	funcao inicio ()
	{
		//Declaraçao de variável 
		const real taxa_USD = 5.00
		const real taxa_GBP = 6.50
		const real taxa_EUR = 5.50
		
		//Declaraçao de variaveis
		real orcamento_inicial
		real gastos_USA_BRL
		real gastos_UK_BRL
		real gastos_FR_BRL
		real saldo_inicial
		real total_gastos
		real saldo_final
		
		//Entrada de dados
		escreva("Digite o valor do orçamento em reais: ", "\n")
		leia(orcamento_inicial)
		
		//processamento
		gastos_USA_BRL = (1745 + 2350)*taxa_USD
		gastos_UK_BRL = (8500)*taxa_GBP
		gastos_FR_BRL = (120 + 380 + 250 + 750 + 3000)*taxa_EUR
		
		total_gastos = gastos_USA_BRL + gastos_FR_BRL + gastos_UK_BRL
		saldo_final = orcamento_inicial - total_gastos
		
		//saida de dados
		escreva("Gastos nos Estados Unidos: ", gastos_USA_BRL, "\n")
		escreva("Gastos no Reino Unido: ", gastos_UK_BRL, "\n")
		escreva("Gastos na França: ", gastos_FR_BRL, "\n")
		escreva("Total de gastos: ", total_gastos, "\n")
		escreva("Saldo final restante: ", saldo_final, "\n")
	}
}