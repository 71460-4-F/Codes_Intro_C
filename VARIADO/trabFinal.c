#include <stdio.h>	// UFC - Quixadá - Ce 14/12/2016
#include <stdlib.h> //     By:  Tiago A. Fontenele
#include <string.h> //          Prof. Fabio Dias
#define N_POLI 100	// capacidade de cadastros

// structs que foram utilizadas:
typedef struct
{ // struct do politico
	char nomeCompleto[100];
	char apelido[30];
	char partido[10];
	char cargo[50];
	double propiMensal;
	int vezesRecebeu;
	int quantidade;
} Politico;

typedef struct
{ // Struct Base de dados
	Politico vetor_poli[N_POLI];
	// int quantidade; // quantidade de politicos adicionado pelo usuário
} BaseDados;

// funçoes que serão utilizadas:
void menu();
void visual();
// carregar_dados();
Politico add_politico(BaseDados dados);
void escrever_arquivo(BaseDados dados);
void del_politico();
// buscar_apelido(dados);
void relatorio_completo();
// void editar_valor_numero_propina();
// void valor_total_propina();
void del_tudo(void);
// void zerar_vetor_poli(void);
// void print_vetor_poli(void);
// void salvar_dados(void);

int main(void)
{ // função principal
	visual();
	menu();
	return 0;
}

// abaixo estão as funçoes

void visual(void)
{ // função visual tela azul e nome do programa
	system("time/t");
	system("date/t");
	system("color 1F");
	printf("   ##################################################################################################################################################################\n   ");
	printf("                                                                    S  Y  S  P  R  O  P  I                                                    2016 - Version 1.0\n");
	printf("   ##################################################################################################################################################################\n   ");
}

Politico add_politico(BaseDados dados)
{ // função add politico
	Politico politico;
	printf("\n\n");
	printf("   Cadastro  %d\n", politico.quantidade);
	printf("   Digite o nome: ");
	scanf(" %[^\n]", politico.nomeCompleto);
	printf("   Digite o apelido: ");
	scanf(" %[^\n]", politico.apelido);
	printf("   Digite o partido: ");
	scanf(" %[^\n]", politico.partido);
	printf("   Digite o cargo: ");
	scanf(" %[^\n]", politico.cargo);
	printf("   Digite o valor da propina mensal: ");
	scanf("%lf", &politico.propiMensal);
	printf("   Digite a quantidade de vezes: ");
	scanf("%d", &politico.vezesRecebeu);
	printf("\n   Cadastro realizado com sucesso!\n\n");
	dados.vetor_poli[politico.quantidade] = politico;
	politico.quantidade++;
	printf("   dados no vetor : \n");
	int i;
	for (i = 0; i < 20; i++)
	{
		printf("  valor de i = %d\n", i);
		printf("   nome: %s\n", dados.vetor_poli[i].nomeCompleto);
		printf("   apelido: %s\n", dados.vetor_poli[i].apelido);
		printf("   partido: %s\n", dados.vetor_poli[i].partido);
		printf("   cargo: %s\n", dados.vetor_poli[i].cargo);
		printf("   v propina: %.2lf\n", dados.vetor_poli[i].propiMensal);
		printf("   vezes %d\n", dados.vetor_poli[i].vezesRecebeu);
		printf("\n\n");
	}
	return politico;
	// escrever_arquivo(dados); // chama a função de gravar no arquivo
}

