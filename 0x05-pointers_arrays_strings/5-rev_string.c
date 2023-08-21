#include "main.h"
/**
*rev_string - Reverse a string
*@s: The input string to be reversed
*Return: void
*/

void rev_string(char *s)
{
int i = 0;
while (s[i])
i++;
while (i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
