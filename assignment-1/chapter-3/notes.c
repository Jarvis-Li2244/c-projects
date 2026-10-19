#include <stdio.h>

#include <stdio.h>
int main(void)
{
  int i;
  float x;
  i = 40;
  x = 839.21f;
  printf(" |%d|%5d|%-5d|%5.3d| \n", i, i, i, i);
  printf(" |%10.3f|%10.3e|%-10g|\n", x, x, x);

  printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");
  printf("\"Hello!\"\n");
  printf("\\\n");

  int j, k;
  scanf("%d/%d", &j, &k);
  printf("%d, %d%% \n", j, k);

  return 0;
}