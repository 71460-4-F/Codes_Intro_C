#include <stdio.h>
int main()
{
	int a;
	printf("digite um numero\n");
	scanf("%d", &a);

	if (a % 4 == 0)
	{
		printf("PIM");
	}

	else if (a != 3)
	{
		printf("PIM");
	}

	else
	{
		printf("%d", a);
	}

	return 0;
}
