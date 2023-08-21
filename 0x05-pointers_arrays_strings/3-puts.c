#include "main.h"
/**
*_puts -  prints a string
*@str: The input string to be printed.
*Return: the answer
*/
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
