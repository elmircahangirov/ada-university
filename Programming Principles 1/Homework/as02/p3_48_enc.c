#include <stdio.h>

int main(void) {
    int number;

    printf("Enter a four-digit integer to encrypt: ");
    if (scanf("%d", &number) == 1 && number >= 0 && number <= 9999) {
        
        int d1 = (number / 1000) % 10;
        int d2 = (number / 100) % 10;
        int d3 = (number / 10) % 10;
        int d4 = number % 10;

        
        d1 = (d1 + 7) % 10;
        d2 = (d2 + 7) % 10;
        d3 = (d3 + 7) % 10;
        d4 = (d4 + 7) % 10;

        
        int temp = d1;
        d1 = d3;
        d3 = temp;

        temp = d2;
        d2 = d4;
        d4 = temp;

        printf("Encrypted integer: %d%d%d%d\n", d1, d2, d3, d4);
    } else {
        printf("Invalid input. Please enter a four-digit integer.\n");
    }

    return 0;
}
