#include <stdio.h>

int main(){
    int num;
    
    printf("Informe um númeor: ");
    scanf("%d", &num);
    
    if (num%2 == 0){
        printf("O número iformado é par");
    }
    else{
        printf("O numero informado é ímpar");
    }
    
    return 0;
}