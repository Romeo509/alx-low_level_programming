#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*str_concat - Concatenates two strings into a new string.
*@s1: The first string.
*@s2: The second string.
*
*Return: A pointer to the concatenated string, or NULL on failure.
*/
char *str_concat(char *s1, char *s2) {
char *result;
int len1 = (s1 != NULL) ? strlen(s1) : 0;
int len2 = (s2 != NULL) ? strlen(s2) : 0;
int total_len = len1 + len2;
int i, j;
result = (char *)malloc((total_len + 1) * sizeof(char));
if (result == NULL) {
return NULL;
}
for (i = 0; i < len1; i++) {
result[i] = s1[i];
}
for (j = 0; j < len2; j++) {
result[i + j] = s2[j];
}
result[i + j] = '\0';
return result;
}
int main()
{
char *s1 = "Hello, ";
char *s2 = "World!";
char *concatenated = str_concat(s1, s2);
if (concatenated != NULL)
{
printf("Concatenated String: %s\n", concatenated);
free(concatenated);
}
else
{
printf("Memory allocation failed.\n");
}
return 0;
}

