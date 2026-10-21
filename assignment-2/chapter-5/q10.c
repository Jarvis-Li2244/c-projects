#include <stdio.h>

int main(void)
{
  int grade, x;
  printf("Enter numerical grade: ");
  scanf("%d", &grade);

  x = grade / 10;
  if (grade > 100 || grade < 0)
  {
    printf("Grade cannot be negative or exceed 100\n");
  }
  else
  {
    printf("Letter grade: ");
    switch (x)
    {
    case 10:
    case 9:
      printf("A\n");
      break;
    case 8:
      printf("B\n");
      break;
    case 7:
      printf("C\n");
      break;
    case 6:
      printf("D\n");
      break;
    default:
      printf("F\n");
      break;
    }
  }
  return 0;
}