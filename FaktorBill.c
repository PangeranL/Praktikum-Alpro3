#include <stdio.h>
#include <stdio.h>

int main() {
    int N, i;
    printf("Masukkan bilangan N: ");
    scanf("%d", &N);

    for (i = 1; i <= N/2; i++) {
        if (N % i == 0) {
            printf("%d ", i);
            printf("%d ", N/i);
        }
    }

    printf("%d\n", N);

    return 0;
}
