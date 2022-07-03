#include <stdio.h>
#include <stdlib.h>
typedef struct
{
	float b;
	float a;
} Retangulo;

float area_retangulo(Retangulo r)
{
	return r.b * r.a;
}

int main(void)
{
	int num_ret = 0;
	int cont = 0; // contador dos retangulos
	printf("digite o numero de retangulo\n");
	scanf("%d", &num_ret);
	Retangulo ret[num_ret]; // vet dos retangulos
	float area[num_ret];	// vetor p/ ir calculando logo as areas de cada retangulo...

	for (int i = 0; i < num_ret; i++)
	{
		printf("digite a base do %d retangulo\n", cont);
		scanf("%f", &ret[i].b);
		printf("digite a altura do %d retangulo\n", cont);
		scanf("%f", &ret[i].a);
		area[i] = ret[i].b * ret[i].a;
		cont++;
		printf("area do retangulo %d = %.2f\n\n", cont, area[i]);
	}

	for ()
		if (area[])
}
