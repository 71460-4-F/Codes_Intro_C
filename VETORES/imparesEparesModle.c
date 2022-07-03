#include <stdio.h>
#include <stdlib.h>
int main(void)
{

	int qElementos = 0, count = 0, elementos[100];
	scanf("%d", &qElementos);

	for (count = 0; count < qElementos; count++)
		;
	{
		scanf("%d", &elementos[count]);
	}

	for (count = qElementos - 1; count >= 0; count--)
	{
		elementos[qElementos] = count;

		printf("%d ", elementos[count]);
	}

	return 0;
}
