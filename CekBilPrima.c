#include <stdio.h>
#include <stdio.h>

int main() {
    int N, i, count = 0;
    printf("Masukkan bilangan N: ");
    scanf("%d", &N);

    for (i = 2; i <= N/2; i++) {
        if (N % i == 0) {
            count++;
        }
    }

    if (count == 0) {
        printf("Bilangan %d adalah bilangan prima\n", N);
    } else {
        printf("Bilangan %d bukan bilangan prima\n", N);
    }

    return 0;
}
