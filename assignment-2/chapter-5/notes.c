#include <stdio.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0
#define BOOL int

int main(void)
{
  // i +j < k - 1
  // (i + j) < (k - 1)

  // i < j == j < k
  // (i < j) == (j < k)

  // (i != 0) && (j / i > 0)
  // short-circuit eval, does not eval 2nd if 1st is 0, prevents division by zero error

  /*
  if (i > j) {
    if (i > k) {
      max = i;
    } else {
      max = k;
    }
  } else {
    if (j > k) {
      max = j;
    } else {
      max = k;
    }
  }
  */

  float commission, value;
  printf("Enter value of trade: ");
  scanf("%£", &value);
  if (value < 2500.00f)
    commission = 30.00f + .017f * value;
  else if (value < 6250.00f)
    commission = 56.00f + .0066f * value;
  else if (value < 20000.00f)
    commission = 76.00f + .0034f * value;
  else if (value < 50000.00f)
    commission = 100.00f + .0022f * value;
  else if (value < 500000.00f)
    commission = 155.00f + .0011f * value;
  else
    commission = 255.00f + .0009f * value;
  if (commission < 39.00f)
    commission = 39.00f;
  printf("Commission: $%.2f\n", commission);

  int i, j, k;
  i = 1;
  j = 2;
  k = i > j ? i : j;

  BOOL flag;
  flag = TRUE;
  if (flag)
  {
    flag = FALSE;
  }
  if (!flag)
  {
    flag = TRUE;
  }

  bool flag2;
  flag2 = true;
  flag2 = false;

  int grade = 2;
  switch (grade)
  {
  case 4:
    printf("Excellent");
    break;
  case 3:
    printf("Good");
    break;
  case 2:
    printf("Average");
    break;
  case 1:
    printf("Poor");
    break;
  case 0:
    printf("Failing");
    break;
  default:
    printf("Illegal grade");
    break;
  }

  switch (grade)
  {
  case 4:
  case 3:
  case 2:
  case 1:
    printf("Passing");
    break;
  case 0:
    printf("Failing");
    break;
  default:
    printf("Illegal grade");
    break;
  }

  int month, day, year;
  printf("Enter date (mm/dd/yy): ");
  scanf("%d /%d /%d", &month, &day, &year);
  printf("Dated this %d", day);
  switch (day)
  {
  case 1:
  case 21:
  case 31:
    printf("st");
    break;
  case 2:
  case 22:
    printf("nd");
    break;
  case 3:
  case 23:
    printf("rd");
    break;
  default:
    printf("th");
    break;
  }
  printf(" day of ");
  switch (month)
  {
  case 1:
    printf("January");
    break;
  case 2:
    printf("February");
    break;
  case 3:
    printf("March");
    break;
  case 4:
    printf("April");
    break;
  case 5:
    printf("May");
    break;
  case 6:
    printf("June");
    break;
  case 7:
    printf("July");
    break;
  case 8:
    printf("August");
    break;
  case 9:
    printf("September");
    break;
  case 10:
    printf("October");
    break;
  case 11:
    printf("November");
    break;
  case 12:
    printf("December");
    break;
  }
  printf(", 20%.2d.\n", year);

  return 0;
}