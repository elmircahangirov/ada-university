#include <stdio.h>

int main(void) {
    int num;
    int count9s = 0;

    printf("Enter an integer (5 digits or fewer): ");
    if (scanf("%d", &num) == 1) {
        int temp = num;

        
        if (temp < 0) {
            temp = -temp;
        }

        
        while (temp > 0) {
            if (temp % 10 == 9) {
                count9s++;
            }
            temp /= 10;
        }

        printf("The number of 9s in the integer is: %d\n", count9s);
    }

    return 0;
}
