#include <stdio.h>

int fat(int n){
    if (n==2){
        return 2;
    }
    else{
        return n * fat(n-1);
    }
}

int main() {
    printf("7! = %lld", fat(7));
    return 0;
}

/*
ex: 5!

5 * fat(4) --> 5 * 4 * 3 * 2 = 120
4 * fat(3) --> 4 * 3 * 2
3 * fat(2) --> 3 * 2
    fat(2) --> 2
*/