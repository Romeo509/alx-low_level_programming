#include "main.h"
/**
*print_rev - Prints a string in reverse 
*@s: The input string to be printed in revers.
*Return: The answer
*/

void print_rev(char *s)
{
int length = 0;
while (*s != '\0')
{
length++;
s++;
}
while (length > 0)
{
s--;
putchar(*s);
length--;
}
putchar('\n');
}
