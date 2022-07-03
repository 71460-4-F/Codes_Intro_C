#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int j1 = 0, j2 = 0, soma_i = 0, soma_p = 0, ouro_i = 0, ouro_p = 0;
	int num_j1 = 0, num_j2 = 0;

	while (j2 >= 0)
	{

		num_j1 = num_j1 + j1;
		num_j2 = num_j2 + j2;

		if (j1 % 2 == 0)
			soma_p = soma_p + j1;
		if (j1 % 2 != 0)
			soma_i = soma_i + j1;
		if (j2 % 2 == 0)
			soma_p = soma_p + j2;
		if (j2 % 2 != 0)
			soma_i = soma_i + j2;

		scanf("%d", &j1);
		scanf("%d", &j2);
	}

	ouro_p = num_j1 + soma_i;
	ouro_i = num_j2 + soma_p;

	if ((ouro_p % 2 == 0) && (ouro_i % 2 == 0))
		printf("PAR");
	else if ((ouro_p % 2 != 0) && (ouro_i % 2 != 0))
		printf("IMPAR");
	else
		printf("EMPATE");

	return 0;
}
