#ifndef LISTA_H
#define LISTA_H

typedef struct No {
    int valor;           // um valor primitivo
    struct No *proximo;  // ponteiro para o próximo nó
} No;

typedef struct {
    No *cabeca;           // um valor primitivo
    int tamanho;         // ponteiro para o próximo nó
} Lista;

void insert(Lista l, int pos, int valor);
void show(Lista l);
int acessar(Lista l, int pos);
void remover(Lista l, int pos);
void liberar(Lista l);



#endif