// Aula1810_Condicionais.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

/* "e"= "&&" - verdadeiro somente quando todas condições forem verdadeiras;
	"ou" = "||" - basta que uma condição seja verdadeira para ser verdadeiro.
*/

#include "pch.h"
#include <iostream>


int LerNumeroInteiro()
{
	int a;
	printf("Favor digitar um numero inteiro: ");
	scanf_s("%i", &a);

	return a;
}


int MaiorValorInteiro(int a, int b, int c, int d)
{
	int maior = a;
	
	if (maior < b)
	{
		maior = b;
	}
	if (maior < c)
	{
		maior = c;
	}
	if (maior < d)
	{
		maior = d;
	}

	return maior;
}
float Media(int a, int b, int c, int d)
{
	return (a + b + c + d) / 4;
}

void ImprimeValorsMaioresQueMedia(int a, int b, int c, int d, float Media)
{
	if (a > Media)
	{
		printf("%i ", a);
	}
	if (b > Media)
	{
	printf("%i ", b);
	}
	if (c > Media)
	{
	printf("%i ", c);
	}
	if (d > Media)
	{
	printf("%i ", d);
	}
}

	
int main()
{
	
	int primeiro = LerNumeroInteiro();
	int segundo = LerNumeroInteiro();
	int terceiro = LerNumeroInteiro();
	int quarto = LerNumeroInteiro();
		
	int  m = MaiorValorInteiro(primeiro, segundo, terceiro, quarto);

	printf("Maior valor encontrado: %i\n\n", m);

	float n = Media(primeiro, segundo, terceiro, quarto);
	printf("Media: %f\n\n", (float)n);

	
	ImprimeValorsMaioresQueMedia(primeiro, segundo, terceiro, quarto, n);

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