void del_politico(BaseDados dados)
{ // função excluir politico
	FILE *arq;
	char caminho[] = "dados.txt";
	if ((arq = fopen(caminho, "r")) == NULL)
	{ // "r" ler
		printf("\n\n\n    Arquivo %s nao pode ser aberto\n\n", caminho);
		exit(1);
	}
	int i;
	int num_cad; // numero do cadas a ser excluido
	i = num_cad;
	printf("\n\n\n\n");
	printf("   Digite o numero do cadastro que deseja excluir: ");
	scanf(" %d", &num_cad);
	fscanf(arq, "%d", &dados.vetor_poli[i].quantidade);
	fscanf(arq, " %[^\n]", dados.vetor_poli[i].nomeCompleto);
	fscanf(arq, " %[^\n]", dados.vetor_poli[i].apelido);
	fscanf(arq, " %[^\n]", dados.vetor_poli[i].partido);
	fscanf(arq, " %[^\n]", dados.vetor_poli[i].cargo);
	fscanf(arq, "%lf ", &dados.vetor_poli[i].propiMensal);
	fscanf(arq, "%d ", &dados.vetor_poli[i].vezesRecebeu);
	printf("\n");
	printf("   Cadastro %d\n", num_cad);
	printf("   Nome: %s\n", dados.vetor_poli[i].nomeCompleto);
	printf("   Apelido: %s\n", dados.vetor_poli[i].apelido);
	printf("   Partido: %s\n", dados.vetor_poli[i].partido);
	printf("   Cargo: %s\n", dados.vetor_poli[i].cargo);
	printf("   Propina Recebida: R$ %.2lf\n", dados.vetor_poli[i].propiMensal);
	printf("   Vezes que recebeu: %d\n", dados.vetor_poli[i].vezesRecebeu);
	printf("   Total de Propina Recebida: R$ %.2lf\n", dados.vetor_poli[i].propiMensal * dados.vetor_poli[i].vezesRecebeu);
	fclose(arq); // Fechando o arquivo
	printf("\n");
	printf("   Confirmar Exclusao? \n    SIM (S)   NAO (N): ");
	char resposta;
	scanf(" %c", &resposta);
	if ((resposta == 's') || (resposta == 'S'))
	{
		FILE *arq;
		char caminho[] = "dados.txt";
		if ((arq = fopen(caminho, "r+")) == NULL)
		{ //  "r+"  leitura e escrita
			printf("\n\n\n    Arquivo %s nao pode ser aberto\n\n", caminho);
			exit(1);
		}
		printf("\n\n");
		fprintf(arq, "%d", i);
		fprintf(arq, "%s\n", dados.vetor_poli[i].nomeCompleto);
		fprintf(arq, "%s\n", dados.vetor_poli[i].apelido);
		fprintf(arq, "%s\n", dados.vetor_poli[i].partido);
		fprintf(arq, "%s\n", dados.vetor_poli[i].cargo);
		fprintf(arq, "%lf ", dados.vetor_poli[i].propiMensal);
		fprintf(arq, "%d ", dados.vetor_poli[i].vezesRecebeu);
		printf("\n\n");
		printf("   Os dados do politico foram excluidos com sucesso!\n\n");
		system("pause");
		fclose(arq); // Fechando o arquivo
	}
	else
	{
		printf("\n\n   Os dados do politico nao foram excluidos. \n\n");
		fclose(arq); // Fechando o arquivo
		system("pause");
	}
	fclose(arq);
	system("cls");
	visual();
	fclose(arq); // Fechando o arquivo
}

void relatorio_completo(BaseDados dados)
{
	FILE *arq;
	char caminho[] = "dados.txt";
	if ((arq = fopen(caminho, "r")) == NULL)
	{
		printf("\n\n\n   Arquivo %s nao pode ser aberto\n", caminho);
		exit(1);
	}
	int i;
	int auxi;
		auxi = dados.vetor_poli[i].quantidade);
		for (i = 1; i < auxi; i++)
		{
			fscanf(arq, "%d", &dados.vetor_poli[i].quantidade);
			fscanf(arq, " %[^\n]", dados.vetor_poli[i].nomeCompleto);
			fscanf(arq, " %[^\n]", dados.vetor_poli[i].apelido);
			fscanf(arq, " %[^\n]", dados.vetor_poli[i].partido);
			fscanf(arq, " %[^\n]", dados.vetor_poli[i].cargo);
			fscanf(arq, "%lf ", &dados.vetor_poli[i].propiMensal);
			fscanf(arq, "%d ", &dados.vetor_poli[i].vezesRecebeu);
			printf("\n");
			printf("   Cadastro %d\n", i);
			printf("   Nome: %s\n", dados.vetor_poli[i].nomeCompleto);
			printf("   Apelido: %s\n", dados.vetor_poli[i].apelido);
			printf("   Partido: %s\n", dados.vetor_poli[i].partido);
			printf("   Cargo: %s\n", dados.vetor_poli[i].cargo);
			printf("   Propina Recebida: R$ %.2lf\n", dados.vetor_poli[i].propiMensal);
			printf("   Vezes que recebeu: %d\n", dados.vetor_poli[i].vezesRecebeu);
			printf("   Total de Propina Recebida: R$ %.2lf\n", dados.vetor_poli[i].propiMensal * dados.vetor_poli[i].vezesRecebeu);
			printf("\n");
		}
		fclose(arq);
		printf("\n\n\n");
		system("pause");
		system("cls");
		visual();
}

