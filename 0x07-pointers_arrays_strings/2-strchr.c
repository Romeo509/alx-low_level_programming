#include "main.h"

/**
*_strchr - Locates where a character in a string is
*@s: The string to be searched
*@c: The character to be searched
*
*Return: A pointer to the first occurrence
*/
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
++s;
}
if (*s == c)
{
return (s);
}
return (0);
}
