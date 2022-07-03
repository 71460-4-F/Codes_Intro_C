#include <stdio.h>
#include <stdlib.h>

int main()
{

	int a, b, i;

	printf("Digite quantos ultros tem");
	scanf("%d", &a);
	printf("Digite quantos ultros tvocê vê");
	scanf("%d", &b);

	for (i = a; i <= b; i++)
	{
		if (a == b)
		{
			i++;
		}
		else
		{
			printf("invalido");
		}
	}

	return 0;
}
