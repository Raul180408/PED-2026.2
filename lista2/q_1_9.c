#include <stdio.h>

void dec2bin(int n){
    if (n == 0) return;
    else{
        printf("%d", n%2);
        dec2bin(n/2);
    }
}

int main(){
    dec2bin(5);
    return 0;
}
/*
ex: n = 5

    printf(5%2)  ---> 1
    dec2bin(5/2) -> 2
    printf(2%2)  ---> 0
    dec2bin(2/2) -> 1
    printf(1%2)  ---> 1
    dec2bin(1/2) -> 0
    n==0, -> fim
    resultado: 101
*/