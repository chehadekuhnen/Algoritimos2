// aula20.11.2018.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
// Crie um programa para 


struct Carro
{
	char modelo[10];
	char marca[10];
	int ano;
	char cor[10];
	char placa[8];
};

void LerDadosCarro()
{
	struct Carro meuCarro;

	printf("digite o modelo: ");
	fgets(meuCarro.modelo, 10, stdin);
	//gets_s(MeuCarro.modelo);

	printf("digite o marca: ");
	fgets(meuCarro.marca, 10, stdin);

	printf("digite o ano: ");
	scanf_s("%d", &meuCarro.ano);
	
	gets_s(meuCarro.cor);

	printf("digite o cor: ");
	fgets(meuCarro.cor, 10, stdin);

	printf("digite o modelo: ");
	fgets(meuCarro.modelo, 10, stdin);

	printf("digite o placa: ");
	fgets(meuCarro.placa, 8, stdin);
}

int main()
{
	struct Carro meuCarro;

	LerDadosCarro();
    

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
