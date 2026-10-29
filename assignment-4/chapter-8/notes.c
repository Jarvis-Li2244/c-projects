#include <stdio.h>

#define N 10

int main(void)
{
  int a[N], i;
  printf("Enter %d numbers: ", N);
  for (i = 0; i < N; i++)
    scanf("%d", &a[i]);
  printf("In reverse order:");
  for (i = N - 1; i >= 0; i--)
    printf(" %d", a[i]);
  printf("\n");
  return 0;
}

// int a[10] = {0};
// int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
// int a[15] = {[2] = 29, [9] = 7, [14] = 48};
// int b[] = {[5] = 10, [23] = 13, [11] = 36, [15] = 29};
// int c[10] = {5, 1, 9, [4] = 3, 7, 2, [8] = 6};

/* #include <stdbool.h>
#include <stdio.h>
int main(void) {
    bool digit_seen[10] = { false };
    int digit;
    long n;
    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
      digit = n % 10;
      if (digit_seen [digit])
        break;
      digit_seen [digit] = true;
      n /= 10;
    }

    if (n> 0)
      printf("Repeated digit\n");
    else
      printf("No repeated digit\n");
    return 0;
}
*/

// #define SIZE ((int) (sizeof (a) / sizeof (a[0])))

/* int m[5] [9] = { {1, 1, 1, 1, 1, 0, 1, 1, 1},
                    {0, 1, 0, 1, 0, 1, 0, 1, 0},
                    {0, 1, 0, 1, 1, 0, 0, 1, 0},
                    {1, 1, 0, 1, 0, 0, 0, 1, 0},
                    {1, 1, 0, 1, 0, 0, 1, 1, 1} };

  int m[5] [9] = {1, 1, 1, 1, 1, 0, 1, 1, 1,
                  0, 1, 0, 1, 0, 1, 0, 1, 0,
                  0, 1, 0, 1, 1, 0, 0, 1, 0,
                  1, 1, 0, 1, 0, 0, 0, 1, 0,
                  1, 1, 0, 1, 0, 0, 1, 1, 1};

  double ident [2] [2] = {[0] [0] = 1.0, [1] [1] = 1.0};
*/
