#include <stdio.h>

int main(void) {
    int n, i, j;

    /*  N is within 1..9 */
    printf("Enter N (0 < N < 10): ");
    scanf("%d", &n);
    while (n <= 0 || n >= 10) {
        printf("Error! N must be a positive number less than 10.\n");
        printf("Please re-enter N: ");
        scanf("%d", &n);
    }

    /* header row */
    printf("* |");
    for (j = 1; j <= n; j++) {
        printf("%3d", j);
    }
    printf("\n");

    /* separator line */
    for (j = 0; j < 3 + 3 * n; j++) {
        printf("-");
    }
    printf("\n");

    /* table rows */
    for (i = 1; i <= n; i++) {
        printf("%d |", i);
        for (j = 1; j <= n; j++) {
            printf("%3d", i * j);
        }
        printf("\n");
    }

    return 0;
}