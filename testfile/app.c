#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>


#define COOL_NUMBER 7

int show_data_types(){
  int x,z;
  x = 5;
  char name[20];
  strcpy(name, "Eric Chen");
  z = COOL_NUMBER * x;
  printf("x is %d, string is %s, z is %d \n", x, name, z);
  return 0;
}

int main(){
  char name[16] = "Hello World";
  char *x = name;
  char *y = &name[2];
  char *z = &name[1];
  printf("X = %p, Y = %p, Z = %p \n", x, y, z);
  return 0;
}