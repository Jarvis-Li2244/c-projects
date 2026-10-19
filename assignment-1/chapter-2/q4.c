#include <stdio.h>

#define TAX 0.05

int main(void)
{
  float money, taxed_money;
  printf("Enter an amount: ");
  scanf("%f", &money);

  taxed_money = money * (1 + TAX);
  printf("With tax added: %0.2f \n", taxed_money);
}