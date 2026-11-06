#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_LEN 100

int main(void)
{
  char original[MAX_LEN];
  char cleaned[MAX_LEN];
  char reversed[MAX_LEN];
  int i, j = 0, len;

  printf("Enter a message: ");
  fgets(original, sizeof(original), stdin); // gets is no longer supported??

  for (i = 0; original[i] != '\0' && original[i] != '\n'; i++)
  {
    if (isalpha(original[i]))
    {
      cleaned[j++] = tolower(original[i]);
    }
  }
  cleaned[j] = '\0';

  len = strlen(cleaned);

  for (i = 0; i < len; i++)
  {
    reversed[i] = cleaned[len - 1 - i];
  }
  reversed[len] = '\0';

  if (strcmp(cleaned, reversed) == 0)
  {
    printf("Palindrome\n");
  }
  else
  {
    printf("Not a palindrome\n");
  }

  printf("%s\n%s\n%s\n", original, cleaned, reversed);
  return 0;
}