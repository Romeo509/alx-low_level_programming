#include "main.h"

/**
*_strchr - Locates a character in a string
*@s: Strind to search in
*@c: Charcter to locate
*
*Return: A pointer to the first occurance of c in s, or NULL if not found
*/
char *_strchr(char *s, char c);
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (c == '\0')
{
return (s);
}
return (NULL);
}
