#include "main.h"

/**
* print_diagonal - To print the diagonal line
* @n: represents the integer
* Return: Always 0.
*/
void print_diagonal(int n)
{
int i = 0;    
if (n <= 0)
{
_putchar('\n');
return;
}
while (i < n)
{
int b = 0;       
while (b < i)
{
_putchar(' ');
b++;
}       
_putchar('\\');
_putchar('\n');      
i++;
}
}
