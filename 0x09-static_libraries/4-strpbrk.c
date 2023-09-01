#include "main.h"

/**
*_strpbrk - Searches a string for any of a set of bytes.
*@s: The string to be searched.
*@accept: The set of bytes to search for.
*Return: Pointer to the byte in `s` that matchet`,
*         or NULL if no such byte is found.
*/
char *_strpbrk(char *s, char *accept)
{
while (*s)
{
char *a = accept;
while (*a)
{
if (*s == *a)
return (s);
a++;
}
s++;
}
return (0);
}

