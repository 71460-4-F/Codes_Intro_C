#include <stdio.h>
#include <stdlib.h>

int main()
{
	int soma = 0, media = 0;
	int lin = 0, col = 0;
	scanf("%d %d", &lin, &col);
	int notas[lin][col];
	int aluno = 0;

	for (int j = 0; j < lin; j++)
	{
		for (int i = 0; i < col; i++)
		{
			scanf("%d", &notas[j][i]);
		}
	}

	for (int j = 0; j < lin; j++)
	{
		for (int i = 0; i < col; i++)
		{
			soma = soma + notas[j][i];
		}
		aluno++;
		media = soma / col;
		printf("media do aluno %d  =  %d\n", aluno, media);
		media = 0;
		soma = 0;
	}

	return 0;
}
