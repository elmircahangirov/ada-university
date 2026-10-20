#include <stdio.h>

int main(void)
{
    
    printf("n\tFactorial (n!)\n");
    printf("--------------------\n");

    long long factorial = 1;

    
    for (int i = 1; i <= 5; i++)
    {
        factorial *= i; 
        printf("%d\t%lld\n", i, factorial);
    }

    return 0;
}