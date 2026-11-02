#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
  char arr[100], *p = arr, ch;
  int i = 0;

  printf("Enter a message: ");

  while ((ch = getchar()) != '\n')
  {
    if (tolower(ch) >= 'a' && tolower(ch) <= 'z')
    {
      *p++ = tolower(ch);
    }
  }

  while ((arr + i) < (p - 1 - i))
  {
    if (*(arr + i) != *(p - 1 - i))
    {
      printf("Not a palindrome\n");
      exit(EXIT_SUCCESS);
    }

    i++;
  }

  printf("Palindrome\n");

  return 0;
}