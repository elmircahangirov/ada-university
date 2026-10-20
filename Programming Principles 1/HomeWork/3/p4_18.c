#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter five numbers between 1 and 30:\n");

    
    for (int i = 1; i <= 5; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        
        if (num < 1 || num > 30)
        {
            printf("Invalid input. Please enter a number between 1 and 30.\n");
            i--; 
            continue;
        }

        
        for (int j = 1; j <= num; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}