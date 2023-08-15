#include "main.h"

/**
*print_to_98 - prints natural numbers
*@n:the starting number
*Return: Always 0.
*/
void print_to_98(int n)
{
if (n < 98)
{
for (int i = n; i < 98; i++)
printf("%d, ", i);
printf("%d\n", 98);
}
else
{
for (int i = n; i > 98; i--)
printf("%d, ", i);
printf("%d\n", 98);
}
}
