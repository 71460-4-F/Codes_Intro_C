#include <stdio.h>
#include <stdlib.h>

int main()
{
	int valor = 0, quantpalpite = 0, palpite = 0, i, dife = 0, resu = 0, repa = 0, rece = 1000, calcu = 0;

	printf("Digite o valor de referencia\n");
	scanf("%d", &valor);
	printf("Digite a quantidade de palpites\n");
	scanf("%d", &quantpalpite);

	for (i = 1; i <= quantpalpite; i++)
	{
		printf("\nDigite o palpite %d\n", i);
		scanf("%d", &palpite);
		calcu = palpite - valor;
		resu = abs(calcu);
		// printf ("%d\n",calcu);
		// printf ("%d\n",resu);

		if (resu < rece)
		{
			rece = resu;
			repa = palpite;
		}
	}
	printf("O palpite %d e o mais proximo", repa);

	return 0;
}