void escrever_arquivo(BaseDados dados)
{ // função para gravar
	FILE *arq;
	char caminho[] = "dados.txt";
	if ((arq = fopen(caminho, "a")) == NULL)
	{
		printf("\n\n\n   Arquivo %s nao pode ser aberto\n\n", caminho);
		exit(1);
	} // sem nescessidade de um for ou while, é feito o aproveitamento do valor de dados.quantidade!
	fprintf(arq, "%d\n", dados.quantidade);
	fprintf(arq, "%s\n", dados.vetor_poli[dados.quantidade].nomeCompleto);
	fprintf(arq, "%s\n", dados.vetor_poli[dados.quantidade].apelido);
	fprintf(arq, "%s\n", dados.vetor_poli[dados.quantidade].partido);
	fprintf(arq, "%s\n", dados.vetor_poli[dados.quantidade].cargo);
	fprintf(arq, "%.2lf\n", dados.vetor_poli[dados.quantidade].propiMensal);
	fprintf(arq, "%d\n", dados.vetor_poli[dados.quantidade].vezesRecebeu);
	fclose(arq); // Fechando o arquivo
}

void del_tudo()
{ // função para deletar o arquivo dados.txt
	remove("dados.txt");
	printf("\n\n\n   Todos os dados foram excluidos!\n");
}

void print_vetor_poli(BaseDados dados)
{
	printf("   dados no vetor : \n");
	// printf("   %d\n", dados.quantidade);
	int i;
	for (i = 0; i < 20; i++)
	{
		printf("   nome: %s\n", dados.vetor_poli[i].nomeCompleto);
		printf("   apelido: %s\n", dados.vetor_poli[i].apelido);
		printf("   partido: %s\n", dados.vetor_poli[i].partido);
		printf("   cargo: %s\n", dados.vetor_poli[i].cargo);
		printf("   v propina: %.2lf\n", dados.vetor_poli[i].propiMensal);
		printf("   vezes %d\n", dados.vetor_poli[i].vezesRecebeu);
		printf("\n\n");
	}
}

void menu(void)
{ // função para chamar as outras funçoes do menu
	BaseDados dados;
	dados.quantidade = 1;
	int opcao; // opçoes do menu
			   // carregar_dados(dados);
	do
	{
		printf("\n\n\n\n\n");
		printf("   MENU CADASTRO DE PROPINAS\n\n");
		printf("   (1) Adicionar Politico\n");
		printf("   (2) Excluir politico \n");
		printf("   (3) Buscar politico por apelido \n");
		printf("   (4) Listar todos os Politico com o total de propina recebida. \n");
		printf("   (5) Modificar valor e numeros da propina do politico \n");
		printf("   (6) Calcular o valor total de propina paga\n");
		printf("   (7) Excluir todos os dados.\n");
		printf("   (8) zerar vetor poli.\n");
		printf("   (9) print vetor poli.\n");
		printf("   (0) Sair do programa\n\n\n");
		printf("   Por favor, digite a opcao desejada:  ");
		scanf("%d", &opcao);
		getchar();
		system("cls");
		visual();
		if (opcao == 1)
		{
			add_politico(dados);
			// dados.quantidade = dados.quantidade +1;
		}
		else if (opcao == 2)
		{
			del_politico(dados);
			dados.quantidade = dados.quantidade - 1;
		}
		else if (opcao == 3)
		{
			// buscar_apelido(dados);
		}
		else if (opcao == 4)
		{
			relatorio_completo(dados);
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
			del_tudo();
		}
		else if (opcao == 8)
		{
			// zerar_vetor_poli();
		}
		else if (opcao == 9)
		{
			print_vetor_poli(dados);
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
