#include "main.h"

/**
 * print_times_table - Prints the n times table.
 * @n: The number to start counting from n to 98.
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
if (product < 10)
_putchar(' ');
else if (product < 100)
_putchar(' ');
_putchar('0' + product / 100);
_putchar('0' + (product / 10) % 10);
_putchar('0' + product % 10);
if (j != n)
_putchar(' ');
}
_putchar('\n');
}
}
