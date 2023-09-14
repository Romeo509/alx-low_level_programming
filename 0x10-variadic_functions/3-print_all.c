#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
*print_all - prints anything based on a format string
*@format: a string containing format specifiers ('c', 'i', 'f', 's')
*@...: variable arguments based on the format string
*/

void print_all(const char * const format, ...)
{
va_list args;
char *separator = "";
unsigned int i = 0;
va_start(args, format);
while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", separator, va_arg(args, int));
break;
case 'i':
printf("%s%d", separator, va_arg(args, int));
break;
case 'f':
printf("%s%f", separator, va_arg(args, double));
break;
case 's':
{
char *str = va_arg(args, char *);
if (str == NULL)
{
str = "(nil)";
}
printf("%s%s", separator, str);
break;
}
default:
i++;
continue;
}
separator = ", ";
i++;
}
va_end(args);
printf("\n");
}

