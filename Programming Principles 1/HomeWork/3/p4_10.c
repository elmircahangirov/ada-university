#include <stdio.h>

int main(void)
{
  double celsius, fahrenheit;
  printf("Celcius\t\tFahrenheit");
  printf("---------------------\n");

  for(int i = 30; i <= 50; i++)
  {
    celsius = i;
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f C\t%.2f F\n", celsius, fahrenheit);
  }
}