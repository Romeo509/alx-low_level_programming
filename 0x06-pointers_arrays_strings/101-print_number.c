#include "main.h"
/**
* print_number - the printer of cause
* @n: the intiger
*/

void print_number(int n)
{
int a;
int b;
int c;

c = 1;
if (n >= 0)
a = n * -1;
else
{
a = n;
_putchar('-');
}
b = a;
while (b <= -10)
{
c *= 10;
b /= 10;
}
/*Main */
while (c >= 1)
{
_putchar(((a / c) % 10) * -1 + '0');
c /= 10;
}
}
