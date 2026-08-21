#include <stdio.h>

int par(int a){
    if (a%2==0){
        return 1;
    }
    else{
        return 0;
    }
}

int tamanhoSequenciaCollatz(long n){
    int passos=0;
    while (n != 1)
    {
        if (par(n)){
            n = n/2;
            passos++;

        }
        else{
            n = 3*n + 1;
            passos++;
        }
    }
    return passos;
}

int main()
{
    int n, maior;
    printf("Digite um número entre 1 e 100.000: ");
    scanf("%d",&n);

    printf("\nO número de passos para o número digitado chegar a 1 por collatz é %d\n", tamanhoSequenciaCollatz(n));

    for (int i=2; i<n; i++){
        if (tamanhoSequenciaCollatz(i) > tamanhoSequenciaCollatz(i+1)){
            maior = i;
        }
        else if (tamanhoSequenciaCollatz(i) < tamanhoSequenciaCollatz(i+1)){
            maior = i+1;
        }
        else{
            maior = i+1;
        }
        printf("Passos para %d chegar em 1: %d\n", i, tamanhoSequenciaCollatz(i));
    }
    printf("\no número com maios número de passos é %d\n com %d passos.\n\n", maior, tamanhoSequenciaCollatz(maior));

    return 0;
}
