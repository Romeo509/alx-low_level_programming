#include "main.h"
#include <stdlib.h>
#include <string.h>

int countWords(char *s);
int startIndex(char *s, int index);
int endIndex(char *s, int index);
/**
* strtow - Splits a string into words.
* @str: The input string.
*
* Return: A double pointer to strings or NULL on failure.
*/
char **strtow(char *str)
{
int i, k, len, start, end, j = 0;
int words;
char **ptr;
if (!str)
return (NULL);
words = countWords(str);
if (!words)
return (NULL);
ptr = malloc(sizeof(char *) * (words + 1));
if (!ptr)
return (NULL);
for (i = 0; i < words; i++)
{
start = startIndex(str, j);
end = endIndex(str, start);
len = end - start;
ptr[i] = malloc(sizeof(char) * (len + 1));
if (!ptr[i])
{
i--;
while (i >= 0)
free(ptr[i--]);
free(ptr);
return (NULL);
}
for (k = 0; k < len; k++)
ptr[i][k] = str[start++];
ptr[i][k++] = '\0';
j = end + 1;
}
ptr[i] = NULL;
return (ptr);
}


