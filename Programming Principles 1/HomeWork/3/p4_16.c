#include <stdio.h>

int main(void)
{
    int rows = 10;

    //  Pattern (A) 
    printf("(A)\n");
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%s", "*");
        }
        printf("\n");
    }

    printf("\n"); // Blank line between patterns

    // Pattern (B)
    printf("(B)\n");
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i + 1; j++)
        {
            printf("%s", "*");
        }
        printf("\n");
    }

    printf("\n");

    // Pattern (C) 
    printf("(C)\n");
    for (int i = 1; i <= rows; i++)
    {
        // Print leading spaces
        for (int j = 1; j <= i - 1; j++)
        {
            printf(" ");
        }
        // Print asterisks
        for (int j = 1; j <= rows - i + 1; j++)
        {
            printf("%s", "*");
        }
        printf("\n");
    }

    printf("\n");

    // Pattern (D) 
    printf("(D)\n");
    for (int i = 1; i <= rows; i++)
    {
        // Print leading spaces
        for (int j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }
        // Print asterisks
        for (int j = 1; j <= i; j++)
        {
            printf("%s", "*");
        }
        printf("\n");
    }

    return 0;
}