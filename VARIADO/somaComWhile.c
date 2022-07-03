#include <stdio.h>
int main()
{
	int a, b, s;
	int r;
	r = 1;
	printf("digite dois numeros:\n");
	while (r <= 5)
	{
		scanf("%d", &a);
		scanf("%d", &b);
		s = a + b;
		printf("a soma de %d com %d e: %d\n", a, b, s);
		r++;
	}
	return 0;
}
