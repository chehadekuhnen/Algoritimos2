// Calculadora16102018.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>


int soma(int x, int y)
{
	int a = x + y;
	return a;
}

int subtracao(int x, int y)
{
	int a = x - y;
	return a;
}

int mult(int x, int y)
{
	int a = x * y;
	return a;
}

float divisao(float x, float y)
{
	float a = x / y;
	return a;
}

int main()
{
	int a;
	printf("favor digitar um numero inteiro: ");
	scanf_s("%i", &a);

	int b;
	printf("favor digitar um numero inteiro: ");
	scanf_s("%i", &b);

	int r = soma(a, b);
	int s = subtracao(a, b);
	float d = divisao((float)a, (float)b);
	int m = mult(a, b);

	printf("Valor da Soma: %i\n", r);
	printf("Valor da subtracao: %i\n", s);
	printf("Valor da divisao: %f\n", d);
	printf("Valor da mutiplicao: %i\n", m);

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
