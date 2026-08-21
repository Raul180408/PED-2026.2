/*
3.6. Fatorial
Leia um número inteiro N (não negativo) e calcule N! usando um laço. Trate corretamente o caso N = 0.
*/
int main()
{
    int n, i=0, fat=1;
    do {
        printf("Digite n para calcular o fatorial: ");
        scanf("%d", &n);
        if(n <= 0){
            i++;
            printf("valor inválido!");
        }
        else{
            for (int j = 2; j<=n; j++){
                fat *= j;
            }
            printf("O fatorial de %d é %d", n, fat);
        }
    }while (i);
    

    return 0;
}
