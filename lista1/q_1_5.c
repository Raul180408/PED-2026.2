// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int seg, min, hr;
    printf("Digite um tempo em segundos: ");
    scanf("%d", &seg);
    min = seg / 60;
    seg = seg%60;
    hr = min/60;
    min = min%60;
    printf("%d horas %d minutos %d segundos", hr, min, seg);

    return 0;
}