#include <stdio.h>

int main(void) {
    int num;
    int isPrime = 1;

    printf("Enter an integer to check if it is prime: ");
    if (scanf("%d", &num) == 1) {
        if (num <= 1) {
            isPrime = 0;
        } else {
            for (int i = 2; i <= num / 2; i++) {
                if (num % i == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }

        if (isPrime) {
            printf("%d is a prime number.\n", num);
        } else {
            printf("%d is not a prime number[cite: 7].\n", num);
        }
    }

    return 0;
}
