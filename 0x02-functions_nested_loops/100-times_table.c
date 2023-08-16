#include "main.h"

/**
* print_times_table - Prints the n times table.
* @n: The number to start the times table from.
*/
void print_times_table(int n)
{
if (n < 0 || n > 15)
return;
for (int i = 0; i <= n; i++)
{
for (int j = 0; j <= n; j++)
{
int product = i * j;
if (j != 0)
_putchar(',');           
_putchar(' ');
if (product < 10)
_putchar(' ');
else if (product < 100)
_putchar((product / 10) + '0');
else
{
_putchar((product / 100) + '0');
_putchar(((product / 10) % 10) + '0');
}
_putchar((product % 10) + '0');
}
_putchar('\n');
}
}
