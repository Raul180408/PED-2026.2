#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
/*
insert(l, pos, valor): insere valor no meio da lista, 
de modo que o novo nó passe a ocupar a posição pos 
(os nós que estavam a partir de pos são empurrados uma posição adiante). 
Com pos == 0 o novo nó vira a cabeça e com pos == tamanho equivale 
a um append. Trate posições inválidas de forma segura e atualize tamanho.
*/
void insert(Lista *l, int pos, int valor) {
    No *atual = l->cabeca, *prox, *novo;
    novo = (No *) malloc(sizeof(No));
    for (int i = 0; i < pos && atual != NULL; i++)
        atual = atual->proximo;      // um salto por posição
    if (atual == NULL){              // posição não existe
        printf("Posição não existe\n");
        exit(1); // encerra o programa
    }
    prox = atual->proximo;
    atual->proximo = novo;
    novo->proximo = prox;
    novo->valor = valor;
    l->tamanho++;
}


/*
show(l): imprime, de forma organizada, 
todos os elementos da lista, percorrendo 
os ponteiros até NULL (por exemplo: 10 -> 20 -> NULL).
*/
void show(Lista *l) {
    No *atual = l->cabeca;
    while (atual != NULL) {
        printf("%d -> ", atual->valor);
        atual = atual->proximo;   // o ponteiro diz onde está o próximo
    }
    printf("NULL\n");
}


/*
acessar(l, pos): devolve o valor na posição pos, caminhando nó a nó. Trate posições inválidas de forma segura.
*/
int acessar(Lista *l, int pos) {
    No *atual = l->cabeca;
    for (int i = 0; i < pos && atual != NULL; i++)
        atual = atual->proximo;      // um salto por posição
    if (atual == NULL){              // posição não existe
        printf("Posição não existe\n");
        exit(1); // encerra o programa
    }    
    return atual->valor;
}


/*
remover(l, pos): remove o nó da posição pos, 
redirecionando os ponteiros, liberando sua memória com free e atualizando tamanho.
*/



/*
liberar(l): libera todos os nós restantes ao final do programa.
*/

void liberar(Lista *l){
    No *atual = l->cabeca, *prox;
    for (int i=0; i < l->tamanho; i++){
        prox = atual->proximo;
        
    }
    for (i; i>0; i--){
        
    }

}
