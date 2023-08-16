#include "main.h"

/**
* print_times_table - Print multiplication table for factor of n
* @n: Integer n
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
{
_putchar(' ');
if (product < 10)
 _putchar(' ');
_putchar(' ');
}

if (product < 10)
_putchar('0' + product);
else if (product < 100)
{
_putchar('0' + product / 10);
_putchar('0' + product % 10);
}
else
{
_putchar('0' + product / 100);
_putchar('0' + (product % 100) / 10);
_putchar('0' + product % 10);
}

if (j != n)
_putchar(',');
else
_putchar('\n');
}
}
}

/**
* main - check the code.
*
* Return: Always 0.
*/
int main(void)
{
print_times_table(3);
_putchar('\n');
print_times_table(5);
_putchar('\n');
print_times_table(98);
_putchar('\n');
print_times_table(12);
return (0);
}
