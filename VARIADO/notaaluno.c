#include <stdio.h>
#include <stdlib.h>

int main()
{
	int lin = 0, col = 0;
	scanf("%d %d", &lin, &col);
	int notas[lin][col];

	for (int j = 0; j < lin; j++)
	{
		for (int i = 0; i < col; i++)
		{
			scanf("%d", &notas[j][i]);
		}
	}

	printf("digite num do alun\n");
	scanf(" %d", &lin);
	printf("digite o num da nota\n");
	scanf(" %d", &col);
	printf("aluno = %d nota = %d", lin, notas[lin][col]);

	return 0;
}
