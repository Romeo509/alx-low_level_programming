#include "main.h"
#include <stdio.h>
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
char **words = NULL;
int word_count = 0;
int i, j, k = 0;
if (str == NULL || *str == '\0')
{
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
{
word_count++;
}
}
words = (char **)malloc((word_count + 1) * sizeof(char *));
if (words == NULL)
{
return (NULL);
}
for (i = 0; i < word_count; i++)
{
while (str[k] == ' ')
{
k++;
}
int word_length = 0;
for (j = k; str[j] != ' ' && str[j] != '\0'; j++)
{
word_length++;
}
words[i] = (char *)malloc((word_length + 1) * sizeof(char));
if (words[i] == NULL)
{
for (int l = 0; l < i; l++)
{
free(words[l]);
}
free(words);
return (NULL);
}
strncpy(words[i], &str[k], word_length);
words[i][word_length] = '\0';
k = j;
}
words[word_count] = NULL;
return (words);
}

