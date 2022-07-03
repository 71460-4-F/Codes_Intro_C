#include <stdio.h>
#include <stdlib.h>

int main()
{
	int result = 0;
	int i = 3, n = 0;

	scanf("%d", &n);
	for (i = 3; i <= n; i++)
	{
		result = result + (2 * i);
	}

	printf("%d \n", result);
	return 0;
}
