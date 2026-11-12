#include <stdio.h>

int main(void) {
    int n, i, j, d, count, mid;

    printf("Enter N (odd, N > 2): ");
    scanf("%d", &n);

    mid = n / 2;  
    for (i = 0; i < n; i++) {
        
        if (i <= mid) {
            d = i;
        } else {
            d = n - 1 - i;
        }

        count = 2 * d + 1;   

        
        for (j = 0; j < n - count; j++) {
            printf(" ");
        }

       
        for (j = 0; j < count; j++) {
            if (d == mid || j == d) {
                printf("* ");
            } else {
                printf("# ");
            }
        }
        printf("\n");
    }

    return 0;
}