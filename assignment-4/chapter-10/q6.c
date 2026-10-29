#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

bool quit = false;
int contents[STACK_SIZE];
int top = 0;

void make_empty(void)
{
  top = 0;
}

bool is_empty(void)
{
  return top == 0;
}

bool is_full(void)
{
  return top == STACK_SIZE;
}

void stack_overflow(void)
{
  printf("Expression is too complex\n");
  exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
  printf("Not enough operands in expression\n");
  exit(EXIT_FAILURE);
}

void push(int i)
{
  if (is_full())
  {
    stack_overflow();
  }
  else
    contents[top++] = i;
}

int pop(void)
{
  if (is_empty())
  {
    stack_underflow();
    return 0;
  }
  else
    return contents[--top];
}

int main(void)
{
  char ch;
  int i1, i2;

  for (;;)
  {
    make_empty();
    quit = false;
    printf("Enter an RPN expression: ");
    while (quit == false)
    {
      scanf(" %c", &ch);
      if (ch >= '0' && ch <= '9')
      {
        push(ch - '0');
      }
      else
      {
        switch (ch)
        {
        case '+':
          i2 = pop();
          i1 = pop();
          push(i1 + i2);
          break;
        case '-':
          i2 = pop();
          i1 = pop();
          push(i1 - i2);
          break;
        case '*':
          i2 = pop();
          i1 = pop();
          push(i1 * i2);
          break;
        case '/':
          i2 = pop();
          i1 = pop();
          push(i1 / i2);
          break;
        case '=':
          printf("Value of expression: %d\n", contents[top - 1]);
          quit = true;
          break;
        default:
          goto loop_done;
        }
      }
    }
  }
loop_done:;
  return 0;
}