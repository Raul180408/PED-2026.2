#include <stdio.h>

void dec2bin(int n){
    if (n == 0) return;
    else{
        printf("%d", n%2);
        dec2bin(n/2);
    }
}

int main(){
    dec2bin(13);
    return 0;
}