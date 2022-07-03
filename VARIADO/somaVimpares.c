#include <stdio.h>

int main()
{
	int menor = 0, maior = 0;
	int soma = 0;
	int cont = 0;

	scanf("%d", &menor);
	scanf("%d", &maior);
	for (cont = menor; cont <= maior; cont++)
	{
		if (cont % 2 != 0)
			soma = soma + cont;
	}
	printf("%d", soma);

	return 0;
}
