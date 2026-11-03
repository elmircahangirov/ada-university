#include <stdio.h>

int main(void) {
    int num = 1;
    int row = 1;

    
    while (row <= 10) {
        int col = 1;
        
        while (col <= row) {
            printf("%d ", num);
            num++;
            col++;
        }
        printf("\n");
        row++;
    }

    return 0;
}
