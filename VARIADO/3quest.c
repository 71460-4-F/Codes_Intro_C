#include <stdio.h>
#include <stdlib.h>

int main()
{
	int chute1, chute2, produto, dif1, dif2;
	printf("Valor do produto\n");
	scanf("%d", &produto);
	printf("Valor do chute do jogador 1\n");
	scanf("%d", &chute1);
	printf("Valor do chute do jogador 2\n");
	scanf("%d", &chute2);
	dif1 = abs(chute1 - produto);
	dif2 = abs(chute2 - produto);

	if (chute1 == chute2)
	{
		printf("Invalido");
	}

	else
	{

		if (dif1 < dif2)
		{
			printf("O jogador 1 ganhou \n");
		}
		if (dif2 < dif1)
		{
			printf("O jogador 2 ganhou \n");
		}
		if (dif1 == dif2)
		{
			printf("Empate");
		}
	}

	return 0;
}
