#include <stdlib.h>
#include "lista.h"

void lista_inicializa(lista_t *lista)
{
        pedaco_t novo;
        novo.local.x = 0;
        novo.local.y = 0;
        lista->sent = cria_elem_lista(novo, NULL, NULL);
        lista->sent->prox = lista->sent->ant = lista->sent;
}

posicao_t cria_elem_lista(pedaco_t novo, posicao_t ant, posicao_t prox)
{
        posicao_t aux;
        aux = (posicao_t)malloc(sizeof(*aux));
        if (aux == NULL)
        {
                erro("Acabou a mem�ria");
        }
        if ((ant != NULL) || (prox != NULL))
        {
                aux->prox = ant->prox;
                aux->ant = prox->ant;
        }
        aux->dado = novo;
        return aux;
}

void lista_destroi(lista_t *lista)
{
        posicao_t p;
        p = lista->sent->prox;
        while (p != lista->sent)
        {
                posicao_t vitima;
                vitima = p;
                p = p->prox;
                free(vitima);
        }
        lista->sent = NULL;
}

/* retorna a posicao do primeiro elemento da lista ou NULL se lista vazia */
posicao_t lista_inicio(lista_t *lista)
{
        int nterm;
        posicao_t prim;
        nterm = lista_quant(lista);
        if (nterm > 0)
        {
                prim = lista->sent->prox;
                return prim;
        }
        else
        {
                return NULL;
        }
}

/* retorna a posicao do ultimo elemento da lista ou NULL se lista vazia */
posicao_t lista_final(lista_t *lista)
{
        int nterm;
        posicao_t ult;
        nterm = lista_quant(lista);
        if (nterm > 0)
        {
                ult = lista->sent->ant;
                return ult;
        }
        else
        {
                return NULL;
        }
}

/* insere dado apos pos (se pos for NULL, insere no inicio da lista) */
void lista_ins_depois(pedaco_t termo, lista_t *lista, posicao_t pos)
{
        elem_lista_t *aux;
        posicao_t prox, ant;
        if (pos == NULL)
        {
                ant = lista->sent;
                prox = lista->sent->prox;
        }
        else
        {
                ant = pos;
                prox = pos->prox;
        }
        aux = cria_elem_lista(termo, ant, prox);
        ant->prox = aux;
        prox->ant = aux;
        lista->sent->dado.local.x++;
}

/* insere dado antes de pos (se pos for NULL, insere no final da lista) */
void lista_ins_antes(pedaco_t termo, lista_t *lista, posicao_t pos)
{
        elem_lista_t *aux;
        posicao_t prox, ant;
        if (pos == NULL)
        {
                ant = lista->sent->ant;
                prox = lista->sent;
        }
        else
        {
                ant = pos->ant;
                prox = pos;
        }
        aux = cria_elem_lista(termo, ant, prox);
        ant->prox = aux;
        prox->ant = aux;
        lista->sent->dado.local.x++;
}

/* remove o elemento na posicao pos */
void lista_rem_posicao(lista_t *lista, posicao_t pos)
{
        posicao_t anterior;
        posicao_t proximo;
        anterior = pos->ant;
        proximo = pos->prox;
        anterior->prox = proximo;
        proximo->ant = anterior;
        free(pos);
        lista->sent->dado.local.x--;
}

/* retorna o dado contido na posicao pos */
pedaco_t lista_dado_posicao(lista_t *lista, posicao_t pos)
{
        pedaco_t valor;
        testa_posicao(pos); /* Testa a validade da posi��o pos */
        valor = pos->dado;
        return valor;
}

/* retorna a posicao do elemento que segue o elemento na posicao pos
   (ou NULL, se pos representa o ultimo elemento ou se pos for NULL) */
posicao_t lista_avanca_posicao(lista_t *lista, posicao_t pos)
{
        posicao_t proximo;
        testa_posicao(pos); /* Testa a validade da posi��o pos */
        if (pos->prox == lista->sent)
        {
                proximo = NULL;
        }
        else
        {
                proximo = pos->prox;
        }
        return proximo;
}

/* retorna a posicao do elemento que antecede o elemento na posicao pos
   (ou NULL, se pos representa o primeiro elemento ou se pos for NULL) */
posicao_t lista_recua_posicao(lista_t *lista, posicao_t pos)
{
        posicao_t anterior;
        testa_posicao(pos); /* Testa a validade da posi��o pos */
        if (pos->ant == lista->sent)
        {
                anterior = NULL;
        }
        else
        {
                anterior = pos->ant;
        }
        return anterior;
}

/* retorna o numero de elementos da lista */
int lista_quant(lista_t *lista)
{
        int elem;
        elem = lista->sent->dado.local.x;
        return elem;
}

void testa_posicao(posicao_t pos)
{
        if (pos == NULL)
        {
                erro("Posicao NULA\n");
        }
        if ((pos->prox == NULL) || (pos->ant == NULL) || (pos->prox->ant != pos) || (pos->ant->prox != pos))
        {
                erro("Posicao Inv�lida\n");
        }
}
