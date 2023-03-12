#include <stdio.h>
#include <stdio.h>

int main() {
    int N, totalFaktor = 0;
    printf("Masukkan bilangan N: ");
    scanf("%d", &N);

    for (int i = 1; i < N; i++) {
        if (N % i == 0) {
            totalFaktor += i;
        }
    }

    if (totalFaktor == N) {
        printf("%d adalah bilangan sempurna\n", N);
    } else {
        printf("%d bukan bilangan sempurna\n", N);
    }

    return 0;
}
