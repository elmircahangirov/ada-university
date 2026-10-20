#include <stdio.h>

int main(void)
{
    printf("Prime numbers from 1 to 100:\n");

    for (int i = 1; i <= 100; i++)
    {
        if (i > 1)
        {
            int is_prime = 1;

            for (int j = 2; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    is_prime = 0;
                    break;
                }
            }

            if (is_prime)
            {
                printf("%d ", i);
            }
        }
    }

    printf("\n");
    return 0;
}