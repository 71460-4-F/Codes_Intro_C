#include <stdio.h>
#include <math.h>

int main(void)
{
	double A, B, C, delta;
	double raiz_delta = 0.0;
	scanf("%lf %lf %lf", &A, &B, &C);
	delta = (B * B) - 4 * A * C;
	raiz_delta = sqrt(delta);
	if (delta > 0 && 2 * A > 0)
	{
		printf("R1 = %.5lf\n", (-B + raiz_delta) / (2 * A));
		printf("R2 = %.5lf\n", (-B - raiz_delta) / (2 * A));
	}
	else
	{
		printf("Impossivel calcular\n");
	}
	return 0;
}
