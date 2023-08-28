#include "main.h"

/**
*_strpbrk - Searches a string for any of a set of bytes
*@s: The string to be searched
*@accept: The set of bytes to be searched for
*
*Return: NULL
*/
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
char *a = accept;
while (*a != '\0')
{
if (*s == *a)
{
return (s);
}
a++;
}
s++;
}
return (NULL);
}

