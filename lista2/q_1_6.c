#include <stdio.h>

void intervalo(int a, int b){
    if (a == b) 
    {
        printf("%d\n", b);
        return;
    }
    else{
        printf("%d\n", a);
        intervalo(a+1, b);
    }
}

int main(){
    intervalo(1, 10);
    return 0;
}
/*
ex: 1 a 5

    printf(1)
    intervalo(1+1, 5)
    printf(2)
    intervalo(2+1, 5)
    printf(3)
    intervalo(3+1, 5)
    printf(4)
    intervalo(4+1, 5)
    a == b, printf(5)
    
*/