#include <stdio.h>
#include <stdlib.h>
int main()
{
	int ano;

	printf("Digite o ano\n");
	scanf("%d", &ano);

	if ((ano % 4 == 0) && (ano % 100 != 0))
	{
		printf("O Ano %d é bissexto\n", ano);
	}

	else if (ano % 4 == 0 && ano % 400 == 0)
	{
		printf("O Ano %d é bissexto\n", ano);
	}

	else
	{
		printf("O Ano %d não é bissexto\n", ano);
	}

	return 0;
}
