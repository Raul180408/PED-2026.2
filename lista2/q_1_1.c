/*
Implemente uma função recursiva que recebe um inteiro n e retorna a soma dos valores inteiros no intervalo de 1 a n.
Ex: 
Entrada: 7
Saída: 28
*/
#include <stdio.h>

int intervalo(int n){
    if (n==1){
        return 1;
    }
    else{
        return n + intervalo(n-1);
    }
}

int main() {
    printf("%d", intervalo(7));

    return 0;
}
/*
n = 7

7 + intervalo(7) -> 7 + 6 + 5 + 4 + 3 + 2 + 1 + 1 = 28
6 + intervalo(6) -> 6 + 5 + 4 + 3 + 2 + 1 + 1
5 + intervalo(5) -> 5 + 4 + 3 + 2 + 1 + 1
4 + intervalo(4) -> 4 + 3 + 2 + 1 + 1
3 + intervalo(3) -> 3 + 2 + 1 + 1
2 + intervalo(2) -> 2 + 1 + 1
1 + intervalo(1) -> 1 + 1  
intervalo(1)     -> 1 
*/