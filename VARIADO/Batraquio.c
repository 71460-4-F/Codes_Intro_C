#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	int qV1[50], qV2[50];
	int cont, V1, V2;
	int auxiliar;
	scanf("%d", &V1);

	for (cont = 1; cont <= V1; cont++)
	{
		scanf("%d", &qV1[cont]);
	}
	scanf("%d", &V2);

	for (cont = 1; cont <= V2; cont++)
	{
		scanf("%d", &qV2[cont]);
	}

	for (cont = 0; cont < V1; cont++)
	{
		for (cont = 0; cont < V2; cont++)
		{
			if (qV1[cont] == qV2[cont])
			{
				auxiliar++;
			}
		}
	}

	if (auxiliar >= V1)
	{
		printf("sim");
	}
	else if (auxiliar < V1)
	{
		printf("nao");
	}

	return 0;
}
