#include <stdio.h>

void reverseArray(int *arr, int n);

int main(void)
{
  int data[6] = {1, 2, 3, 4, 5, 6};
  reverseArray(data, 6);
  for (int i = 0; i < 6; i++)
  {
    printf("%d ", data[i]);
  }
  printf("\n");
  return 0;
}

void swap(int *x, int *y)
{
  int a = *x;
  *x = *y;
  *y = a;
}

void reverseArray(int *arr, int n)
{
  for (int i = 0; i < n / 2; i++)
  {
    swap((arr + i), (arr + n - 1 - i));
  }
}

// if n was odd, the function would still work because since n/2 rounds down,
// the pointers never actually point to the middle value of the array leaving it unaffected while the rest are swapped.
// When an odd-lengthened array is reversed, the middle value is the same anyways.