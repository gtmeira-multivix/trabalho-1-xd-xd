#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

typedef struct no {
  Token token;
  struct no *prox;
} No;

struct fila {
  No *primeiro, *ultimo;
};

Fila* fila_criar() {
	Fila*f= (Fila*)malloc(sizeof(Fila));
	f->primeiro = NULL;
	f->ultimo= NULL;
	return f;
}

void fila_adicionar(Fila *f, Token t) {
	No *n = (No*) malloc(sizeof(No));
	n->info = info;
	n->prox = NULL;
	
	if(f->fim == NULL) {
		f->primeiro = n;
		f->ultimo = n;
		return;
}

	f->fim->prox = n;
	f->fim = n;

}

Token fila_remover(Fila *f) {
	if(f->inicio == f->fim) {
	printf("Fila vazia!\n");
	return 0
}

int fila_vazia(Fila *f) {
	if(f->inicio == NULL) {
		printf("Fila vazia!\n");
		return 0;
}

void fila_destruir(Fila *f) {
	free(f->dados);
	free(f);

}

void fila_imprimir(Fila *f) {
	No *tmp = f->primeiro;

	while(tmp != NULL) {
	token_imprimir(tmp->token);
	tmp = tmp->prox;}
