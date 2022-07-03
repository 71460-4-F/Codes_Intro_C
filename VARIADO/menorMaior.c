#include <stdio.h>

int main()
{
	int n_valor = 0, num = 0, maior = 0, menor = 0;
	int cont = 0;

	scanf("%d", &n_valor);
	for (cont = 0; cont < n_valor; cont++)
	{
		scanf("%d", &num);
		if (cont == 0)
		{
			maior = num;
			menor = num;
		}
		if (num > maior)
			maior = num;
		if (num < menor)
			menor = num;
	}
	printf("%d %d", maior, menor);

	return 0;
}
