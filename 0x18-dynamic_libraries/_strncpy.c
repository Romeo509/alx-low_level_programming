#include "main.h"

/**
* _strncpy - Copies up to n characters from the source
* string to the destination string.
* @dest: The destination string.
* @src: The source string.
* @n: The maximum number of characters to copy.
*
* Return: The pointer to the destination string.
*/
char *_strncpy(char *dest, char *src, int n)
{
char *ptr = dest;

while (*src != '\0' && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}

while (n > 0)
{
*dest = '\0';
dest++;
n--;
}

return (ptr);
}
