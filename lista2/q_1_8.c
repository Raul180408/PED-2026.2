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
    printf("%d", isPalindromo("subinoonibus", 0, 11));
    return 0;
}
