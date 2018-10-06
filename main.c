#include <stdio.h>
#include <math.h>
#include "pilha.h"
#include "fila.h"
#include "tokenizacao.h"

int main() {
	
	printf("Digite uma expressão:\n");
	Token t = token_proximo();
	Pilha *p = pilha_criar();
	Fila *f = fila_criar();
	
	while(t.tipo != FIM && t.tipo != ERRO) {
		pilha_push(p, t);
		fila_adicionar(f, t);
		t = token_proximo();
	}
	
	printf("Testando a pilha:\n");
	while(pilha_vazia(p) != 0) {
		Token tok = pilha_pop(p);
		token_imprimir(tok);
	}
	
	printf("Testando a fil:\n");
	while(fila_vazia(f) != 0) {
		Token tok = fila_remover(f);
		token_imprimir(tok);
	}
	
	return 0;
}
