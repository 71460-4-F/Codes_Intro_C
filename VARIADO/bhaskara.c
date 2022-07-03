#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	int a = 0, b = 0, c = 0;
	int delta = 0, raiz_d = 0;
	int x1 = 0, x2 = 0; // by tiago

	printf("digite o valor de a: ");
	scanf("%d", &a);
	printf("digite o valor de b: ");
	scanf("%d", &b);
	printf("digite o valor de c: ");
	scanf("%d", &c);

	delta = (b * b) - 4 * ((a) * (c));
	printf("\n\n\n");
	printf("delta = %d\n", delta);
	if (delta < 0)
	{
		printf("delta negativo nao possui raizes reais\n");
	}
	else
	{
		raiz_d = sqrt(delta);
		x1 = (-b + raiz_d) / (2 * a);
		x2 = (-b - raiz_d) / (2 * a);
		printf("x1 = %d\n", x1);
		printf("x2 = %d\n", x2);
	}

	return 0;
}
