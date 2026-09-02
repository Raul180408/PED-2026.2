#include <stdio.h>

void intervalo(int a, int b){
    if (a == b) 
    {
        printf("%d\n", b);
        return;
    }
    else{
        printf("%d\n", b);
        intervalo(a, b-1);
    }
}

int main(){
    intervalo(1, 10);
    return 0;
}
/*
ex: 2 a 6

    printf(6)
    intervalo(2, 6-1)
    printf(5)
    intervalo(2, 5-1)
    printf(4)
    intervalo(2, 4-1)
    printf(3)
    intervalo(2, 3-1)
    a == b --> printf(2)

*/