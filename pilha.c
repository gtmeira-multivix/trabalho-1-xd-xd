#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

typedef struct no 
{
  Token token;
  struct no *prox;
} No;

struct pilha 
{
  No *primeiro;
};

Pilha* pilha_criar() 
{
	Pilha *p = (Pilha*) malloc(sizeof(Pilha));
	p->primeiro = NULL;
	return p;
}

void pilha_push(Pilha *p, Token t) 
{
	No *n = (No*) malloc(sizeof(No));
	n->token = t;
	n->prox = p->primeiro;
	p->primeiro = n;
}

Token pilha_pop(Pilha *p) 
{
	Token  t;
	if(p->primeiro == NULL) 
	{
	printf("Pilha vazia\n");
	return t;
	}
	
	No *tmp = p->primeiro;
	t = tmp->token;
	p->primeiro = tmp->prox;
	free(tmp);
	return t;
}

Token pilha_primeiro(Pilha *p) 
{
	return p->primeiro->token;  
}

int pilha_vazia(Pilha *p) 
{
	if(p->primeiro == NULL) 
	{
	printf("pilha vazia!\n");
	return 1;
	} else {
		return 0;
	}
}

void pilha_destruir(Pilha *p) 
{
	No *tmp = p->primeiro;
	while(tmp != NULL) 
	{
		No *excluir = tmp;
		tmp = tmp->prox;
		free(excluir);
	}
	free(p);
}

void pilha_imprimir(Pilha *p) 
{
	No *tmp = p->primeiro;
	while(tmp != NULL) 
	{
	token_imprimir(tmp->token);
	tmp = tmp->prox;
	}
}
