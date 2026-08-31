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