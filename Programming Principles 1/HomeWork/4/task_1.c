//print out 2N + 1 times double D

#include <stdio.h>

int main(void)
{
  int N;
  printf("Enter N: ");
  scanf("%d", &N);

  double D;
  printf("Enter D: ");
  scanf("%lf", &D);

  for(int i = 0; i < 2 * N + 1; i++)
  {
    printf("%.2f\n", D);
  }
  return 0;
}