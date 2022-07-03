#include <stdio.h>
#include <stdlib.h>
int main()
{
	char resp1 = 0;
	char resp2 = 0;
	char resp3 = 0;
	char resp4 = 0;
	char sair = 0;
	int acert = 0;
	printf(" Jogo de nivel de conhecimento sobre harry potter (By Tiago Arruda) Quixada-CE 10/05/2016\n\n");
	do
	{
		printf("pergunta 01\nQue casa pertencia harry potter e seus amigos?\na) Hufflepuff\nb) Ravenclaw\nc) Slytherin\nd) Gryffindor\n");
		scanf("%c", &resp1);
		if (resp1 == 'a' || resp1 == 'b' || resp1 == 'c')
		{
			printf("resposta errada %d acertos\n\n", acert);
		}
		else if (resp1 == 'd')
		{
			acert = acert + 1;
			printf("resposta correta %d acertos\n\n", acert);
		}
		else
		{
			fflush(stdin);
			printf("resposta invalida! Tente novamente\n");
			printf("pergunta 01\nQue casa pertencia harry potter e seus amigos?\na) Hufflepuff\nb) Ravenclaw\nc) Slytherin\nd) Gryffindor\n");
			scanf("%c", &resp1);
			if (resp1 == 'a' || resp1 == 'b' || resp1 == 'c')
			{
				printf("resposta errada %d acertos\n\n", acert);
			}
			else if (resp1 == 'd')
			{
				acert = acert + 1;
				printf("resposta correta %d acertos\n\n", acert);
			}
			else
			{
				fflush(stdin);
				printf("resposta invalida! Tente novamente\n");
				printf("pergunta 01\nQue casa pertencia harry potter e seus amigos?\na) Hufflepuff\nb) Ravenclaw\nc) Slytherin\nd) Gryffindor\n");
				scanf("%c", &resp1);
				if (resp1 == 'a' || resp1 == 'b' || resp1 == 'c')
				{
					printf("resposta errada %d acertos\n\n", acert);
				}
				else if (resp1 == 'd')
				{
					acert = acert + 1;
					printf("resposta correta %d acertos\n\n", acert);
				}
			}
		}
		fflush(stdin); // isso talvez resolvera

		printf("pergunta 02\nQual nome verdadeiro do personagem o qual e conhecido por aquele que nao deve ser nomeado?\na) Tom Riddle\nb) Draco Malfoy\nc) Bellatrix Lestrange\nd) Pedro Pettigrew\n");
		scanf("%c", &resp2);
		if (resp2 == 'b' || resp2 == 'c' || resp2 == 'd')
		{
			printf("resposta errada continua com %d acertos\n\n", acert);
		}
		else if (resp2 == 'a')
		{
			acert = acert + 1;
			printf("voce acertou e tem %d acertos agora\n\n", acert);
		}
		else
		{
			printf("resposta invalida!\n");
		}

		fflush(stdin); // isso talvez resolvera

		printf("pergunta 03\nQuais dessa opçoes nao e uma Reliquia da Morte?\na) A varinha de sabugueiro\nb) A pedra da ressurreicao\nc) A pedra filosofal\nd) A capa de invisibilidade\n");
		scanf("%c", &resp3);
		if (resp3 == 'a' || resp3 == 'b' || resp3 == 'd')
		{
			printf("resposta errada continua com %d acertos\n\n", acert);
		}
		else if (resp3 == 'c')
		{
			acert = acert + 1;
			printf("voce acertou e tem %d acertos agora\n\n", acert);
		}
		else
		{
			printf("resposta invalida!\n");
		}

		fflush(stdin); // isso talvez resolvera esvazia o buffer
		printf("pergunt 04\nministerio da magia proibiu o uso de 3 feitiços, conhecidos como asmaldições imperdoaveis, por ela possuirem carater maligno e o objetivo cruel.Marque opcao abaixo que nao corresponde a umas das maldicoes imperdoaveis:\na) Crucio\nb) Imperio\nc) Avada Kedavra\nd) Expecto Patronum\n");
		scanf("%c", &resp4);
		if (resp4 == 'a' || resp4 == 'b' || resp4 == 'c')
		{
			printf("resposta errada continua com %d acertos\n\n", acert);
		}
		else if (resp4 == 'd')
		{
			acert = acert + 1;
			printf("voce acertou e tem %d acertos agora\n\n", acert);
		}
		else
		{
			printf("resposta invalida!\n");
		}
		printf("seu nivel de conhecimento sobre o assunt\n");
		if (acert == 0)
		{
			printf("nunca existiu\n");
		}
		else if (acert == 1)
		{
			printf("jaouviu falar\n");
		}
		else if (acert == 2)
		{
			printf("interessado no assnto\n");
		}
		else if (acert == 3)
		{
			printf("fa\n");
		}
		else
		{
			printf("super fa\n");
		}
		fflush(stdin);
		printf("\aquer sair?\nsim(s)     nao(n)\n");
		scanf("%c", &sair);
	} while (sair != 's');

	return 0;
}
