#include <stdio.h>

int main(void)
{
  long long x, result;
  printf("Enter a value: ");
  scanf("%lld", &x);

  result = (3 * x * x * x * x * x) + (2 * x * x * x * x) - (5 * x * x * x) - (x * x) + (7 * x) - 6;
  printf("Result: %lld \n", result);

  return 0;
}