#include "main.h"
/**
*_strcat - concatinate two strings
*@dest: The poiter
*@src: The pointer
*Return: dest
*/
char *_strcat(char *dest, char *src) 
{
char *ptr = dest;
while (*ptr != '\0')
{
ptr++;
}
while (*src != '\0')
*ptr = *src;
ptr++;
src++;
}
*ptr = '\0';
return (dest);
}
