#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a1, a2, a3;
	do
	{
		printf("digite 0 caso queira sair\n");
		printf("digite a1: ");
		scanf("%d", &a1);
		printf("digite a2: ");
		scanf("%d", &a2);
		printf("digite a3: ");
		scanf("%d", &a3);
		if ((a1 > a2 && a1 > a3) && (a2 < a1 && a2 < a3))
		{
			printf(" a1 e mais alto e a2 e menor\n");
		}
		else if ((a1 > a2 && a1 > a3) && (a3 < a2 && a3 < a1))
		{
			printf("a1 e mais alto e a3 e mais baixo\n");
		}
		else if ((a2 > a1 && a2 > a3) && (a1 < a2 && a1 < a3))
		{
			printf("a2 e maior e a1 e menor\n");
		}
		else if ((a2 > a1 && a2 > a3) && (a3 < a2 && a3 < a1))
		{
			printf("a2 e mairo e a3 e menor\n");
		}
		else if ((a3 > a1 && a3 > a2) & (a1 < a3 && a1 < a2))
		{
			printf("a3 e maior e a1 e menor\n");
		}
		else if ((a3 > a1 && a3 > a2) && (a2 < a1 && a2 < a3))
		{
			printf("a3 e maior e a2 e menor\n");
		}
		else
		{
			printf("alturas repetidas\n");
		}
	} while (a1 != 0 && a2 != 0 && a3 != 0);

	return 0;
}
