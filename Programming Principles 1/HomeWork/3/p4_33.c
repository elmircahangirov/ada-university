#include <stdio.h>

void printRoman(int n)
{
    
    const char *tens[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC", "C"};
    const char *units[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

    int t = n / 10;
    int u = n % 10;

    printf("%s%s", tens[t], units[u]);
}

int main(void)
{
    printf("Decimal\tRoman Numeral\n");
    printf("-------------------------\n");

    for (int i = 1; i <= 100; i++)
    {
        printf("%d\t", i);
        printRoman(i);
        printf("\n");
    }

    return 0;
}