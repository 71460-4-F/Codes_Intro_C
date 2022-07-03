#include <stdio.h>
#include <stdlib.h>

int main()
{

	float valoradicional, imposto, valor_imposto, preco_custo, novo_preco;
	float preco;
	char tipo, refrigeracao;

	printf("Digite o preço\n");
	scanf("%f", &preco);
	printf("Digite qual o tipo\n A- Alimentação\n L- Limpeza\n V- Vestuárion\n");
	__fpurge(stdin);
	scanf("%c", &tipo);
	printf("O produto precisa de refrigeração? (Digite S ou N)\n");
	__fpurge(stdin);
	scanf("%c", &refrigeracao);

	if (tipo == 'A')
	{
		switch (refrigeracao)
		{
		case 'N':
			if (preco < 15)
			{
				valoradicional = 2;
				imposto = preco * 1.05;
				valor_imposto = imposto - preco;
				preco_custo = preco + valor_imposto;
				novo_preco = preco_custo + valoradicional;
				printf("O valor do Imposto é %.2f\n", valor_imposto);
				printf("O preço de custo é %.2f\n", preco_custo);
				printf("O valor adicional é R$%2.f\n", valoradicional);
				printf("O novo preço é R$%.2f\n", novo_preco);
				if (novo_preco <= 50)
				{
					printf("Barato\n");
				}
				if (novo_preco > 50 && novo_preco <= 100)
				{
					printf("Normal\n");
				}
				if (novo_preco > 100)
				{
					printf("Caro\n");
				}
			}
			if (preco >= 15)
			{
				valoradicional = 5;
				imposto = preco * 1.08;
				valor_imposto = imposto - preco;
				preco_custo = preco + valor_imposto;
				novo_preco = preco_custo + valoradicional;
				printf("O valor do Imposto é %.2f\n", valor_imposto);
				printf("O preço de custo é %.2f\n", preco_custo);
				printf("O valor adicional é R$%2.f\n", valoradicional);
				printf("O novo preço é R$%.2f\n", novo_preco);
				if (novo_preco < 50)
				{
					printf("Barato\n");
				}
				if (novo_preco >= 50 && novo_preco <= 100)
				{
					printf("Normal\n");
				}
				if (novo_preco > 100)
				{
					printf("Caro\n");
				}
			}
			break;

		case 'S':
			if (preco < 25)
			{
				valoradicional = 8;
				imposto = preco * 1.05;
				valor_imposto = imposto - preco;
				preco_custo = preco + valor_imposto;
				novo_preco = preco_custo + valoradicional;
				printf("O valor do Imposto é %.2f\n", valor_imposto);
				printf("O preço de custo é %.2f\n", preco_custo);
				printf("O valor adicional é R$%2.f\n", valoradicional);
				printf("O novo preço é R$%.2f\n", novo_preco);
				if (novo_preco < 50)
				{
					printf("Barato\n");
				}
				if (novo_preco >= 50 && novo_preco <= 100)
				{
					printf("Normal\n");
				}
				if (novo_preco > 100)
				{
					printf("Caro\n");
				}
			}
			if (preco >= 25)
			{
				valoradicional = 8;
				imposto = preco * 1.08;
				valor_imposto = imposto - preco;
				preco_custo = preco + valor_imposto;
				novo_preco = preco_custo + valoradicional;
				printf("O valor do Imposto é %.2f\n", valor_imposto);
				printf("O preço de custo é %.2f\n", preco_custo);
				printf("O valor adicional é R$%2.f\n", valoradicional);
				printf("O novo preço é R$%.2f\n", novo_preco);
				if (novo_preco < 50)
				{
					printf("Barato\n");
				}
				if (novo_preco >= 50 && novo_preco <= 100)
				{
					printf("Normal\n");
				}
				if (novo_preco > 100)
				{
					printf("Caro\n");
				}
			}
			break;
		}

		if (tipo == 'L')
		{
			switch (refrigeracao)
			{
			case 'N':
				if (preco < 10)
				{
					valoradicional = 1.50;
					imposto = preco * 1.05;
					valor_imposto = imposto - preco;
					preco_custo = preco + valor_imposto;
					novo_preco = preco_custo + valoradicional;
					printf("O valor do Imposto é %.2f\n", valor_imposto);
					printf("O preço de custo é %.2f\n", preco_custo);
					printf("O valor adicional é R$%2.f\n", valoradicional);
					printf("O novo preço é R$%.2f\n", novo_preco);
					if (novo_preco <= 50)
					{
						printf("Barato\n");
					}
					if (novo_preco > 50 && novo_preco <= 100)
					{
						printf("Normal\n");
					}
					if (novo_preco > 100)
					{
						printf("Caro\n");
					}
				}
				if (preco >= 10)
				{
					valoradicional = 2.50;
					imposto = preco * 1.08;
					valor_imposto = imposto - preco;
					preco_custo = preco + valor_imposto;
					novo_preco = preco_custo + valoradicional;
					printf("O valor do Imposto é %.2f\n", valor_imposto);
					printf("O preço de custo é %.2f\n", preco_custo);
					printf("O valor adicional é R$%2.f\n", valoradicional);
					printf("O novo preço é R$%.2f\n", novo_preco);
					if (novo_preco <= 50)
					{
						printf("Barato\n");
					}
					if (novo_preco > 50 && novo_preco <= 100)
					{
						printf("Normal\n");
					}
					if (novo_preco > 100)
					{
						printf("Caro\n");
					}
				}
				break;
			case 'S':
				if (preco < 25)
				{
					valoradicional = 4;
					imposto = preco * 1.05;
					valor_imposto = imposto - preco;
					preco_custo = preco + valor_imposto;
					novo_preco = preco_custo + valoradicional;
					printf("O valor do Imposto é %.2f\n", valor_imposto);
					printf("O preço de custo é %.2f\n", preco_custo);
					printf("O valor adicional é R$%2.f\n", valoradicional);
					printf("O novo preço é R$%.2f\n", novo_preco);
				}
				if (preco >= 25)
				{
					valoradicional = 4;
					imposto = preco * 1.08;
					valor_imposto = imposto - preco;
					preco_custo = preco + valor_imposto;
					novo_preco = preco_custo + valoradicional;
					printf("O valor do Imposto é %.2f\n", valor_imposto);
					printf("O preço de custo é %.2f\n", preco_custo);
					printf("O valor adicional é R$%2.f\n", valoradicional);
					printf("O novo preço é R$%.2f\n", novo_preco);
				}

				break;
			}
		}
		/*
		if(tipo=='V'){
		switch (refrigeracao){
			case 'N':
				if(preco<30){
					valoradicional=3;
				}
				if(preco>=30){
					valoradicional=2.50;
				}
			printf("O valor adicional é R$%.2f\n",valoradicional);
			break;
			case 'S':
				valoradicional=0;
			printf("O valor adicional é R$%2.f\n",valoradicional);
			break;
			}
		}
	 }*/

		return 0;
	}
}
