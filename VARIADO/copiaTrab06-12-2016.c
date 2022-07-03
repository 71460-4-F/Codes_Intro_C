#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

typedef struct
{ // Struct Base de dados
	Politico vetor_poli[100];
	int quantidade; // quantidade de politicos adicionado pelo usuário
} BaseDados;

Politico add_politico(BaseDados base)
{ // função add politico
	Politico politico;
	printf("\n\n");
	printf("   Digite o nome: ");
	getchar(); // limpa o buffer do teclado
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
	printf("\n   Cadastro realizado com sucesso!\n");

	base.vetor_poli[base.quantidade] = politico;
	base.quantidade++;
	return politico;
}

// Politico del_politico(BaseDados base){ // função deletar politico

void menu(void)
{ // função para chamar as outras funçoes do menu
	BaseDados dados;
	dados.quantidade = 0;
	// Ex: Politico po = dados.vetor[1];
	int opcao; // opçoes do menu
			   // carregar_dados(dados);
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
			add_politico(dados);
		}
		else if (opcao == 2)
		{
			// del_politico(dados);
		}
		else if (opcao == 3)
		{
			// buscar_apelido(dados);
		}
		else if (opcao == 4)
		{
			// relatorio_completo(dados);
		}
		else if (opcao == 5)
		{
			// editar_valor_numero_propina(dados);
		}
		else if (opcao == 6)
		{
			// valor_total_propina(dados);
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
