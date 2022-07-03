#include <stdio.h>
int main(void)
{
	int quantidade = 0, elementos[quantidade], i = 0, x = 0;
	printf("digite a quantidade de elementos\n");
	scanf("%d", &quantidade);
	i = quantidade;

	for (i = 0; i < quantidade; i++)
	{
		scanf("%d", &elementos[i]);
		x = elementos[i];
	}

	for (; i > x; i--)
	{
	}

	printf("%d\n", x);

	return 0;
}
