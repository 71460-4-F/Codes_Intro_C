#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int colunas = 0;
	int linhas = 0;
	int a = 0, b = 0; // variavei p/ os laços
	int somatorio = 0;
	int total;
	// digite quantas linhas tera a matriz
	scanf("%d", &linhas);
	// digite a qtd de colunas
	scanf("%d", &colunas);
	int mat[linhas][colunas]; // matriz

	for (a = 0; a < colunas; a++)
	{
		for (b = 0; b < linhas; b++)
		{
			scanf("%d", &mat[b][a]);
			somatorio = somatorio + mat[b][a];

			if (mat[b][a] > somatorio)
			{
			}
		}
	}

	return 0;
}
