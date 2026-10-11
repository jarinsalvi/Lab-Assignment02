#include <stdio.h>

int main() {
    int N, digit, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &N);

    while(N != 0) {
        digit = N % 10;
        reverse = reverse * 10 + digit;
        N = N / 10;
    }

    printf("Reverse = %d", reverse);

    return 0;
}
