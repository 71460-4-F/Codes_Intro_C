#include <stdio.h>

int main(void)
{
	int ano = 0;
	printf("digite um ano\n");
	scanf("%d", &ano);

	if (ano % 4 == 0 && (ano % 100 != 0 || ano % 400 == 0))
	{
		printf("o ano e bissexto\n");
	}
	else
	{
		printf("o ano nao e bissexto\n");
	}

	return (0);
}
