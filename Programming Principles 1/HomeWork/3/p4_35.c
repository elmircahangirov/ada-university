#include <stdio.h>

int main(void)
{
    printf("Demonstrating structured loop execution without a 'break' statement:\n\n");

    int i = 1;
    int keepLooping = 1; 

    
    while (i <= 10 && keepLooping)
    {
        
        if (i == 5)
        {
            keepLooping = 0; 
        }
        else
        {
            printf("%d ", i);
            i++;
        }
    }

    printf("\n\nLoop terminated cleanly without using a break statement.\n");

    return 0;
}