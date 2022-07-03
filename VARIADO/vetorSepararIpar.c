#include <stdio.h> //programa separa n pares.  -  UFC  - Quixadá -
int main(void)
{ // (By printf("Tiago Arruda F"));  13/06/2016
	int n = 0;
	int a = 0, b = 0, c = 0;
	printf("digite o tamanho do vetor: ");
	scanf("%d", &n);
	int vet[n];

	for (a = 0; a < n; a++)
	{
		scanf("%d", &vet[a]);
	}
	for (b = 0; b < n; b++)
	{
		if (vet[b] % 2 != 0)
		{
			printf("%d", vet[b]);
		}
	}
	printf("\n");

	for (c = 0; c < n; c++)
	{
		if (vet[c] % 2 == 0)
		{
			printf("%d", vet[c]);
		}
	}
	printf("\n");
	return 0;
}
