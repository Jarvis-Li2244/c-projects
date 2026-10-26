#include <stdio.h>

int main(void)
{
  int a, b, r, c, d;
  printf("Enter a fraction: ");
  scanf("%d/%d", &a, &b);

  c = a;
  d = b;

  while (b)
  {
    r = a % b;
    a = b;
    b = r;
  }

  printf("In lowest terms: %d/%d\n", c / a, d / a);

  return 0;
}