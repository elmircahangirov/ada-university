#include <stdio.h>

int main(void) {
    int binaryNum;
    int decimalNum = 0;
    int base = 1;
    int remainder;

    printf("Enter a binary integer (5 digits or fewer): ");
    if (scanf("%d", &binaryNum) == 1) {
        int temp = binaryNum;

        
        while (temp > 0) {
            remainder = temp % 10;
            decimalNum += remainder * base;
            temp /= 10;
            base *= 2; 
        }

        printf("The decimal equivalent of binary %d is %d.\n", binaryNum, decimalNum);
    }

    return 0;
}
