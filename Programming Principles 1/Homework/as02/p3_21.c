#include <stdio.h>

int main(void) {
    int c;

    
    c = 5;
    printf("Demonstrating Postincrementing:\n");
    printf("Initial value of c: %d\n", c);
    printf("Value of c++: %d\n", c++);
    printf("Value of c after c++: %d\n\n", c);

    
    c = 5;
    printf("Demonstrating Preincrementing:\n");
    printf("Initial value of c: %d\n", c);
    printf("Value of ++c: %d\n", ++c); 
    printf("Value of c after ++c: %d\n", c);

    return 0;
}
