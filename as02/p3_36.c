#include <stdio.h>

int main(void) {
    int num = 100;

    printf("Three-digit Armstrong numbers:\n");

    
    while (num <= 999) {
        int temp = num;
        int sum = 0;

        
        while (temp > 0) {
            int digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
        }

        
        if (sum == num) {
            printf("%d\n", num);
        }

        num++;
    }

    return 0;
}
