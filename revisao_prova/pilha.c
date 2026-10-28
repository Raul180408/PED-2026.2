#include <stdio.h>

void f(int n) {
    if (n == 0) {
        return;
    }
    printf("%d ", n);
    f(n - 1);
    printf("%d ", n);
}

int main()
{
    f(3);
    return 0;
}
