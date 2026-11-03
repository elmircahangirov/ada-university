#include <stdio.h>

int main(void) {
    int counter = 1;
    double number;
    double largest1;
    double largest2;

    printf("Enter number 1: ");
    if (scanf("%lf", &number) == 1) {
        largest1 = number;
        
        
        printf("Enter number 2: ");
        scanf("%lf", &number);
        
        if (number > largest1) {
            largest2 = largest1;
            largest1 = number;
        } else {
            largest2 = number;
        }
        
        counter = 2;

        
        while (counter < 10) {
            printf("Enter number %d: ", counter + 1);
            scanf("%lf", &number);

            if (number > largest1) {
                largest2 = largest1;
                largest1 = number;
            } else if (number > largest2) {
                largest2 = number;
            }
            counter++;
        }

        printf("\nThe two largest numbers are: %.2f and %.2f\n", largest1, largest2);
    }

    return 0;
}
