#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct ponto
{
	float x;
	float y;
};
typedef struct ponto Ponto;

int main()
{
	Ponto p1, p2;
	printf("digite os pontos \n");
	scanf("%f %f", &p1.x, &p1.y);
	scanf("%f %f", &p2.x, &p2.y);
	float distancia = (p1.x - p2.x) * (p1.x - p2.x) * (p1.y - p2.y) * (p1.y - p2.y);
	distancia = sqrt(distancia);
	printf("a adistancia e: %f \n", distancia);

	return 0;
}
