#include <stdio.h>

int main()
{
	int x, contador;
	scanf("%d", &x);
	contador = 1;
	while (contador < x + 1)
	{
		printf("%d\n", contador);
		contador = contador + 1;
	}
	printf("Essa frase sempre aparece 1 vez no final\n");
}
