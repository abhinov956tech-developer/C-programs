#include <stdio.h>

int main() {
    int start, end, i, j, isPrime;

    printf("Enter the start of the range: ");
    scanf("%d", &start);

    printf("Enter the end of the range: ");
    scanf("%d", &end);

    printf("Prime numbers in the range %d to %d are: ", start, end);

    for(i = start; i <= end; i++) {
        if(i <= 1) {
            continue;
        }
        isPrime = 1; // Assume number is prime until proven it is not.
        for(j = 2; j * j <= i; j++) {
            if(i % j == 0) {
                isPrime = 0; // Number is not prime.
                break;
            }
        }
        if(isPrime) {
            printf("%d ", i);
        }
    }

    return 0;
}

