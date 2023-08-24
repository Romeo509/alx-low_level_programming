#include "main.h"

/**
* leet - encoding into 1337
* @a: for checking characters
* Return: a;
*/
char *leet(char *a)
{
int count = 0, i = 0;
char *alpha = "aeotlAEOTL";
char *numbers = "4307143071";
while (a[count] != '\0')
{
i = 0;
while (alpha[i] != '\0')
{
if (a[count] == alpha[i])
a[count] = numbers[i];
i++;
}
count++;
}
return (a);
}

