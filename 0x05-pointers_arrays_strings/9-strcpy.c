#include "main.h"
/**
* _strcpy - Copies the string pointed.
* @dest: The buffer to copy the string to.
* @src: The source string to copy.
*
* Return: The pointer to the destination buffer.
*/
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
 return (dest);
}
