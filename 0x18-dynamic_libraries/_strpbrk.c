#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The string containing the characters to match.
 *
 * Return: A pointer to the first occurrence in s of
 * any of the characters in accept.
 * If no such character is found, returns NULL.
 */
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
while (*accept != '\0')
{
if (*s == *accept)
return (s);
accept++;
}

accept = accept - (_strlen(accept) - 1);
s++;
}

return (NULL);
}
