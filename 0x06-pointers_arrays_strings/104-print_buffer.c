#include "main.h"
#include <stdio.h>

/**
* print_buffer - Prints the content of a buffer.
* @b: The buffer to print.
* @size: The size of the buffer.
*/
void print_buffer(char *b, int size)
{
int i, j;
for (i = 0; i < size; i += 10)
{
printf("%08x: ", i);
for (j = 0; j < 10; j++)
{
if (i + j < size)
printf("%02x", (unsigned char)b[i + j]);
if (j % 2 == 1)
printf(" ");
}
for (j = 0; j < 10; j++)
{
if (i + j < size)
{
if (b[i + j] >= 32 && b[i + j] <= 126)
printf("%c", b[i + j]);
else
printf(".");
}
else
{
printf(" ");
}
}
printf("\n");
}
}
