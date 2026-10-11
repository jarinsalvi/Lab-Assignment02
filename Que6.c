#include <stdio.h>

int main() {
    int N, count = 0;

    printf("Enter a number: ");
    scanf("%d", &N);

    if(N == 0) {
        count = 1;
    } else {
        while(N != 0) {
            N = N / 10;
            count++;
        }
    }

    printf("Number of digits = %d", count);

    return 0;
}
