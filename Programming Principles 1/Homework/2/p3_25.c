#include <stdio.h>

int main(void) {
    int a = 7;

    
    printf("A\tA+3\tA+6\tA+9\n\n");

    
    while (a <= 35) {
        printf("%d\t%d\t%d\t%d\n", a, a + 3, a + 6, a * 9);
        a += 7;
    }

    return 0;
}
