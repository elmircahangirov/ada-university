#include <stdio.h>


void printBinary(int n)
{
    
    for (int i = 8; i >= 0; i--)
    {
        int k = n >> i;
        if (k & 1)
            printf("1");
        else
            printf("0");
    }
}

int main(void)
{
    
    printf("Decimal\tBinary\t\tOctal\tHexadecimal\n");
    printf("--------------------------------------------------\n");

   
    for (int i = 1; i <= 256; i++)
    {
        printf("%d\t", i);          
        printBinary(i);             
        printf("\t%o\t%X\n", i, i);
    }

    return 0;
}