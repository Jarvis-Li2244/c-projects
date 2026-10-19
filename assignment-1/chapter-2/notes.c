#include <stdio.h>

#define INCHES_PER_POUND 166

int main(void)
{
  int height, length, width = 10, volume, weight;
  printf("Enter height of box: ");
  scanf("%d", &height);
  printf("Enter length of box: ");
  scanf("%d", &length);

  float profit, loss;

  profit = 230.23f;
  loss = 210.19f;

  volume = height * length * width;
  weight = (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND;
  printf("Dimensions: %dx%dx%d\n", length, width, height);
  printf("Volume (cubic inches): %d\n", volume);
  printf("Volume (cubic inches): %d\n", height * length * width);
  printf("Dimensional weight (pounds): %d\n", weight);

  printf("Profit: %.2f, Loss: %f \n", profit, loss);
  printf("To C, or not to C: that is the question.\n");
  return 0;
}

/*Name : pun.c
 *Purpose : Prints a bad pun.
 *Author : K.N.King
 */

// test