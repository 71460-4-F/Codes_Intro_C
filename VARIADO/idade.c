#include <stdio.h>
#include <stdlib.h>

int main()
{

	int idade, i, cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0, cont5 = 0;
	float porcentagem, porcentagem2;

	for (i = 1; i <= 15; i++)
	{
		printf("Digite a %dª idade\n", i);
		scanf("%d", &idade);

		if (idade <= 15)
		{
			cont1++;
		}
		if (idade > 16 && idade <= 30)
		{
			cont2++;
		}
		if (idade > 31 && idade <= 45)
		{
			cont3++;
		}
		if (idade > 46 && idade <= 60)
		{
			cont4++;
		}
		if (idade > 60)
		{
			cont5++;
		}
	}
	porcentagem = cont1 * 0.15;
	porcentagem2 = cont5 * 0.15;
	printf("Na primeira faixa existem %d pessoas\n", cont1);
	printf("Na segunda faixa existem %d pessoas\n", cont2);
	printf("Na terceira faixa existem %d pessoas\n", cont3);
	printf("Na quarta faixa existem %d pessoas\n", cont4);
	printf("Na quarta faixa existem %d pessoas\n", cont5);
	printf("A percentagem da primeira faixa etária é %.2f\n", porcentagem);
	printf("A percentagem da segunda faixa etária é %.2f\n", porcentagem2);

	return 0;
}
