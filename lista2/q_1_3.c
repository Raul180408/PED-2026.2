#include <stdio.h>
//  {1, 3, 9, 27, 81, 243,...} x3
// considerando 1º termo com índice 0
long long int enesimo(int n){
    if (n == 0){
        return 1;
    }
    else{
        return 3 * enesimo(n-1);
    }
}

int main() {
    printf("%d", enesimo(5));

    return 0;
}
/*
ex: n = 5,  6º termo 

3 * enesimo(4) --> 3 * 3 * 3 * 3 * 3 * 1 = 243
3 * enesimo(3) --> 3 * 3 * 3 * 3 * 1 = 81
3 * enesimo(2) --> 3 * 3 * 3 * 1 = 27
3 * enesimo(1) --> 3 * 3 * 1 = 9
3 * enesimo(0) --> 3 * 1 = 3
    enesimo(0) --> 1
*/