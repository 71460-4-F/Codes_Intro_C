#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N_POLI 10 // numero de cadastro possiveis!

void visual(void)
{ // função visual tela azul e nome do programa
	system("time/t");
	system("date/t");
	system("color 1F");
	printf("   ##################################################################################################################################################################\n   ");
	printf("                                                                    S  Y  S  P  R  O  P  I                                                    2016 - Version 1.0\n");
	printf("   ##################################################################################################################################################################\n   ");
}

typedef struct
{ // struct do politico
	char nomeCompleto[100];
	char apelido[30];
	char partido[10];
	char cargo[50];
	double propiMensal;
	int vezesRecebeu;
} Politico;

int cont(int indice)
{	// funçõa para o indice ser incrementado
	// printf("o indice --->%d \n", indice);
	return indice += 1;
}

void add_politico(int indice)
{ // função add politico
	FILE *arq;
	char caminho[] = "Politicos.txt";
	if ((arq = fopen(caminho, "a")) == NULL)
	{
		printf("   Arquivo %s nao pode ser aberto\n", caminho);
		exit(1);
	}
	Politico politico[N_POLI]; // vetor dos politicos
							   // int indice;
							   // indice = 0;
	// indice = fscanf(arq,"%d\n", &indice + 2);

	printf("\n\n");
	printf("   Cadastro %d\n", indice); //  <<----- não estou conseguido criar uma variavel que seja incrementada
	fprintf(arq, "%d\n", indice);		// e que mantenha seu valor ao sair da função! Ex: cadastro 1, cadastro 2...
	printf("   Digite o nome: ");
	gets(politico[indice].nomeCompleto);
	fprintf(arq, "%s\n", politico[indice].nomeCompleto);
	printf("   Digite o apelido: ");
	scanf(" %[^\n]", politico[indice].apelido);
	fprintf(arq, "%s\n", politico[indice].apelido);
	printf("   Digite o partido: ");
	scanf(" %[^\n]", politico[indice].partido);
	fprintf(arq, "%s\n", politico[indice].partido);
	printf("   Digite o cargo: ");
	scanf(" %[^\n]", politico[indice].cargo);
	fprintf(arq, "%s\n", politico[indice].cargo);
	printf("   Digite o valor da propina mensal: ");
	scanf("%lf", &politico[indice].propiMensal);
	fprintf(arq, "%.2lf\n", politico[indice].propiMensal);
	printf("   Digite a quantidade de vezes: ");
	scanf("%d", &politico[indice].vezesRecebeu);
	fprintf(arq, "%d\n", politico[indice].vezesRecebeu);
	printf("\n\n   Cadastro realizado com sucesso!\n");
	indice++;

	fclose(arq);
}

void del_politico()
{
	int num_cad;
	printf("\n\n\n\n");
	printf("    Digite o numero do cadastro que deseja excluir: ");
	scanf(" %d", &num_cad);
	FILE *arq;
	char caminho[] = "Arquivo Politicos.txt";
	if ((arq = fopen(caminho, "r")) == NULL)
	{
		printf("    Arquivo %s nao pode ser aberto\n", caminho);
		exit(1);
	}
	Politico politico[N_POLI]; // vetor dos politicos
	int indice;
	indice = num_cad;
	fscanf(arq, "%d", &indice);
	fscanf(arq, " %[^\n]", politico[indice].nomeCompleto);
	fscanf(arq, " %[^\n]", politico[indice].apelido);
	fscanf(arq, " %[^\n]", politico[indice].partido);
	fscanf(arq, " %[^\n]", politico[indice].cargo);
	fscanf(arq, "%lf ", &politico[indice].propiMensal);
	fscanf(arq, "%d ", &politico[indice].vezesRecebeu);
	printf("\n\n");
	printf("   Cadastro %d\n", indice);
	printf("   Nome: %s\n", politico[indice].nomeCompleto);
	printf("   Apelido: %s\n", politico[indice].apelido);
	printf("   Partido: %s\n", politico[indice].partido);
	printf("   Cargo: %s\n", politico[indice].cargo);
	printf("   Propina Recebida: R$ %.2lf\n", politico[indice].propiMensal);
	printf("   Vezes que recebeu: %d\n", politico[indice].vezesRecebeu);
	printf("   Total de Propina Recebida: R$ %.2lf\n", politico[indice].propiMensal * politico[indice].vezesRecebeu);
	printf("\n");
	printf("   Confirmar Exclusao? \n    SIM (S)   NAO (N): ");
	char resposta;
	scanf(" %c", &resposta);
	if ((resposta == 's') || (resposta == 'S'))
	{
		//...
		printf("   Dados excluidos com sucesso!\n\n");
		system("pause");
	}
	else
	{
		printf("\n\n   O Arquivo nao foi excluido. \n\n");
		system("pause");
	}
	fclose(arq);
	system("cls");
	visual();
}

