#include <stdio.h>
#include <stdlib.h>
int main()
{

	int x = 0, parc = 0, i = 1, result = 0;

	printf("digite a sequencia de numeros a ser somado:\n");
	scanf("%d", &x);

	for (i = 1; (x != -1); i++)
	{
		scanf("%d", &x);
		result = result + x;
		if (x == 0)
		{
			result = (result + x);
			parc = x + i++;
			printf("foram digitados  %d\n\n", parc);
			printf("o resultado e: %d \n", result);
		}
	}
	return 0;
}
