#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int qSoldados = 0;
	int cont;
	float alt[qSoldados], soma = 0, media = 0;
	scanf("%i", &qSoldados);
	for (cont = 1; cont <= qSoldados; cont++)
	{
		scanf("%f", &alt[cont]);
		soma += alt[cont];
		media = soma / alt;
	}
	return 0;
}
