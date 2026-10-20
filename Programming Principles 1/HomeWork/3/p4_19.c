#include <stdio.h>

int main(void)
{
    int productNumber;
    int quantitySold;
    double totalRetailValue = 0.0;

    printf("Online Retailer Sales Calculator\n");
    printf("Enter product number (1-5) and quantity sold.\n");
    printf("Enter 0 for the product number to finish input.\n\n");

    printf("Enter product number (1-5, 0 to end): ");
    scanf("%d", &productNumber);

    
    while (productNumber != 0)
    {
        printf("Enter quantity sold: ");
        scanf("%d", &quantitySold);

        double price = 0.0;
        int isValid = 1;

        
        switch (productNumber)
        {
            case 1:
                price = 2.98; // Product 1 retail price
                break;
            case 2:
                price = 4.50; // Product 2 retail price
                break;
            case 3:
                price = 9.98; // Product 3 retail price
                break;
            case 4:
                price = 4.49; // Product 4 retail price
                break;
            case 5:
                price = 6.87; // Product 5 retail price[cite: 15]
                break;
            default:
                printf("Invalid product number! Please enter a number between 1 and 5.\n");
                isValid = 0;
                break;
        }

       
        if (isValid && quantitySold > 0)
        {
            totalRetailValue += price * quantitySold;
        }

        printf("\nEnter next product number (1-5, 0 to end): ");
        scanf("%d", &productNumber);
    }

    
    printf("\nTotal retail value of all products sold: $%.2f\n", totalRetailValue);

    return 0;
}