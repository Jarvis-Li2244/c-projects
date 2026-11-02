#include <stdio.h>

void minMax(int *arr, int n, int *max, int *min);

int main(void)
{
  int data[5] = {4, -2, 9, 0, 7};
  int lo, hi;
  minMax(data, 5, &lo, &hi);
  printf("min = %d, max = %d\n", lo, hi);
  return 0;
}

void minMax(int *arr, int n, int *min, int *max)
{
  int i;
  *max = *min = *arr;
  for (i = 1; i < n; i++)
  {
    if (*(arr + i) > *max)
      *max = *(arr + i);
    else if (*(arr + i) < *min)
      *min = *(arr + i);
  }
}