#include "main.h"

/**
* _strcpy - Copies the string pointed to by src to the
* buffer pointed to by dest.
* @dest: The destination buffer.
* @src: The source string.
*
* Return: The pointer to the destination buffer.
*/
char *_strcpy(char *dest, char *src)
{
char *ptr = dest;
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (ptr);
}
