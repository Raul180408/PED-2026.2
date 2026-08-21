#include <stdio.h>

int main(){
    int n, pares = 0;
    printf("n: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++){
        if (i%2==0){
            pares += 1;
        }
    }
    printf("tem %d números pares no intervalo de 0 a %d.", pares, n);

    return 0;
}