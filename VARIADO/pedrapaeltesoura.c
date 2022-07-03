#include <stdio.h>

int main()
{

	char j1, j2;
	printf("jogador1 e jogador2 digite: pedra, papel  ou tesoura\n");
	scanf("%c %c", &j1, &j2);
	printf("%c %c", j1, j2);
	if (j1 == j2)
	{
		printf("empate\n");
	}
	else if (((j1 == 'r' && j2 == 's')) || ((j1 == 's' && j2 == 'p')) || ((j1 == 'p' && j2 == 'r')))
	{
		printf(" j1 ganhou\n");
	}

	else
	{
		printf("jogador 2 ganhoju\n");
	}

	return 0;
}
