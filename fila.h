#ifndef _FILA_F
#define _FILA_H

#include "tokenizacao.h"


typedef struct fila
{
	Fila* fila_criar();
	Fila *f = (Fila*) malloc(sizeof(Fila));
	f->primeiro = NULL;
	f->ultimo = NULL;
	return f;
} Fila;

void fila_adicionar(Fila *f, Token t)
{
	No *n = (No*) malloc(sizeof(No));
	n->t = t;
	n->prox = NULL;
	if(f->fim == NULL) 
	{
		f->primeiro = n;
		f->ultimo = n;
		return;
	}
	f->ultimo->prox = n;
	f->ultimo = n;
};

Token fila_remover(Fila *f)
{
	No *excluir = f->inicio;
	f->inicio = f->inicio->prox;
	if(f->inicio == NULL) 
	{
		f->fim = NULL;
	}
	Token = excluir->t;
	free(excluir);
	return info;
};

int fila_vazia(Fila *f);
{
	if(f->size==0)
	{
		printf("A fila esta vazia!\n");
		return 1;
	}
};
return 0;

void fila_destruir(Fila *f);

/*
 * Imprime os elementos da fila.
 */
void fila_imprimir(Fila *f)
{
	printf("%d\n", primeiro->Fila);
	primeiro = primeiro->ultimo;
};

#endif
