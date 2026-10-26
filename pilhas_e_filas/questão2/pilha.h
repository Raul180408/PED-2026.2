#ifndef pilha
#define pilha

typedef struct {
    char *dados;           // ponteiro para o início do bloco contíguo
    int tamanho_alocado;  // posições reservadas
    int topo;             // antes chamado tamanho_ocupado
} Pilha;

Pilha *criar(int capacidade);
void push(Pilha *p, char valor);
char pop(Pilha *p);
void liberar(Pilha *P);

#endif