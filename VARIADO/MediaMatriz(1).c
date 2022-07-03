#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	// Variaveis
	int matriz[3][3];			// matriz geral
	float somaL[3], somaC[3];	// variaveis para as somas em vetor
	float mediaL[3], mediaC[3]; // media dada tambem em vetor

	// CONTADORES
	int c = 0, i = 0;

	// Preenche os dados da matriz
	for (c = 0; c < 3; c++)
	{
		for (i = 0; i < 3; i++)
		{
			scanf("%d", &matriz[c][i]); // recebe os dados para preencher a matriz
		}
	}

	// Percorrer a matriz e fazer as medias de linhas e colunas
	for (c = 0; c < 3; c++)
	{
		for (i = 0; i < 3; i++)
		{
			somaL[c] = somaL[c] + matriz[c][i]; // soma os valores das linhas
			mediaL[c] = somaL[c] / 3;			// faz a media das linhas da matriz
			somaC[c] = somaC[c] + matriz[i][c]; // soma os valores das colunas
			mediaC[c] = somaC[c] / 3;			// calcula a media das colunas
		}
	}

	// Percorre a matriz e imprime os valores das medias
	for (c = 0; c < 3; c++)
	{
		printf("Media Linha %d: %5.2f\n", c, mediaL[c]);  // Imprimi a media das linhas
		printf("Media COluna %d: %5.2f\n", c, mediaC[c]); // imprimi a media das colunas
	}

	return 0;
}
