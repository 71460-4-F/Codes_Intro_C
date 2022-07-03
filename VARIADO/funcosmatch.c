#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int result = 0, a = 0, b = 0;
	int resto = 0;
	scanf("%d %d", &a, &b);

	result = a / b;
	resto = a % b;
	printf("resultado = %d \n", result);
	printf("resto = %d \n", resto);

	return 0;
}
