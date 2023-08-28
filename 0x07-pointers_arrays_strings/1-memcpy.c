#include "main.h"

/**
*_memcpy - Copies memory area
*@dest: Destination memory area
*@src: Source memory area
*@n: Number of bytes to be copied
*
*Return: A pointer to the destination memory area
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
