#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
	float x;
	float y;
} Ponto;

float distancia_ponto(Ponto p1, Ponto p2)
{
	float distancia = (p1.x - p2.x) * (p1.x - p2.x) * (p1.y - p2.y) * (p1.y - p2.y);
	distancia = sqrt(distancia);
	return distancia;
}
int main(void)
{
	Ponto p;
	printf("digite o ponto de referencia\n");
	scanf("%f %f", &p.x, &p.y);
	int n;
	printf("digite a quantidade de pontos\n");
	scanf("%d", &n);
	Ponto vet[n];
	for (int i = 0; i < n; i++)
	{
		printf("digite os pontos \n");
		scanf("%f %f", &vet[i].x, &vet[i].y);
	}

	int indice_n;
	float maior = 0.0;
	for (int i = 0; i < n; i++)
	{

		float dist = distancia_ponto(p, vet[i]);

		if (dist > maior)
		{
			maior = dist;
			indice_n = i;
		}
	}
	printf("ponto mais distante = %f %f", vet[indice_n].x, vet[indice_n].y);

	return 0;
}
