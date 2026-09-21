#ifndef VETOR_H
#define VETOR_H

typedef struct {
    int *dados;
    int tamanho_alocado;
    int tamanho_ocupado;
} Vetor;

void append(Vetor *v, int valor);
void show(Vetor *v);
void slice(Vetor *v, int x0, int x1);
void pop(Vetor *v);

#endif