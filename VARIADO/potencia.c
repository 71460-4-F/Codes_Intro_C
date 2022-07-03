#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 0, poten = 0, num = 0, result = 1;

	scanf("%d", &num);
	scanf("%d", &poten);
	for (i = 0; i < poten; i++)
	{
		result = result * num;
	}
	printf("%d", result);

	return 0;
}
