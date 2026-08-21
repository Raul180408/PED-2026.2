#include <stdio.h>

int main() {
    int n_exp=0, n_cob=0, tot_c=0, tot_r=0, tot_s=0, total=0;
    char cob;

    printf("Digite a quantidade de experimentos: ");
    scanf("%d", &n_exp);
    for (int i=0; i < n_exp; i++){
        printf("\nDigite a quantidade de cobaias: ");
        scanf("%d", &n_cob);
        printf("\nDigite R para rato\n");
        printf("Digite S para sapo\n");
        printf("Digite C para coelho\n");
        printf("\nDigite qual a cobaia: ");
        scanf(" %c", &cob);
        if (cob == 'R'|| cob == 'r'){
            tot_r += n_cob;
        }
        else if (cob == 'S'|| cob == 's'){
            tot_s += n_cob;
        }
        else if (cob == 'C'|| cob == 'c'){
            tot_c += n_cob;
        }
        else{
            printf("cobaia inválida");
            i--;
            continue;
        }

    }
    total = tot_s+tot_r+tot_c;
    printf("\nTotal de cobaias     : %d\n", total);
    printf("Total de Coelhos     : %d\n", tot_c);
    printf("Total de Ratos       : %d\n", tot_r);
    printf("Total de Sapos       : %d\n", tot_s);
    if (total > 0){
        printf("Percentual de coelhos: %f%\n", ((float)tot_c/total)*100);
        printf("Precentual de ratos  : %f%\n", ((float)tot_r/total)*100);
        printf("Percentual de sapos  : %f%\n", ((float)tot_s/total)*100);
    }
    return 0;
}