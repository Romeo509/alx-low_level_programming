#include "main.h"

/**
*string_toupper - converts lowercse to uppercase
*@str: The string to convert.
*
*Return: A pointer  to the resulting string.
*/
char *string_toupper(char *str)
{
char *ptr = str;
while (*str != '\0')
{
if (*str >= 'a' && *str <= 'z')
{
*str = *str - ('a' - 'A');
}
str++;
}
return (ptr);
}
