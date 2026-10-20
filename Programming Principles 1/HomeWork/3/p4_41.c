#include <stdio.h>

int main(void)
{
    double housing, food, clothing, transportation, education, healthCare, vacations;
    double totalExpenses, estimatedFairTax;

    printf("--- FairTax Calculator ---\n");
    printf("Enter annual expenses for the following categories:\n");

    printf("Housing: $");
    scanf("%lf", &housing);

    printf("Food: $");
    scanf("%lf", &food);

    printf("Clothing: $");
    scanf("%lf", &clothing);

    printf("Transportation: $");
    scanf("%lf", &transportation);

    printf("Education: $");
    scanf("%lf", &education);

    printf("Health care: $");
    scanf("%lf", &healthCare);

    printf("Vacations: $");
    scanf("%lf", &vacations);

    
    totalExpenses = housing + food + clothing + transportation + education + healthCare + vacations;

    
    estimatedFairTax = totalExpenses * 0.23;

    printf("\n--- Results ---\n");
    printf("Total Annual Expenses: $%.2f\n", totalExpenses);
    printf("Estimated FairTax (at 23%): $%.2f\n", estimatedFairTax);

    return 0;
}