#include <stdio.h>

int main()
{
	int n_valor = 0;
	float notas = 0, soma = 0, media = 0;
	int i = 0;

	scanf("%d", &n_valor);
	for (i = 0; i < n_valor; i++)
	{
		scanf("%f", &notas);
		soma = soma + notas;
		media = soma / n_valor;
	}
	printf("%.2f", media);

	return 0;
}
