#include <stdio.h>

// A B C D e F 4        (6-2)%6 = 
// C D e F A   2 (-2)   ()
// e F A C     0 (-2)
// A C e       2 (+2)%3
// e A         0 (+2)%2
// e           0
/*
5-2 = 3%5 = 6
4-2 = 2%4 = 5
3-2 = 1%4 = 
*/

int josefo(int n, int k){
    if(n==1){
        return 0;
    }
    else{
        josefo((n-1), k);
        return (n-k)%n;
    }
}

int main(){
    printf("%d", josefo(9, 5));
    return 0;
}