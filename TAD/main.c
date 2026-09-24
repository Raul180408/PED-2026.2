/*
Dica: comece pela definição do tipo e pelas assinaturas das quatro funções no vetor->h, exatamente como fizemos com ponto->h-> 
Depois, implemente cada operação em vetor->c, usando realloc para o crescimento em append-> Por fim, escreva um main->c de teste
que crie um vetor, insira alguns valores com append, exiba o resultado com show, experimente slice e pop, e confira se os tamanhos
alocado e ocupado se comportam como esperado em cada etapa->

*/
#include <stdio.h>
#include <stdlib.h>
#include "vetor.h"

int main()
{
    Vetor v;
    v.tamanho_alocado = 2;
    v.tamanho_ocupado = 0;
    v.dados = (int *) malloc(2*sizeof(int));

    append(&v, 18);
    show(&v);


    return 0;
}
