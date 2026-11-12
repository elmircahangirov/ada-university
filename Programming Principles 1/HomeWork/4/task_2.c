#include <stdio.h>

int main(void)
{
  int N;
  printf("Enter N: ");
  scanf("%d", &N);

  long long a = 0, b = 1;
  for(int i = 0; i < N; i++)
  {
    printf("%lld", a);
    long long next = a + b;
    a = b;
    b = next;
  }
  printf("\n");
  
  return 0;

}