#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
  char arr[100], *p = arr, ch;

  printf("Enter a message: ");

  while ((ch = getchar()) != '\n')
  {
    if (tolower(ch) >= 'a' && tolower(ch) <= 'z')
    {
      *p++ = tolower(ch);
    }
  }

  char *q = arr;

  while (q < p - 1)
  {
    if (*q != *(p - 1))
    {
      printf("Not a palindrome\n");
      exit(EXIT_SUCCESS);
    }

    q++;
    p--;
  }

  printf("Palindrome\n");

  return 0;
}