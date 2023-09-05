#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
*strtow - Splits a string into words.
*@str: The input string.
*
*Return: A pointer to an array of strings (words), or NULL on failure.
*/
char **strtow(char *str)
{
int word_count = 0;
char **words = NULL;
char *token;
int i;
if (!str || !*str)
{
return (NULL);
}
token = strtok(str, " ");
while (token)
{
word_count++;
token = strtok(NULL, " ");
}
if (word_count == 0)
{
return (NULL);
}
words = (char **)malloc((word_count + 1) * sizeof(char *));
if (!words)
{
return (NULL);
}
token = strtok(str, " ");
i = 0;
while (token)
{
words[i] = strdup(token);
if (!words[i])
{
int j;
for (j = 0; j < i; j++)
{
free(words[j]);
}
free(words);
return (NULL);
}
i++;
token = strtok(NULL, " ");
}
words[word_count] = NULL;
return (words);
}
