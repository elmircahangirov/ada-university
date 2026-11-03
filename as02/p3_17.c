#include <stdio.h>
#include <math.h>

int main(void) {
    int accountNumber;
    double mortgageAmount;
    int mortgageTermYears;
    double interestRate;

    printf("Enter account number (-1 to end): ");
    while (scanf("%d", &accountNumber) == 1 && accountNumber != -1) {
        printf("Enter mortgage amount (in dollars): ");
        scanf("%lf", &mortgageAmount);
        printf("Enter mortgage term (in years): ");
        scanf("%d", &mortgageTermYears);
        printf("Enter interest rate (as a decimal): ");
        scanf("%lf", &interestRate);

        
        double totalInterest = mortgageAmount * interestRate * mortgageTermYears;
        double totalAmountPayable = mortgageAmount + totalInterest;
        
        
        int totalMonths = mortgageTermYears * 12;
        double monthlyPayment = totalAmountPayable / totalMonths;

        
        int roundedPayment = (int)(monthlyPayment + 0.5);

        printf("The monthly payable interest $ %d\n\n", roundedPayment);

        printf("Enter account number (-1 to end): ");
    }

    return 0;
}
