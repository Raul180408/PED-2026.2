#ifndef FILA_H
#define FILA_H

typedef struct {
    int *dados;
    int capacidade;  // posições do array (fixa)
    int inicio;      // índice da frente: próximo elemento a sair
    int fim;         // índice da próxima posição livre: onde o próximo entra
    int tamanho;     // quantidade de elementos na fila
} Fila;

Fila *criar(int capacidade);
int enqueue(Fila *f, int valor);
int dequeue(Fila *f);
void liberar(Fila *f);

#endif