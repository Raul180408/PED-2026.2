#include <stdio.h>

int isPalindromo(char palavra[], int inicio, int fim){
    if (inicio > fim){
        return 1;
    }

    else if(palavra[inicio] != palavra[fim]){
        return 0;
    }
    return isPalindromo(palavra, inicio+1, fim-1);
}

int main()
{
    printf("%d", isPalindromo("subinoonibus", 1, 14));
    return 0;
}
/*
ex: osso -> inicio = 0, fim = 3

    osso[0](o) == osso[3](o) -> ispalindromo("osso",0+1, 3-1)
    osso[1](s) == osso[2](s) -> ispalindromo("osso",1+1, 2-1)
        inicio (2) > fim (1) -> 1
*/