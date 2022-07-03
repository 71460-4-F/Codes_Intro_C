#include <stdio.h>

int main()
{

	int contador, x, palpite, maisproximo, diferenca, gaveta;
	contador = 1;
	maisproximo = 0;
	diferenca = 0;
	gaveta = 0;
	printf("digite o valor fixo\n");
	scanf("%d", &x);
	palpite = 1;

	while (contador <= 5)
	{

		printf("Digite os palpite %d numero: ", contador);
		scanf("%d", &palpite);
		diferenca = x - palpite;
		if (diferenca < 0)
		{
			diferenca = diferenca * -1;
		}

		if (gaveta < diferenca)
		{
			gaveta = diferenca;
			maisproximo = palpite;
		}
		contador++;
	}
	printf(" o mais proximo e %d\n", maisproximo);
	return 0;
}
