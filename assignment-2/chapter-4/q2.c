#include <stdio.h>

int main(void)
{
  int num, x, y, z;
  printf("Enter a three-digit number: ");
  scanf("%d", &num);

  x = num / 100;
  y = (num % 100) / 10;
  z = num % 10;

  printf("The reversal is: %d%d%d \n", z, y, x);
  return 0;
}