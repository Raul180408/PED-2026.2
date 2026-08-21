#include <stdio.h>

int main(){
    int n, num, ac = 0;
    printf("n: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++){
        printf("digite o %dº número: ", i+1);
        scanf("%d", &num);
        ac += num;
        printf("\n");
    }
    printf("soma final = %d", ac);

    return 0;
}