#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	// Variaveis
	int matriz[2][3]; // matriz geral
	float soma;		  // variavel pra amarmazenar a soma

	// CONTADORES
	int c = 0, i = 0;

	// Preenche os dados da matriz
	for (c = 0; c < 2; c++)
	{
		for (i = 0; i < 3; i++)
		{
			scanf("%d", &matriz[c][i]); // recebe os dados para preencher a matriz
		}
	}

	// Percorrer a matriz e fazer as medias de linhas e colunas
	for (c = 0; c < 2; c++)
	{
		for (i = 0; i < 3; i++)
		{
			soma = soma + matriz[c][i]; // soma os valores da matriz
		}
	}

	printf("%5.2f", soma);

	return 0;
}
