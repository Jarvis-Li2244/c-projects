#include <stdio.h>

// WHILE LOOP

// int main(void)
// {
//   int n, sum = 0;
//   printf("This program sums a series of integers.\n");
//   printf("Enter integers (0 to terminate): ");
//   scanf("%d", &n);
//   while (n != 0)
//   {
//     sum += n;
//     scanf("%d", &n);
//   }
//   printf("The sum is: %d\n", sum);
//   return 0;
// }

// DO STATEMENT

// int main(void)
// {
//   int digits = 0, n;

//   printf("Enter a nonnegative integer: ");
//   scanf("%d", &n);
//   do
//   {
//     n /= 10;
//     digits++;
//   } while (n > 0);
//   printf("The number has %d digit (s).\n", digits);
//   return 0;
// }

// FOR LOOP

// int main(void)
// {
//   int i, n, odd, square;
//   printf("This program prints a table of squares.\n");
//   printf("Enter number of entries in table: ");
//   scanf("%d", &n);
//   i = 1;
//   odd = 3;
//   for (square = 1; i <= n; odd += 2)
//   {
//     printf("%10d%10d\n", i, square);
//     ++i;
//     square += odd;
//   }

//   for (int sum = 0, i = 1; i <= n; i++)
//     sum += i;

//   return 0;
// }

// BREAK
// for (;;)
// {
//   printf("Enter a number (enter 0 to stop): ");
//   scanf("%d", &n);
//   if (n == 0)
//     break;
// }

// CONTINUE
// n = 0;
// sum = 0;
// while (n < 10)
// {
//   scanf("%d", &i);
//   if (i == 0)
//     continue;
//   sum += i;
//   n++;
//   /* continue jumps to here */
// }

// GOTO
// while (...)
// {
//   switch (...)
//   {
//     goto loop_done; /* break won't work here */
//   }
// }
// loop_done : ...

int main(void)
{
  int cmd;
  float balance = 0.0f, credit, debit;
  printf("*** ACME checkbook-balancing program ***\n");
  printf("Commands: 0=clear, 1=credit, 2=debit, ");
  printf("3=balance, 4=exit\n\n");
  for (;;)
  {
    printf("Enter command: ");
    scanf("%d", &cmd);
    switch (cmd)
    {
    case 0:
      balance = 0.0f;
      break;
    case 1:
      printf("Enter amount of credit: ");
      scanf("%f", &credit);
      balance += credit;
      break;
    case 2:
      printf("Enter amount of debit: ");
      scanf("%f", &debit);
      balance -= debit;
      break;
    case 3:
      printf("Current balance: $%.2f\n", balance);
      break;
    case 4:
      return 0;
    default:
      printf("Commands: 0=clear, 1=credit, 2=debit, ");
      printf("3=balance, 4=exit\n\n");
      break;
    }
  }
}