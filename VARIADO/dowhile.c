#include <stdio.h>
#include <stdlib.h>
int main()
{
	int valor, soma = 0;
	do
	{
		printf("digite um valor para somar ou zero para finalizar\n");
		scanf("%d", &valor);
		soma = soma + valor;
	}

	while (valor != 0);
	{
		printf("soma: %d\n", soma);
	}

	return 0;
}
