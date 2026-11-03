#include <stdio.h>

int main(void) {
    double hoursWorked;
    double hourlyRate;

    printf("Enter # of hours worked (-1 to end): ");
    while (scanf("%lf", &hoursWorked) == 1 && hoursWorked != -1) {
        printf("Enter hourly rate of the worker ($00.00): ");
        scanf("%lf", &hourlyRate);

        double grossPay;
        
        if (hoursWorked <= 40) {
            grossPay = hoursWorked * hourlyRate;
        } else {
            grossPay = (40 * hourlyRate) + ((hoursWorked - 40) * hourlyRate * 1.5);
        }

        printf("Salary is $%.2f\n\n", grossPay);

        printf("Enter # of hours worked (-1 to end): ");
    }

    return 0;
}
