#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b, c;
	printf(" digite os tres valores\n");
	scanf("%d %d %d", &a, &b, &c);
	if (a == b && b == c)
	{
		printf("tres iguais\n");
	}
	else if (a == b)
	{
		printf("dois iguais\n");
	}
	else if (a == c)
	{
		printf("dois iguais\n");
	}
	else if (b == c)
	{
		printf("dois iguais\n");
	}

	else
	{
		printf("valores diferentes\n");
	}

	return 0;
}
