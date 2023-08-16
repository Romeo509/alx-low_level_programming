#include "main.h"

/**
* putnchar - Print a number of any digit count
* @num: The number to print
*/
void putnchar(int num)
{
if (num < 10)
_putchar(num + '0');
else
{
putnchar(num / 10);
_putchar(num % 10 + '0');
}
}
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
int prod = i * j;
putnchar(prod);
if (j != n)
{
_putchar(',');
for (int m = 0; m < 4 - numLength(i * (j + 1)); m++)
_putchar(' ');
}
}
_putchar('\n');
