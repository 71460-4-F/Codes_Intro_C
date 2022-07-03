#include <stdio.h>
int main()
{
	int ref, c1, c2;
	printf("digitwo valor de referencia do produto\n");
	scanf("%d", &ref);
	if (ref >= 1 && ref <= 100)
	{
		printf("digite o primeiro chote\n");
		scanf("%d", &c1);
		printf("digite o segundo chute\n");
		scanf("%d", &c2);
		if ((c1 - ref) > ref && c2 > (c1 - ref))
		{
			printf("c1 e o ais proximo\n");
		}
		else
		{
			printf("c2 eo mais proximo\n");
		}
		return 0;
	}
	else
	{
		printf("opcao errada\n");
	}
}