void buscar_apelido()
{
	char apeli[30];
	printf("\n\n\n   Digite o apelido: ");
	scanf(" %[^\n]", apeli);
}

void relatorio_completo(int indice)
{
	FILE *arq;
	char caminho[] = "Politicos.txt";
	if ((arq = fopen(caminho, "r")) == NULL)
	{
		printf("    Arquivo %s nao pode ser aberto\n", caminho);
		exit(1);
	}
	Politico politico[N_POLI]; // vetor dos politicos
	while (fscanf(arq, "%d", &indice) != EOF)
	{
		indice = fscanf(arq, "%d", &indice);
	}
	int i = 0;
	for (i = 0; i < indice; i++)
	{
		fscanf(arq, "%d", &indice);
		fscanf(arq, " %[^\n]", politico[indice].nomeCompleto);
		fscanf(arq, " %[^\n]", politico[indice].apelido);
		fscanf(arq, " %[^\n]", politico[indice].partido);
		fscanf(arq, " %[^\n]", politico[indice].cargo);
		fscanf(arq, "%lf ", &politico[indice].propiMensal);
		fscanf(arq, "%d ", &politico[indice].vezesRecebeu);
		printf("\n");
		printf("   Cadastro %d\n", indice);
		printf("   Nome: %s\n", politico[indice].nomeCompleto);
		printf("   Apelido: %s\n", politico[indice].apelido);
		printf("   Partido: %s\n", politico[indice].partido);
		printf("   Cargo: %s\n", politico[indice].cargo);
		printf("   Propina Recebida: R$ %.2lf\n", politico[indice].propiMensal);
		printf("   Vezes que recebeu: %d\n", politico[indice].vezesRecebeu);
		printf("   Total de Propina Recebida: R$ %.2lf\n", politico[indice].propiMensal * politico[indice].vezesRecebeu);
		printf("\n");
		// indice ++;
	}
	fclose(arq);
}

void menu(void)
{			   // função para chamar as outras funçoes do menu
	int opcao; // opçoes do menu
	int indice = 0;
	do
	{
		printf("\n\n\n\n\n");
		printf("   MENU CADASTRO DE PROPINAS\n\n");
		printf("   (1) Adicionar Politico\n");
		printf("   (2) Excluir politico \n");
		printf("   (3) Buscar politico por apelido \n");
		printf("   (4) Listar todos os Politico calculando o valor total da propina que cada politico recebeu \n");
		printf("   (5) Modificar valor e numeros da propina do politico \n");
		printf("   (6) Calcular o valor total de propina paga\n");
		printf("   (0) Sair do programa\n\n\n");
		printf("   Por favor, digite a opcao desejada:  ");
		scanf("%d", &opcao);
		getchar();
		system("cls");
		visual();

		if (opcao == 1)
		{
			indice = cont(indice);
			add_politico(indice);
		}
		else if (opcao == 2)
		{
			del_politico();
		}
		else if (opcao == 3)
		{
			buscar_apelido();
		}
		else if (opcao == 4)
		{
			relatorio_completo(indice);
		}
		else if (opcao == 5)
		{
			// editar_valor_numero_propina(dados);
		}
		else if (opcao == 6)
		{
			// valor_total_propina(dados);
		}
		else if (opcao == 7)
		{
		}
		else if (opcao == 0)
		{
			// salvar_dados();
			printf("\n\n\n\n\n\n\
		\t\t\t\t\t\t   P R O G R A M A   E N C E R R A D O ! \n\n");
			exit(1);
		}
		else
		{
			printf("\n\n\n\n   Opcao invalida! Tente novamente.\n");
		}
	} while (1);
}

int main(void)
{ // função principal
	visual();
	menu();
	return 0;
}
