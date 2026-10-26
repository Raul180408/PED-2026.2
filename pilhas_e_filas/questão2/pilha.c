#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

Pilha *criar(int capacidade) {  // capacidade deve ser maior que 0
    Pilha *p = malloc(sizeof(Pilha));
    p->dados = malloc(capacidade * sizeof(char));
    p->tamanho_alocado = capacidade;
    p->topo = 0;
    return p;
}

void push(Pilha *p, char valor) {
    if (p->topo == p->tamanho_alocado) {  // bloco cheio: dobra a capacidade
        p->tamanho_alocado *= 2;
        p->dados = realloc(p->dados, p->tamanho_alocado * sizeof(char));
    }
    p->dados[p->topo] = valor;  // escreve na primeira posição livre
    p->topo++;                  // o topo sobe
}

char pop(Pilha *p) {
    if (p->topo == 0) {
        printf("Pilha vazia\n");
        exit(1);                 // encerra o programa
    }
    p->topo--;                   // o topo desce
    return p->dados[p->topo];    // devolve o elemento que estava no topo
}

void liberar(Pilha *p) {
    free(p->dados);
    free(p);
}

