// aula_23.10.2018_condicao.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>

void ImprimirMenu();
{
	printf("======================\n");
	printf("== Escolha uma opcao==\n");
	printf("== 1 - a ==\n");
	printf("== 2 - b ==\n");
	printf("== 3 - c ==\n");
	printf("======================\n");

	int opcao = 0;
	scanf_s("%i", &opcao);
}
	void ApresentarRestoDivisaocomSwitch()
		
	{
		printf("Digite algum numero entre 0...1000");
		int numero = 0;
		scanf_s("%i", &numero);
		int resto = numero % 5;

		switch (resto)
		{
		case 0:
		{
			printf("Eh divisivel");
		}
		break;


		case 1:
				{
			printf("Eh divisivel");
		}
		break;
		
		
		
		case 2:

		{
			printf("Eh divisivel");
		}
		break;
		
		case 3:
		{
			printf("Eh divisivel");
		}
		break;

		case 4:
		{
			printf("Eh divisivel");
		}
		break;



		
		}

	switch (opcao)





	break;



}


};
int 

int main()
{
	ImprimirMenu();


	printf("\n\n");
	system("pause");
	

	
	
	
	
	
	
	std::cout << "Hello World!\n"; 
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
