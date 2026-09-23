#include <stdio.h>
#include <stdlib.h>
#include "vetor.h"

int main()
{
    Vetor v;

    v.tamanho_alocado = 2;
    v.tamanho_ocupado = 0;

    v.dados = malloc(v.tamanho_alocado * sizeof(int));

    printf("Inicial:\n");
    printf("Alocado: %d\n", v.tamanho_alocado);
    printf("Ocupado: %d\n\n", v.tamanho_ocupado);

    append(&v, 10);
    append(&v, 20);

    printf("Depois de 2 append:\n");
    show(&v);

    printf("Alocado: %d\n", v.tamanho_alocado);
    printf("Ocupado: %d\n\n", v.tamanho_ocupado);


    append(&v, 30);

    printf("Depois de adicionar 30:\n");
    show(&v);

    printf("Alocado: %d\n", v.tamanho_alocado);
    printf("Ocupado: %d\n\n", v.tamanho_ocupado);


    append(&v, 40);
    append(&v, 50);

    printf("Depois de adicionar 40 e 50:\n");
    show(&v);

    printf("Alocado: %d\n", v.tamanho_alocado);
    printf("Ocupado: %d\n\n", v.tamanho_ocupado);


    Vetor s = slice(&v, 1, 3); // ???

    printf("Slice [1, 3]:\n");
    show(&s);

    printf("Alocado: %d\n", s.tamanho_alocado);
    printf("Ocupado: %d\n\n", s.tamanho_ocupado);


    pop(&v);

    printf("Depois do pop:\n");
    show(&v);

    printf("Alocado: %d\n", v.tamanho_alocado);
    printf("Ocupado: %d\n\n", v.tamanho_ocupado);


    free(v.dados);
    free(s.dados);

    return 0;
}