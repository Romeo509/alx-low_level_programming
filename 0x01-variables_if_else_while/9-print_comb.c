#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int integer;
for (integer = 0; integer <= 9 ; integer++)
{
putchar(integer + '0');
if (integer != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
