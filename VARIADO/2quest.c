#include <stdio.h>

int main()
{
	int a, b, c, d;
	printf(" Digite os 4 valores dos ovos\n");
	scanf("%d %d %d %d", &a, &b, &c, &d);

	if (a > b && a > c && a > d)
	{
		printf("O primeiro valor %d é maior", a);
	}
	else if (b > a && b > c && b > d)
	{
		printf("O segundo valor %d é maior", b);
	}
	else if (c > a && c > b && c > d)
	{
		printf("O terceiro valor %d é maior", c);
	}
	else if (d > a && d > b && d > c)
	{
		printf("O quarto valor %d é maior", d);
	}
	else
	{
		printf("Todos os valores são iguais");
	}
}
