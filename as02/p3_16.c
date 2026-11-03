    #include <stdio.h>

int main(void) {
    double totalCollections;
    char month[50];

    printf("Enter total amount collected (-1 to quit): ");
    while (scanf("%lf", &totalCollections) == 1 && totalCollections != -1) {
        printf("Enter name of month: ");
        scanf("%s", month);

       
        double sales = totalCollections / 1.09;
        double countyTax = sales * 0.05;
        double stateTax = sales * 0.04;
        double totalTax = countyTax + stateTax;

        printf("Total Collections: $ %.2f\n", totalCollections);
        printf("Sales: $ %.2f\n", sales);
        printf("County Sales Tax: $ %.2f\n", countyTax);
        printf("State Sales Tax: $ %.2f\n", stateTax);
        printf("Total Sales Tax Collected: $ %.2f\n\n", totalTax);

        printf("Enter total amount collected (-1 to quit): ");
    }

    return 0;
}
