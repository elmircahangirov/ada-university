#include <stdio.h>

int main(void) {
    int side;

    printf("Enter the side of the square (1 to 20): ");
    if (scanf("%d", &side) == 1 && side >= 1 && side <= 20) {
        int row = 1;

        
        while (row <= side) {
            int col = 1;
            
            while (col <= side) {
                
                if (row == 1 || row == side || col == 1 || col == side) {
                    printf("*");
                } else {
                    printf(" ");
                }
                col++;
            }
            printf("\n");
            row++;
        }
    } else {
        printf("Invalid input. Please enter a value between 1 and 20.\n");
    }

    return 0;
}
