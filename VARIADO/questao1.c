#include <stdio.h>
int main()
{
	float n1, n2, n3, n4, m;
	printf("digite as quatro notas:\n");
	scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
	m = (n1 + n2 + n3 + n4) / 4;
	if (m <= 10 && m >= 8.7)
	{
		printf("conceito A\n");
	}
	if (m <= 8.6 && m >= 7.4)
	{
		printf("conceito B\n");
	}
	if (m <= 7.3 && m >= 5.0)
	{
		printf("conceito C\n");
	}
	if (m <= 4.9 && m == 0.0)
	{
		printf("conceito D\n");
	}

	return 0;
}
