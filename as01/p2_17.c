#include <stdio.h>

int main(void){
    double u; // initial velocity
    double a; // acceleration
    double t; // time elapsed
    double v; // final velocity
    double s; // distance traversed
    
    printf("Enter initial velocity (u): ");
    scanf("%lf", &u);
    
    printf("Enter acceleration (a): ");
    scanf("%lf", &a);
    
    printf("Enter elapsed time (t): ");
    scanf("%lf", &t);
    
    v = u + (a * t);
    s = (u * t) + (0.5 * a * t * t);
    
    printf("Final velocity (v) = %.2f\n", v);
    printf("Distance traversed (s) = %.2f\n", s);
    
    return 0;
    
}
