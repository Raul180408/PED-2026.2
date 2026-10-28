#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main()
{
    int n, k, x;
    
    printf("n: ");
    scanf("%d", &n);
    printf("k: ");
    scanf("%d", &k);

    Fila *f = criar(n);              
    for (int i = 1; i <= n; i++)
        enqueue(f, i);
 
    printf("ordem de eliminação: \n");
    while (f->tamanho > 1) {
        for (int i = 0; i < k - 1; i++) {    
            x = dequeue(f);
            enqueue(f, x);               
        }
        printf(" %d\n", dequeue(f));      
    }
    printf("\nvencedor: %d\n", dequeue(f));
 
    liberar(f);
    return 0;
}
