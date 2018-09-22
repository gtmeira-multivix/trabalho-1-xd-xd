#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

typedef struct no {
  Token token;
  struct no *prox;
} No;

struct pilha {
  No *primeiro;
};

Pilha* pilha_criar() {
	Pilha *p = (Pilha*) malloc(sizeof(Pilha));
	p->topo = 0;
	p->dados = (double*) malloc(tamanho*sizeof(double));
	p->tamanho = tamanho;
	return p;

}

void pilha_push(Pilha *p, Token t) {
	if(p->topo >= p->tamanho) {
	printf("Pilha cheia!\n");
	return;
}

Token pilha_pop(Pilha *p) {
	if(p->topo == 0) {
	printf("Pilha vazia!\n");
	return 0;
}

Token pilha_primeiro(Pilha *p) {
	return p->primeiro->token;  
}

int pilha_vazia(Pilha *p) {
	if(p->inicio == NULL) {
	printf("pilha vazia!\n");
	return 0;}

}

void pilha_destruir(Pilha *p) {
	free(p->dados);
	free(p);
}

void pilha_imprimir(Pilha *p) {
	No *tmp = p->primeiro;

	while(tmp != NULL) {
	token_imprimir(tmp->token);
	tmp = tmp->prox;}
}
