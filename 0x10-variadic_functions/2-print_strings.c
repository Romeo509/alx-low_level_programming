#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
*print_strings - prints strings followed by a new line
*@separator: the string to be printed between the strings (can be NULL)
*@n: the number of strings passed to the function
*@...: the strings to print
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *str;
va_start(args, n);
for (i = 0; i < n; i++)
{
str = va_arg(args, char *);
if (str != NULL)
{
printf("%s", str);
}
else
{
printf("(nil)");
}
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}

