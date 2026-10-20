#include <stdio.h>

int main(void)
{
    int rows = 5; 

    // Upper Half of the Diamond 
    for (int i = 1; i <= rows; i++)
    {
        
        for (int j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }

       
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    // Lower Half of the Diamond 
    for (int i = rows - 1; i >= 1; i--)
    {
        
        for (int j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }

        
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}