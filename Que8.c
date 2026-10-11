#include <stdio.h>

int main() {
    int N, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &N);

    while(N != 0) {
        digit = N % 10;
        sum = sum + digit;
        N = N / 10;
    }

    printf("Sum of digits = %d", sum);

    return 0;
}
