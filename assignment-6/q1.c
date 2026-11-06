#include <stdio.h>

int main(void)
{
  char arr[100], *p = arr, ch;
  int i = 0;

  printf("Enter a message: ");

  while ((ch = getchar()) != '\n')
  {
    *p++ = ch;
  }

  printf("Reversal is: ");

  while (p - 1 - i >= arr)
  {
    printf("%c", *(p - 1 - i));
    i++;
  }

  printf("\n");
  return 0;
}