#include <stdio.h>

int main(void) {
    int n;
    unsigned long long factorial = 1;

    printf("Enter a nonnegative integer: ");
    if (scanf("%d", &n) == 1 && n >= 0) {
        int i = n;
        
        
        while (i > 1) {
            factorial *= i;
            i--;
        }

        printf("%d! = %llu\n", n, factorial);
    } else {
        printf("Invalid input. Please enter a nonnegative integer.\n");
    }

    return 0;
}
