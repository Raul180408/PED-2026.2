/*
5. Crie uma função adiciona_valor(int *v, int tamanho, int valor, int pos),
que adiciona o valor ao array v na posição pos. Se a posição for maior que 
o tamanho do array, use a função realloc para alocar uma nova posição para o array.
*/
#include <stdio.h>
#include <stdlib.h>


void adiciona_valor(int *v, int tamanho, int valor, int pos){
    if (pos >= tamanho){
        v = (int *) realloc(v, (tamanho+1)*sizeof(int));
    }
    v[pos] = valor;
    
}

int main()
{
    int *v;  
    v = (int *) calloc(2, sizeof(int));

    adiciona_valor(v, 2, 24, 1);
    printf("%d", v[1]);
    return 0;
}
