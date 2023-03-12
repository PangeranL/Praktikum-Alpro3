#include <stdio.h>
#include <stdio.h>
#include <stdbool.h>

int main() {
    int N;
    printf("Masukkan bilangan N: ");
    scanf("%d", &N);

    bool prime[N+1];
    for (int i = 0; i <= N; i++) {
        prime[i] = true;
    }

    for (int i = 2; i * i <= N; i++) {
        if (prime[i] == true) {
            for (int j = i * i; j <= N; j += i) {
                prime[j] = false;
            }
        }
    }

    printf("Bilangan prima dari 1 hingga %d adalah: ", N);
    for (int i = 2; i <= N; i++) {
        if (prime[i] == true) {
            printf("%d ", i);
        }
    }

    return 0;
}
