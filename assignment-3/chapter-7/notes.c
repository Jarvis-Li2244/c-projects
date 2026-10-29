#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <ctype.h>

// unsigned|signed long long|long|short (int)

// 15UL - decimal | 0377UL - octal | 0x7fffUL - hexadecimal

/* unsigned int u;
scanf("%u", &u); reads u in base 10
printf("%u", u); writes u in base 10
scanf("%o", &u); reads u in base 8
printf("%o", u); writes u in base 8
scanf("%x", &u); reads u inbase 16
printf("%x", u); writes u in base 16

short s;
scanf("%hd", &s);
printf("%hd", s);
long l;
scanf("%ld", &l);
printf("%ld", l);
long long ll;
scanf("%lld", &ll);
printf("%lld", ll);
*/

/*
float | double | long double
float_Complex

double d;
scanf("%lf", &d);

long double ld;
scanf ("%Le", &ld);
printf("%Lf", ld);
*/

/*
char ch;
int i;
i = 'a'; i is now 97
ch = 65; ch is now 'A'
ch = ch + 1: ch is now 'B'
ch++; ch is now 'C'

if ('a' <= ch && ch <= 'z')
ch = ch 'a' + 'A';

signed char sch;
unsigned char uch;
*/

/*
Alert (bell)  \a
Backspace     \b
Form feed     \e
New line      \n
Carriage return \r
Horizontal tab \t
Vertical tab \v
Backslash     \\
Question mark \?
Single quote  \'
Double quote  \"

'\033' or '\x1b'

ch = toupper (ch);
scanf (" %c", &ch);

putchar()
while ((ch = getchar()) =='');  skips blanks
*/

int main(void)
{
  int len = 0;
  printf("Enter a message: ");
  while (getchar() != '\n')
    len++;
  printf("Your message was %d character(s) long.\n", len);
  return 0;
}

/*
char c;
short int s;
int i;
unsigned int u;
long int 1;
unsigned long int ul;
float f;
double d;
long double ld;
i = i + c;  c is converted to int
i=i + s;  s is converted to int
u = u + i;    i is converted to unsigned int
l = l + u;  u is converted to long int
ul = ul + l; l is converted to unsigned long int
f = f + ul; ul is converted to float
a = d + f; f is converted to double
ld = ld + d; d is converted to long double

char c;
int i;
float f;
double d;
i = c;  c is converted to int
f = i;  i is converted to float
d = f; f is converted to double

CAST EXPRESSION
quotient = (float) dividend / divisor;

TYPE DEFINITIONS
typedef int Bool;
typedef long int ptrdiff_t;
typedef unsigned long int size_t;
typedef int wchar_t;

SIZEOF
int i
sizeof (i)
*/