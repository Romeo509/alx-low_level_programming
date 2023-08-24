#include "main.h"

/**
* leet - Encodes a string into 1337.
* @str: The string to encode.
*
* Return: A pointer to the resulting encoded string.
*/
char *leet(char *str)
{
char *ptr = str;
while (*str != '\0')
{
if (*str == 'a' || *str == 'A')
*str = '4';
else if (*str == 'e' || *str == 'E')
*str = '3';
else if (*str == 'o' || *str == 'O')
*str = '0';
else if (*str == 't' || *str == 'T')
*str = '7';
else if (*str == 'l' || *str == 'L')
*str = '1';
str++;
}
return (ptr);
}
