#include <stdio.h>

int main() {
    int i, N;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &N);

    if(N < 0) {
        printf("Factorial is not defined for negative numbers.");
    } else {
        for(i = 1; i <= N; i++) {
            fact = fact * i;
        }

        printf("Factorial = %lld", fact);
    }

    return 0;
}
