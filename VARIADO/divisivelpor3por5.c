#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x;
	printf("digite um numero\n");
	scanf("%d", &x);
	int r;
	for (r = 1; r > 0; r++)
	{
		if ((x % 2 == 0) || (x % 3 == 0))
		{
			printf("sim\n");
		}
		if (x % 5 == 0)
		{
			printf("nao\n");
		}
	}

	return 0;
}
