#include <stdio.h>

int main(void) {
    int n, i, j; // n is the number of lines. i and j are loop counters
    int hashes = 1;   
    printf("Enter the number of lines: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= hashes; j++) {
            printf("#");
        }
        printf("\n");

        hashes = hashes + i;   
    }

    return 0;
}