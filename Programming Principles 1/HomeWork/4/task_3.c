#include <stdio.h>

int main() {
    int m, n;

  
    while (1) {
        printf("Enter m and n: ");
        if (scanf("%d %d", &m, &n) != 2) {
            printf("Invalid input. Please enter integers.\n");
            
            while (getchar() != '\n');
            continue;
        }

        if (m > n) {
            printf("Wrong input! Please re-enter m and n (m<=n): \n");
        } else {
            break; 
        }
    }

    
    for (int i = m; i <= n; i++) {
        if (i % 3 == 0 && i % 7 == 0) {
            printf("LoveJava\n");
        } else if (i % 3 == 0) {
            printf("Love\n");
        } else if (i % 7 == 0) {
            printf("Java\n");
        } else {
            printf("%d\n", i);
        }
    }

    return 0;
}