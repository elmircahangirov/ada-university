#include <stdio.h>

int main(void)
{
  int n;
  printf("Enter the number of value: ");
  scanf("%d", &n);
  int sum = 0;
  
  for(int i = 1; i <= n; i++)
  {
    int value;
    printf("Enter the value: ");
    scanf("%d", &value);
    sum += value;

  }
  double average = (double) sum / n;
  printf("The sum of the values is: %d\nThe average of the values is: %.2f\n", sum, average);
}