#include <stdio.h>

int main(void)
{
    
    int x = 4, y = 8;
    int a = 3, b = 3, g = 5;
    int i = 5, j = 6;

    printf("--- De Morgan's Laws Verification ---\n\n");

    // Part (a)
    int orig_a = (!(x < 5) && !(y >= 7));
    int eq_a   = (!((x < 5) || (y >= 7)));
    printf("Part (a):\n");
    printf("  Original:   %d\n", orig_a);
    printf("  Equivalent: %d\n\n", eq_a);

    // Part (b)
    int orig_b = (!(a == b) || !(g != 5));
    int eq_b   = (!((a == b) && (g != 5)));
    printf("Part (b):\n");
    printf("  Original:   %d\n", orig_b);
    printf("  Equivalent: %d\n\n", eq_b);

    // Part (c)
    int orig_c = !((x <= 8) && (y > 4));
    int eq_c   = (!(x <= 8) || !(y > 4));
    printf("Part (c):\n");
    printf("  Original:   %d\n", orig_c);
    printf("  Equivalent: %d\n\n", eq_c);

    // Part (d)
    int orig_d = !((i > 4) || (j <= 6));
    int eq_d   = (!(i > 4) && !(j <= 6));
    printf("Part (d):\n");
    printf("  Original:   %d\n", orig_d);
    printf("  Equivalent: %d\n\n", eq_d);

    return 0;
}