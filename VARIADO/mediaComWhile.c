#include <stdio.h>

int main()
{
	float num = 0, media = 0, soma = 0, cont = 1;

	while (num >= 0)
	{
		scanf("%f", &num);
		if (num >= 0)
		{
			soma += num;
			media = soma / cont;
			cont++;
		}
	}
	printf("%.2f", media);

	return 0;
}
