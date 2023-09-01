#include "main.h"
#include <stddef.h>

/**
*strncat - Concatenates `n` charg `src` to `dest`.
*@dest: Pointer to the destination string.
*@src: Pointer to the source string.
*@n: Number of characters from `src` to concatenate.
*Return: Pointer to `dest`.
*/
char *_strncat(char *dest, char *src, int n)
{
int dest_len = 0;
int i;
while (dest[dest_len] != '\0')
{
dest_len++;
}
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[dest_len + i] = src[i];
}
dest[dest_len + i] = '\0';
return (dest);
}
