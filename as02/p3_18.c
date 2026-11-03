#include <stdio.h>

int main(void) {
    double sales;

    printf("Enter sales in dollars (-1 to end): ");
    while (scanf("%lf", &sales) == 1 && sales != -1) {
        
        double salary = 200.0 + (sales * 0.09);

        printf("Salary is: $%.2f\n\n", salary);

        printf("Enter sales in dollars (-1 to end): ");
    }

    return 0;
}
