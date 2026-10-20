#include <stdio.h>
#include <math.h> 

int main(void)
{
    double principal = 1000.0; 
    int years = 10;          

    
    for (double rate = 0.05; rate <= 0.10; rate += 0.01)
    {
        printf("\n--- Interest Rate: %.0f%% ---\n", rate * 100);
        printf("Year\tAmount on Deposit\n");
        printf("------------------------\n");

        for (int year = 1; year <= years; year++)
        {
            
            double amount = principal * pow(1.0 + rate, year);
            printf("%d\t%.2f\n", year, amount);
        }
    }

    return 0;
}