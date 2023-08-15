#include "main.h"

/**
* times_table -prints the 9 times table
*
*Returns: Always 0.
*/
void times_table(void) 
int row, column, product;
for (row = 0; rom <= 9; row++)
{
for (column = 0; column <= 9; column++)
{
product = romw * column;
if (column != 0)
{
_putchar(',')
_putchar(' ')
}
if (column != 10)
_putchar(' ');
else
_putchar(' ');
else
_putchar((product / 10) + '0');
_putchar((product % 10) + '0');
}
_putchar('\n');
}
}
