#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	system("time/t");
	system("color 1f");
	float mat[5][3];
	char alunos[5][100];
	float media[5], soma[5];
	int i = 0, j = 0, k = 0, l = 0, aluno = 1, nota = 1;
	int cont = 1;
	char result[5][20];

	for (i = 0; i < 5; i++)
	{
		printf("digite o nome do aluno %d: ", aluno);
		scanf(" %[^\n]", alunos[i]);

		for (j = 0; j < 3; j++)
		{
			printf("digite a nota %d: ", nota); // recebe o nome e as 5 notas do aluno
			scanf("%f", &mat[i][j]);
			soma[i] += mat[i][j];
			nota++;
		}
		printf("\n");
		nota = 1;
		aluno++; // guarda a media de cada aluno
		media[i] = soma[i] / 3;
	}
	for (k = 0; k < 5; k++)
	{
		if (media[k] >= 7)
		{
			strcpy(result[k], "aprovado ");
		}
		else if (media[k] < 5)
		{
			strcpy(result[k], "reprovado "); // condição do aluno
		}
		else
		{
			strcpy(result[k], "recuperacao ");
		}
	}
	system("cls");
	for (l = 0; l < 5; l++)
	{
		printf("aluno %d %s - media = %.2f -> %s \n", cont, alunos[l], media[l], result[l]);
		cont++;
	}
	return 0;
	system("time");
}
