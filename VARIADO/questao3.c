#include <stdio.h>
int main()
{
	int a, b, s;
	int contador;
	contador = 0;
	for (contador = 1; contador > 0; contador++)
	{

		printf("digite as parcelas:\n");
		scanf("%d", &a);
		scanf("%d", &b);
		s = a + b;
		printf("soma = %d\n", s);
	}

	return 0;
}
