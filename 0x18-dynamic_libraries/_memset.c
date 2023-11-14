#include "main.h"

/**
* _memset - Fills the first n bytes of the memory
* area pointed to by s with the constant byte b.
* @s: Pointer to the memory area.
* @b: The byte to fill the memory with.
* @n: Number of bytes to fill.
*
* Return: The pointer to the memory area s.
*/
char *_memset(char *s, char b, unsigned int n)
{
while (n > 0)
{
*s = b;
s++;
n--;
}

return (s);
}
