#include "main.h"
#include <stdlib.h>

/**
*ch_free_grid - frees an array.
*@grid: array of char.
*@ht: heighd .
*
*Return: no return
*/
void ch_free_grid(char **grid, unsigned int ht)
{
if (grid != NULL && ht != 0)
{
for (; ht > 0; ht--)
free(grid[ht]);
free(grid[ht]);
free(grid);
}
}
/**
*strtow - splits a string.
*@str: string.
*
*Return: pointer
*/
char **strtow(char *str)
{
char **aout;
unsigned int c, htt, i, j, a1;
if (str == NULL || *str == '\0')
return (NULL);
for (c = htt = 0; str[c] != '\0'; c++)
if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
htt++;
aout = malloc((htt + 1) * sizeof(char *));
if (aout == NULL || htt == 0)
{
free(aout);
return (NULL);
}
for (i = a1 = 0; i < htt; i++)
{
for (c = a1; str[c] != '\0'; c++)
{
if (str[c] == ' ')
a1++;
if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
{
aout[i] = malloc((c - a1 + 2) * sizeof(char));
if (aout[i] == NULL)
{
ch_free_grid(aout, i);
return (NULL);
}
break;
}
}
for (j = 0; a1 <= c; a1++, j++)
aout[i][j] = str[a1];
aout[i][j] = '\0';
}
aout[i] = NULL;
return (aout);
}

