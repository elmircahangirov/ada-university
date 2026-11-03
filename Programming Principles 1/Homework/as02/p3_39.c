#include <stdio.h>

int main(void) {
    int row = 1;

    
    while (row <= 8) {
        
        if (row % 2 == 0) {
            printf("%s", " ");
        }

        int col = 1;
        
        while (col <= 8) {
            printf("%s", "* ");
            col++;
        }

       
        puts("");
        row++;
    }

    return 0;
}
