#include "main.h"

/**
* print_times_table - Print time table of the input
* @n: The value
*/
void print_times_table(int n)
{
int num, mul, prd;
if (n >= 0 && n <= 15)
{
for (num = 0; num <= n; num++)
{
_putchar('0');
for (mul = 1; mul <= n; mul++)
{
_putchar(',');
_putchar(' ');
prd = num * mul;
if (prd <= 99)
_putchar(' ');
if (prd <= 9)
_putchar(' ');
if (prd >= 100)
{
_putchar((prd / 100) + '0');
_putchar(((prd / 10)) % 10 + '0');
}
else if (prd <= 99 && prd >= 10)
{
_putchar((prd / 10) + '0');
}
_putchar((prd % 10) + '0');
}
_putchar('\n');
}
}
}
