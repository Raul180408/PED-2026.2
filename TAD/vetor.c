/*
Exercício: TAD Vetor
Implemente, seguindo a mesma estrutura modularizada apresentada neste capítulo (vetor.h e vetor.c), um TAD chamado Vetor que representa
um array dinâmico de inteiros — ou seja, um array que cresce automaticamente conforme novos elementos são adicionados.

O TAD deve ser definido com os seguintes campos:

dados: um ponteiro para inteiro (int *), apontando para o primeiro elemento do array alocado dinamicamente;

tamanho_alocado: um inteiro indicando quantas posições foram reservadas na memória;

tamanho_ocupado: um inteiro indicando quantas dessas posições estão, de fato, em uso.

A distinção entre tamanho_alocado e tamanho_ocupado é o que permite ao array crescer de forma eficiente: em vez de realocar memória a 
cada novo elemento inserido,reservamos espaço extra e só realocamos quando esse espaço se esgota.


Implemente as seguintes operações sobre o TAD Vetor:

append(v, valor): adiciona valor ao final do vetor v. Antes de inserir, verifique se tamanho_ocupado já atingiu tamanho_alocado; se sim,
dobre o tamanho_alocado (realocando a memória) antes de inserir o novo elemento. Ao final, atualize tamanho_ocupado.

show(v) — imprime, de forma organizada, todos os elementos atualmente ocupados do vetor v (não imprima posições alocadas mas não usadas).

slice(v, x0, x1) — retorna um novo Vetor contendo cópias dos elementos de v no intervalo [x0, x1]. O novo vetor deve ser criado com
tamanho_alocado igual exatamente ao número de elementos copiados (sem espaço extra).
pop(v) — remove o último elemento do vetor v atualizando tamanho_ocupado (não é necessário reduzir a memória alocada).

Dica: comece pela definição do tipo e pelas assinaturas das quatro funções no vetor.h, exatamente como fizemos com ponto.h. 
Depois, implemente cada operação em vetor.c, usando realloc para o crescimento em append. Por fim, escreva um main.c de teste que crie um vetor, insira alguns valores com append, exiba o resultado com show, experimente slice e pop, e confira se os tamanhos alocado e ocupado se comportam como esperado em cada etapa.

*/
/*
#include <stdio.h>
#include <stdlib.h>
#include "vetor.h"

void append(Vetor *v, int valor){
    if (v->tamanho_ocupado == v->tamanho_alocado){
        v = (int *) realloc(v, (2*v->tamanho_alocado)*sizeof(int) );
        v->tamanho_alocado *= 2;
    }
    v->dados[(v->tamanho_ocupado+1)] = valor;
    v->tamanho_ocupado++;
}

void show(Vetor *v){
    printf("[");
    for (int i=0; i<(v->tamanho_ocupado) ; i++){
        printf(" %d, ", v->dados[i]);
    }
    printf("]");

}

void slice(Vetor *v, int x0, int x1){
    

}

void pop(Vetor *v){


}
*/
#include <stdio.h>
#include <stdlib.h>
#include "vetor.h"

void append(Vetor *v, int valor)
{
    if (v->tamanho_ocupado == v->tamanho_alocado) {

        v->tamanho_alocado *= 2;
        v->dados = realloc(v->dados, v->tamanho_alocado * sizeof(int));
    }

    v->dados[(v->tamanho_ocupado)] = valor;
    v->tamanho_ocupado++;
}


void show(Vetor *v)
{
    printf("[");
    for (int i = 0; i < v->tamanho_ocupado; i++) {
        printf("%d", v->dados[i]);
        if (i < v->tamanho_ocupado - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}


Vetor *slice(Vetor *v, int x0, int x1) // ???
{
    Vetor novo;

    int qtd = x1 - x0 + 1; // a diferença entre os índices + 1 para incluir o elemento final já que vai de 0 até n-1

    novo.tamanho_alocado = qtd;
    novo.tamanho_ocupado = qtd;

    novo.dados = malloc(qtd * sizeof(int));

    for (int i = 0; i < qtd; i++) {
        novo.dados[i] = v->dados[x0 + i];
    }
    
    return novo;
}

void pop(Vetor *v)
{
    if (v->tamanho_ocupado > 0) {
        v->tamanho_ocupado--;
    }
}