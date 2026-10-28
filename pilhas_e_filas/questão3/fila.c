#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

Fila *criar(int capacidade) {
    Fila *f = malloc(sizeof(Fila));
    f->dados = malloc(capacidade * sizeof(int));
    f->capacidade = capacidade;
    f->inicio = 0;
    f->fim = 0;
    f->tamanho = 0;
    return f;
}


int enqueue(Fila *f, int valor) {
    if (f->tamanho == f->capacidade)
        return 0;                            // fila cheia: nada foi inserido
    f->dados[f->fim] = valor;
    f->fim = (f->fim + 1) % f->capacidade;   // fila circular!!!
    f->tamanho++;
    return 1;                                // inserido com sucesso
}

int dequeue(Fila *f) {
    if (f->tamanho == 0) {
        printf("Fila vazia\n");
        exit(1);
    }
    int valor = f->dados[f->inicio];
    f->inicio = (f->inicio + 1) % f->capacidade;  // fila circular!!!
    f->tamanho--;
    return valor;
}

void liberar(Fila *f) {
    free(f->dados);
    free(f);
}
