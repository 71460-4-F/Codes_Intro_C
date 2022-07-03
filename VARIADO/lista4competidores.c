#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b, c;
	char cont = 0;
	do
	{
		printf("digite o resuldado do primeiro competidor:  ");
		scanf("%d", &a);
		printf("digite o segundo resultado do segundo competidor: ");
		scanf("%d", &b);
		printf("digite o resultado do terceiro competidor: ");
		scanf("%d", &c);
		if ((a == b || a == c) && !(b == c))
		{
			printf("2 resultados iguais\n");
		}
		else if ((a == c || b == c) && !(a == b))
		{
			printf(" 2 resultados iguais\n");
		}
		else if ((a == b || a == c) && (b == c || b == a) && (c == a || c == b))
		{
			printf("3 resultados iguais\n");
		}
		else
		{
			printf("resultados diferentes\n");
		}
	}
	fflush(stdin);
	printf("continuar? sim(s) nao(n)\n");
	scanf("%c", &cont);
	while (cont == 's')

		return 0;
}
