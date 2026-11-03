#include <stdio.h>

int main(void) {
    int counter = 0;
    double number;
    double largest;

    printf("Enter number 1: ");
    if (scanf("%lf", &number) == 1) {
        largest = number;
        counter = 1;

        
            printf("Enter number %d: ", counter + 1);
            scanf("%lf", &number);

            if (number > largest) {
                largest = number;
            }
            counter++;
        }

        printf("The largest number is: %.2f\n", largest);
    }

    return 0;
}
