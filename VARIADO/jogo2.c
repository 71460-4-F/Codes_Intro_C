#include <stdio.h>
#include <stdlib.h>
#define rodada 10

int main(void)
{
	int j1 = 0, j2 = 0;
	int somaP = 0, somaI = 0;
	int numJ1 = 0, numJ2 = 0;
	int ouroP = 0, ouroI = 0;
	int cont = 0;

	while (cont < rodada)
	{
		numJ1 = numJ1 + j1;
		numJ2 = numJ2 + j2;

		if (j1 % 2 == 0)
			somaP = somaP + j1;
		if (j1 % 2 != 0)
			somaI = somaI + j1;
		if (j2 % 2 == 0)
			somaP = somaP + j2;
		if (j2 % 2 != 0)
			somaI = somaI + j2;

		scanf("%d", &j1);
		scanf("%d", &j2);
		if (j1 < 0)
			cont = 20;
		if (j2 < 0)
			cont = 20;
		cont++;
	}

	ouroP = numJ1 + somaI;
	ouroI = numJ2 + somaP;

	if ((ouroP % 2 == 0) && (ouroI % 2 == 0))
		printf("PAR");
	else if ((ouroP % 2 != 0) && (ouroI % 2 != 0))
		printf("IMPAR");
	else
		printf("EMPATE");

	return 0;
}
