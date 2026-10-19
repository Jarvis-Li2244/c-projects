#include <stdio.h>

int main(void)
{
  int gsip, gi, pc, in, cd;
  printf("Enter ISBN: ");
  scanf("%d-%d-%d-%d-%d", &gsip, &gi, &pc, &in, &cd);

  printf("GSI prefix: %d \n", gsip);
  printf("Group identifier: %d \n", gi);
  printf("Publisher code: %d \n", pc);
  printf("Item number: %d \n", in);
  printf("Check digit: %d \n", cd);

  return 0;
}