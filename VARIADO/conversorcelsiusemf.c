#include <stdio.h>
#include <stdlib.h>
int main()
{

	int contador;
	for (contador = 1; contador > 0; contador++)
	{

		int c, f;
		printf("digite uma temperatura em celcius: ");
		scanf("%d", &c);
		f = c * 1.8 + 32;
		printf("a temperatura %d celcius em fahrennheit E : %d\n\n\n ", c, f);

		int F, C;
		printf("digite a temperatura em fahrenheit: ");
		scanf("%d", &F);
		C = (F - 32) / 1.8;
		printf("a temperratura %d f em celcius E %d\n", F, C);
	}

	return 0;
}
