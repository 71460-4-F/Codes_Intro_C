#include <stdio.h>

int main()
{

	int a;
	printf("Digite um nÃºmero inteiro\n");
	scanf("%d", &a);

	if (a > 1)
	{
		printf("NÃºmero Positivo");
	}
	else if (a <= -1)
	{
		printf("NÃºmero Negativo");
	}
	else
	{
		printf("Nulo");
	}

	return 0;
}
