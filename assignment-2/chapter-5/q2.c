#include <stdio.h>

int main(void)
{
  int hour, minute;
  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hour, &minute);

  printf("Equivalent 12-hour time: ");
  switch (hour)
  {
  case 0:
    printf("12:%.2d AM\n", minute);
    break;
  case 12:
    printf("12:%.2d PM\n", minute);
    break;
  default:
    printf("%d:%.2d ", (hour % 12), minute);
    if (hour > 12)
    {
      printf("PM\n");
    }
    else
    {
      printf("AM\n");
    }
    break;
  }

  return 0;
}