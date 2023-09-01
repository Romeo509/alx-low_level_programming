#include "main.h"
#include <unistd.h>

/**
*_puts - Prints a string to stdout.
*@str: The string to print.
*/
void _puts(char *str)
{
while (*str)
{
write(1, str, 1);
str++;
}
}

