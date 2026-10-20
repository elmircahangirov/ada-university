#include <stdio.h>

int main(void)
{
   
    long long principal = 100000; 
    int rate = 5; // 5% interest rate
    int years = 10;

    printf("Year\tAmount on Deposit\n");
    printf("-------------------------\n");

    long long amount = principal;

    for (int year = 1; year <= years; year++)
    {
        
        amount = amount * (100 + rate) / 100;

        
        long long dollars = amount / 100;
        long long cents = amount % 100;

        
        
        printf("%d\t$%lld.%02lld\n", year, dollars, cents);
    }

    return 0;
}