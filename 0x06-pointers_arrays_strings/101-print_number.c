#include "main.h"

/**
* print_number - prints integer.
* @n: integer.
* Return: no return.
*/
void print_number(int n)
{
if (n == 0)
{
_putchar('0');
return;
}
if (n < 0)
{
_putchar('-');
n = -n;
}
int num_digits = 0;
int temp = n;
while (temp > 0)
{
temp /= 10;
num_digits++;
}
int divisor = 1;
for (int i = 1; i < num_digits; i++)
{
divisor *= 10;
}
while (divisor > 0)
{
_putchar((n / divisor) +'0');
n %= divisor;
divisor /= 10;
}
}
