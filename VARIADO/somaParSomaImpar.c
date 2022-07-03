#include <stdio.h>

int main()
{
	int num = 0, soma_i = 0, soma_p = 0;

	while (num >= 0)
	{
		scanf("%d", &num);
		if (num >= 0)
		{
			if (num % 2 == 0)
			{
				soma_p += num;
			}
			else
				soma_i += num;
		}
	}
	printf("%d %d", soma_p, soma_i);

	return 0;
}
