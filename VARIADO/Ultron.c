#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	int a, b, i, cont = 0, ultron, elementos;

	printf("Digite os dois números correspondente a Ultron (Entre 0 e 9) \n");
	scanf("%d %d", &a, &b);
	printf("Qual a quantidade de elementos que você quer?\n");
	scanf("%d", &elementos);

	for (i = 1; i <= elementos; i++)
	{
		printf("Digite o %d valor \n", i);
		scanf("%d", &ultron);

		if (ultron == a)
		{
			cont++;
		}
	}
	printf("\nEle aparece %d vezes\n", cont);
	return 0;
}
