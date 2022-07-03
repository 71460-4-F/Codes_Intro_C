#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num = 0, fat = 0;

	scanf("%d", &num);
	if (num == 0)
	{
		printf("1\n");
	}
	else
	{
		fat = num;
		while (num != 1)
		{
			num = num - 1;
			fat = fat * num;
		}
		printf("%d", fat);
	}

	return 0;
}
