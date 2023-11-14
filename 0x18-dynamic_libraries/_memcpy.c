#include "main.h"

/**
* _memcpy - Copies n bytes from memory area src to memory area dest.
* @dest: The destination memory area.
* @src: The source memory area.
* @n: The number of bytes to copy.
*
* Return: The pointer to the destination memory area.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
while (n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}

return (dest);
}
