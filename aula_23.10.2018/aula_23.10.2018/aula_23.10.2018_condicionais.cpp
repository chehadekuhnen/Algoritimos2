// aula_23.10.2018.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>



float LerSalario()
{
	printf("Favor digitar seu salario: ");
	float salario = 0;
	scanf_s("%f", &salario);
	return salario;

}
float CalculaIR(float salario, float aliquota, float deducao)
{
	return(salario*aliquota) - deducao;
}

void ApresentarIR(float salario)
{
	float ir = 0;
	if (salario <= 1903.98)
	{
		printf("Isento\n");
	}

	else if (salario <= 2826.65)
	{
		ir = CalculaIR(salario, 0.075, 142.8);
		printf("Aliquota: 7.5%%, deducao: 142.8\n");
		printf("valor IR: %.2f\n", ir);
		printf("Sobrou: %f", salario - ir);
	}

	else if (salario <= 3751.05)
	{
		ir = CalculaIR(salario, 0.15, 354.8);
		printf("Aliquota: 15%%, deducao: 354.8\n");
		printf("valor IR: %.2f\n", ir);
		printf("Sobrou: %f", salario - ir);
	}

	else if (salario <= 4664.68)
	{
		ir = CalculaIR(salario, 0.225, 636.13);
		printf("Aliquota: 22.5%%, deducao: 636.13\n");
		printf("valor IR: %.2f\n", ir);
		printf("Sobrou: %f", salario - ir);
	}

	else
	{
		ir = CalculaIR(salario, 0.275, 869.36);
		printf("Aliquota: 27.5%%, deducao: 869.36\n");
		printf("valor IR: %.2f\n", ir);
		printf("Sobrou: %f", salario - ir);
	}

}

int main()
{
	float salario = LerSalario();
	ApresentarIR(salario);
	printf("\n\n");
	system("pause");
}	
	
// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
