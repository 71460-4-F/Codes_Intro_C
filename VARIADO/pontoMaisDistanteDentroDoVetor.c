#include <stdio.h>	//  UFC - Quixadá - CE   22/11/2016
#include <stdlib.h> //           by Tiago A. F
#include <math.h>

typedef struct
{ // sruct de um ponto
	float x;
	float y;
} Ponto;

float distancia_ponto(Ponto p1, Ponto p2)
{ // função que encontra a distancia entre dois pontos
	float distancia = (p1.x - p2.x) * (p1.x - p2.x) * (p1.y - p2.y) * (p1.y - p2.y);
	distancia = sqrt(distancia);
	return distancia;
}
int main(void)
{
	int n; // quantidade de pontos que o usuario deseja
	printf("digite a quantidade de pontos\n");
	scanf("%d", &n);
	Ponto vet[n]; // vetor que quadara os pontos digitados
	for (int i = 0; i < n; i++)
	{
		printf("digite os pontos \n");
		scanf("%f %f", &vet[i].x, &vet[i].y);
	}
	int indice_n1; // indice de referncia do ponto dentro do vetor
	int indice_n2; //...
	float maior = 0.0;
	for (int k = 0; k < n; k++)
	{ // testa todos de k com todos de i, em busca da maior distancia
		for (int i = 0; i < n; i++)
		{
			float dist = distancia_ponto(vet[k], vet[i]);
			if (dist > maior)
			{
				maior = dist;  // var maior recebendo a maior distacia calculada
				indice_n1 = i; // quardando a localização dos pontos que geraram a maior distacia
				indice_n2 = k; //...
			}
		}
	}
	printf("os ponto mais distantes sao (%.2fx , %.2fy)  e   (%.2fx , %.2fy) \n",
		   vet[indice_n1].x, vet[indice_n1].y, vet[indice_n2].x, vet[indice_n2].y);

	return 0;
	exit(0);
}
