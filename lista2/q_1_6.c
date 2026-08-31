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