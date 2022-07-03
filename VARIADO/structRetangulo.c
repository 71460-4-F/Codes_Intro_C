#include <stdio.h>
#include <stdlib.h>
//   ou  typedef struct{ float b; float a;} Retangulo;
struct retangulo
{
	float b; // base
	float a; // altura
};
typedef struct retangulo Retangulo;

int main(void)
{
	Retangulo ret;
	printf("digite a base do retangulo\n");
	scanf("%f", &ret.b);
	printf("digite a altura do retangulo\n");
	scanf("%f", &ret.a);
	float area = ret.b * ret.a;
	printf("area = %.2f\n\n", area);
}
