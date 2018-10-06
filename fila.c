#include <stdio.h> 
#include <stdlib.h> 
#include "fila.h"

typedef struct no 
{
    Token token;
    struct no *prox;
}
No;

struct fila 
{
    No *primeiro, *ultimo;
};

Fila *fila_criar() 
{
    Fila *f = (Fila *) malloc(sizeof(Fila));
    f->primeiro = NULL;
    f-> ultimo = NULL;
    return f;
}

void fila_adicionar(Fila *f, Token t) 
{
    No * n = (No *) malloc(sizeof(No));
    n-> token = t;
    n-> prox = NULL;

    if (f-> ultimo == NULL) {
        f -> primeiro = n;
        f -> ultimo = n;
        return;
    }

    f -> ultimo -> prox = n;
    f -> ultimo = n;

}

Token fila_remover(Fila * f) 
{
    Token t;
    if (f -> primeiro == NULL) 
	{
        printf("Fila vazia!\n");
        return t;
    }

    No *excluir = f -> primeiro;
    f -> primeiro = f -> primeiro -> prox;
    if (f -> primeiro == NULL) 
	{
        f -> ultimo = NULL;
    }
    t = excluir -> token;
    free(excluir);
    return t;

}

int fila_vazia(Fila *f) 
{
    if (f -> primeiro == NULL) 
	{
        printf("Fila vazia!\n");
        return 1;
    } else {
    	return 0;
	}
}

void fila_destruir(Fila * f) 
{
    No * tmp = f -> primeiro;
    while (tmp != NULL) 
	{
        No * excluir = tmp;
        tmp = tmp -> prox;
        free(excluir);
    }
    free(f);

}

void fila_imprimir(Fila * f) 
{
    No * tmp = f -> primeiro;

    while (tmp != NULL) 
	{
        token_imprimir(tmp -> token);
        tmp = tmp -> prox;
    }
}
