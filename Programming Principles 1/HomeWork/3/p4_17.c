#include <stdio.h>

int main(void)
{
    int accountNumber;
    double originalCreditLimit;
    double currentBalance;
    double newCreditLimit;

    
    for (int i = 1; i <= 3; i++)
    {
        printf("\n--- Enter details for Customer %d ---\n", i);
        printf("Enter account number: ");
        scanf("%d", &accountNumber);

        printf("Enter credit limit before recession: ");
        scanf("%lf", &originalCreditLimit);

        printf("Enter current balance: ");
        scanf("%lf", &currentBalance);

       
        newCreditLimit = originalCreditLimit / 2.0;

        
        printf("\n[Results for Account #%d]\n", accountNumber);
        printf("New Credit Limit: $%.2f\n", newCreditLimit);
        
        
        if (currentBalance > newCreditLimit)
        {
            printf("Current Balance: $%.2f\n", currentBalance);
            printf("Status: Current balance EXCEEDS the new credit limit!\n");
        }
        else
        {
            printf("Current Balance: $%.2f\n", currentBalance);
            printf("Status: Current balance is within the new credit limit.\n");
        }
    }

    return 0;
}