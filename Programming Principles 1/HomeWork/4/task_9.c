#include <stdio.h>

int main(void) {
    int n, i, c, v;

    printf("Enter N (1 < N < 10): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {                 
        for (c = 1; c <= 2 * n - 1; c++) {     
            if (c <= n) {
                v = c;                         
            } else {
                v = 2 * n - c;                 
            }

            if (v <= n - i + 1) {
                printf("%d  ", v);            
            } else {
                printf("   ");               
            }
        }
        printf("\n");
    }

    return 0;
}