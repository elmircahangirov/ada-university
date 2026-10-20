#include <stdio.h>

int main(void)
{
    
    for (int i = 0; i <= 127; i++)
    {
        
        char c = (i < 32 || i == 127) ? '.' : (char)i;
        
        printf("%c ", c);

        
        if ((i + 1) % 10 == 0)
        {
            printf("\n");
        }
    }

    printf("\n");
    return 0;
}