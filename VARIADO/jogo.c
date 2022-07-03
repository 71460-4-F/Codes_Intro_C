#include <stdlib.h>
#include <time.h>

#include "jogo.h"
#include "tela.h"

/* faz todo o necessario para movimentar a cobra */
/* - movimenta a cabeca dependendo da direcao
   - detona com o rato, soma pontos, cria outro rato, se for o caso
   - acaba com o jogo se for o caso
*/
void cobra_movimenta(jogo_t *j)
{
	local_t l;
	posicao_t pos;
	pedaco_t dado;
	if (j->cobra.aumento == 0)
	{
		cobra_remove_rabo(&j->cobra);
	}
	else
	{
		j->cobra.aumento--;
	}
	pos = lista_inicio(&j->cobra.pedacos);
	dado = lista_dado_posicao(&j->cobra.pedacos, pos);
	l = local_avanca(dado.local, j->cobra.direcao);
	if (cobra_contem_local(&j->cobra, l))
		j->ativo = 0;
	cobra_adiciona_cabeca(&j->cobra, l);
	if (local_compara(l, j->rato))
	{
		j->pontos += 10;
		j->cobra.aumento += 2;
		cria_rato(j);
	}
}

void espera(jogo_t *j)
{
	int pont;
	pont = j->pontos;
	if (pont < 450)
		napms(500 - (pont / 50) * 50); /* Aumenta o N�vel a cada 50 Pontos at� o limite de 450 */
	else
		napms(50);
}

void cria_rato(jogo_t *j)
{
	do
	{
		j->rato.x = abs(random()) % LARGURA;
		j->rato.y = abs(random()) % ALTURA;
	} while (cobra_contem_local(&(j->cobra), j->rato));
}

void joga(jogo_t *jogo)
{
	while (jogo->ativo)
	{
		espera(jogo);

		verifica_teclado(jogo);
		cobra_movimenta(jogo);
		desenha_tela(jogo);
	}
}

void inicializa_jogo(jogo_t *j)
{
	cobra_inicializa(&(j->cobra));
	cobra_adiciona_cabeca(&(j->cobra), local(LARGURA / 2, ALTURA / 2));
	j->cobra.aumento = 6;
	j->cobra.direcao = leste;

	cria_rato(j);
	j->pontos = 0;
	j->ativo = 1;
}

int main(int argc, char *argv[])
{
	jogo_t jogo;

	atexit(desenha_finaliza);
	desenha_inicializa();
	srandom(time(0));
	inicializa_jogo(&jogo);
	desenha_tela(&jogo);

	joga(&jogo);

	desenha_finaliza();
}
