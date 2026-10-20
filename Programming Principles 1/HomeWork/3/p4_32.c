#include <stdio.h>

int main(void)
{
    int totalRows;

    
    printf("Enter an odd number of rows (1 to 19): ");
    scanf("%d", &totalRows);

    
    if (totalRows < 1 || totalRows > 19 || totalRows % 2 == 0)
    {
        printf("Invalid input! Please enter an odd number between 1 and 19.\n");
        return 1;
    }

   
    int mid = (totalRows / 2) + 1;

    
    for (int i = 1; i <= mid; i++)
    {
       
        for (int j = 1; j <= mid - i; j++)
        {
            printf(" ");
        }

        
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

   
    for (int i = mid - 1; i >= 1; i--)
    {
        // Print leading spaces
        for (int j = 1; j <= mid - i; j++)
        {
            printf(" ");
        }

        // Print asterisks
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}