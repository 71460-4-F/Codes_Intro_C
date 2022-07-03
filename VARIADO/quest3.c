#include <stdio.h>
#include <stdlib.h>
int main()
{
	char j1, j2;

	printf("Digite a jogada do jogador 1 ( Pe, Pa ou Te ) \n");
	__fpurge(stdin);
	scanf("%c", &j1);
	printf("Digite a jogada do jogador 2  ( Pe, Pa ou Te ) \n");
	__fpurge(stdin);
	scanf("%c", &j2);

	if (j1 == j2)
	{
		printf("Empate");
	}

	else if (j1 == 'p' && j2 == 's')
	{
		printf("O jogardor 2 ganhou");
	}

	else if (j1 == 'p' && j2 == 'r')
	{
		printf("O jogardor 1 ganhou");
	}

	else if (j1 == 'r' && j2 == 's')
	{
		printf("O jogardor 1 ganhou");
	}
	else if (j1 == 'r' && j2 == 'p')
	{
		printf("O jogardor 2 ganhou");
	}
	else if (j1 == 's' && j2 == 'r')
	{
		printf("O jogardor 2 ganhou");
	}
	else if (j1 == 's' && j2 == 'p')
	{
		printf("O jogardor 1 ganhou");
	}
	else
	{
		printf("Caracteres Inválidos");
	}

	return 0;
}
