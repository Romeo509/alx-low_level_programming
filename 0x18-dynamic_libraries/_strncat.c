#include "main.h"

/**
* _strncat - Concatenates two strings up to n characters from src.
* @dest: The destination string.
* @src: The source string.
* @n: The maximum number of characters to concatenate.
*
* Return: The pointer to the destination string.
*/
char *_strncat(char *dest, char *src, int n)
{
char *ptr = dest;

while (*dest != '\0')
dest++;

while (*src != '\0' && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}

*dest = '\0';

return (ptr);
}
