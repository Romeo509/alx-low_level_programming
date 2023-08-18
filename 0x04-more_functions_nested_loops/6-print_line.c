#include "main.h"

/**
* print_line - print line of length
* @n: length of line
*/
void print_line(int n)
{
int i = 0;
if (n > 0)
{
while (i < n)
{
_putchar('_');
i++;
}
_putchar('\n');
}
}
