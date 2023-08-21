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
putchar(*str);
str++;
}
putchar('\n');
}
