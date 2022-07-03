#include <stdio.h>
#include <stdlib.h>
int main()
{
	int j1, j2, valor;
	int dif1, dif2;

	printf("digite o valor do produto:\n");
	scanf("%d", &valor);
	printf("j1 digite seu palpite\n");
	scanf("%d", &j1);
	printf("j2 digite seu palpite\n");
	scanf("%d", &j2);

	if (j1 == j2)
	{
		printf("erro! palpites iguais\n");
	}
	dif1 = abs(j1 - valor);
	dif2 = abs(j2 - valor);

	if (dif1 > dif2)
	{
		printf("o palpite de %d por j2 e mais proximo\n", j2);
	}
	else
	{
		printf("o palpite de %d por j1 e mais proximo\n", j1);
	}
	return 0;
}
