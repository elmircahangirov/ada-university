#include <stdio.h>

int main(void) {
    
    int passes = 0;
    int failures = 0;
    int student = 1;
    int result;

    
    while (student <= 10) {
        printf("Enter result (1 = pass, 2 = fail): ");
        scanf("%d", &result);

        
        while (result != 1 && result != 2) {
            printf("Invalid input. Please enter 1 (pass) or 2 (fail): ");
            scanf("%d", &result);
        }

        
        if (result == 1) {
            passes = passes + 1;
        } else {
            failures = failures + 1;
        }

        student = student + 1;
    }

    
    printf("\nPassed: %d\n", passes);
    printf("Failed: %d\n", failures);

    if (passes > 8) {
        printf("Bonus to instructor!\n");
    }

    return 0;
}
