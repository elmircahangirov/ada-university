#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a natural number (upper limit): ");
    scanf("%d", &n);

   
    long long sum = 0;
    long long sum_squares = 0;
    long long sum_cubes = 0;

    
    for (int i = 1; i <= n; i++)
    {
        sum += i;
        sum_squares += (long long)i * i;
        sum_cubes += (long long)i * i * i;
    }

    
    printf("Sum from 1 to %d: %lld\n", n, sum);
    printf("Sum of squares from 1 to %d: %lld\n", n, sum_squares);
    printf("Sum of cubes from 1 to %d: %lld\n", n, sum_cubes);

    return 0;
}