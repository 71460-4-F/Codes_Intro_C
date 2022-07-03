#include <stdio.h>
#include <stdlib.h>
#define Vezes 15

int main()
{
	char codigo;
	float compra_avi = 0, t_avista = 0;
	float compra_pra = 0, t_prazo = 0;
	float t_compras = 0, parcela = 0;
	int cont = 0;

	while (cont < Vezes)
	{
		printf("digite o codigo da compra \n");
		scanf("%c", &codigo);
		switch (codigo)
		{
		case 'v':
			printf("digite o valor:  ");
			scanf("%f", &compra_avi);
			t_avista += compra_avi;
			break;

		case 'p':
			printf("digite o valor:  ");
			scanf("%f", &compra_pra);
			t_prazo += compra_pra;
			break;
		default:
			printf("codigo invalido! Digite novamente\n");
			break;
		}
		cont++;
	}
	printf("total das compras a vista = %.2f \n", t_avista);
	printf("total das compras a prazo = %.2f \n", t_prazo);
	t_compras = t_avista + t_prazo;
	parcela = t_prazo / 3.0;
	printf("total de compras = %.2f \n", t_compras);
	printf("valor da prestacao 1 das compras a prazo = %2.f \n", parcela);

	return 0;
}
