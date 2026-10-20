#include <stdio.h>

int main(void)
{
    int paycode;

    printf("Weekly Pay Calculation Program\n");
    printf("Enter paycode (1: Manager, 2: Hourly, 3: Commission, 4: Pieceworker, 0 to end): ");
    scanf("%d", &paycode);

    while (paycode != 0)
    {
        double weeklyPay = 0.0;

        switch (paycode)
        {
            case 1: 
            {
                double fixedSalary;
                printf("Enter manager's weekly salary: $");
                scanf("%lf", &fixedSalary);
                weeklyPay = fixedSalary;
                printf("Manager's weekly pay is: $%.2f\n\n", weeklyPay);
                break;
            }

            case 2:
            {
                double hourlyWage;
                double hoursWorked;
                printf("Enter hourly wage: $");
                scanf("%lf", &hourlyWage);
                printf("Enter total hours worked this week: ");
                scanf("%lf", &hoursWorked);

                if (hoursWorked <= 40)
                {
                    weeklyPay = hourlyWage * hoursWorked;
                }
                else
                {
                    weeklyPay = (hourlyWage * 40) + ((hoursWorked - 40) * hourlyWage * 1.5);
                }
                printf("Hourly worker's weekly pay is: $%.2f\n\n", weeklyPay);
                break;
            }

            case 3: 
            {
                double grossSales;
                printf("Enter gross weekly sales: $");
                scanf("%lf", &grossSales);
                weeklyPay = 250.0 + (grossSales * 0.057);
                printf("Commission worker's weekly pay is: $%.2f\n\n", weeklyPay);
                break;
            }

            case 4: 
            {
                double wagePerItem;
                int itemsProduced;
                printf("Enter fixed amount paid per item: $");
                scanf("%lf", &wagePerItem);
                printf("Enter number of items produced: ");
                scanf("%d", &itemsProduced);
                weeklyPay = wagePerItem * itemsProduced;
                printf("Pieceworker's weekly pay is: $%.2f\n\n", weeklyPay);
                break;
            }

            default:
                printf("Invalid paycode entered. Please try again.\n\n");
                break;
        }

        printf("Enter paycode (1-4, 0 to end): ");
        scanf("%d", &paycode);
    }

    printf("Program exited.\n");
    return 0;
}