#include <stdio.h>
int main(void)
{
	int a1, a2, soma, repete;
	repete = 0;
	// ESTRUTURA DO;WHILE
	do
	{
		a1 = a2 = soma = 0;
		printf("Digite o primeiro valor do somatorio\t\t");
		scanf("%i", &a1);
		printf("Digite o ultimo valor do somatorio\t\t");
		scanf("%i", &a2);
		// ESTRUTURA WHILE
		while (a1 <= a2)
		{
			soma = soma + a1;
			a1 = a1 + 1;
		}
		// FIM WHILE
		printf("O valor da somatoria é:\t\t>>>>%i\n\n", soma);
		printf("DESEJA REALIZAR OUTRA SOMATORIA?DIGITE:\n\\t\tSIM(1)\t\tNÃO(0)");
		scanf("%i", &repete);
	} while (repete);
	// FIM DO;WHILE

	return 0;
}
