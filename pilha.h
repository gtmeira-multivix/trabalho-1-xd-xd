#ifndef _PILHA_H
#define _PILHA_H

#include "tokenizacao.h"

typedef struct pilha 
{
	double *dados;
	int tamanho;
	int topo;
} Pilha;

/*
 * Cria uma nova pilha vazia.
 */
Pilha* pilha_criar(int tamanho)
{
	Pilha *p = (Pilha*) malloc(sizeof(Pilha));
	p->topo = 0;
	p->dados = (double*) malloc(tamanho*sizeof(double));
	p->tamanho = tamanho;
	return p;
}

/*
 * Adiciona elemento no topo da pilha.
 */
void pilha_push(Pilha *p, Token t)
{
	if(p->topo >= p->tamanho) 
	{
		printf("Pilha cheia!\n");
		return;
	}
	p->dados[p->topo] = t;
	p->topo++
}

/*
 * Retira elemento do início da pilha.
 */
Token pilha_pop(Pilha *p)
{
	if(p->topo == 0) 
	{
		printf("Pilha vazia!\n");
		return 0;
	}
	p->topo--;
	return p->dados[p->topo];
}

/*
 * Retorna o primeiro elemento da pilha, sem retirá-lo.
 */
Token pilha_primeiro(Pilha *p)
{
	p->topo;
	return p->dados[p->topo];
}

/*
 * Retorna 1 se a pilha estiver vazia ou 0 caso contrário.
 */
int pilha_vazia(Pilha *p)
{

   if(p->topo==NULL)
   {
      return 1;
   }
   else
   {
	return 0;
	}
}

/*
 * Destrói a pilha e seus elementos.
 */
void pilha_destruir(Pilha *p)
{
	free(p->dados);
	free(p)
}

/*
 * Imprime todos os elementos na pilha atualmente.
 */
void pilha_imprimir(Pilha *p)
{
    int i;
    
    if(top==-1)
    {
        printf("\nA pilha esta vazia!\n");
    }
    else
    {
        printf("\nOs elementos da pilha sao:\n");
        for(i=topo;i>=0;--i)
            printf("%d\n\t",pilha[i]);
    }
}

#endif
