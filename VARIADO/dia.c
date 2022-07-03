#include <stdio.h>
int main(void)
{
	int dia, mes, ano, a, b, c, d, total, resto;

	printf("Digite o dia mes e ano\n");
	scanf("%d %d %d", &dia, &mes, &ano);

	a = ano - 1900;
	b = a / 4;
	c = mes;
	d = dia - 1;
	total = a + b + c + d;
	resto = total / 7;
	printf("%d", resto);

	return 0;
}
