#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* @argc: The number of command-line arguments
* @argv: An array of command-line argument strings
*
* Return: 0 on success, or exit with status 1 or 2 on error
*/
int main(int argc, char *argv[])
{
int bytes;
char *arr;
int i;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
bytes = atoi(argv[1]);
if (bytes < 0)
{
printf("Error\n");
exit(2);
}

arr = malloc(bytes);

if (arr == NULL)
{
printf("Error\n");
exit(2);
}

for (i = 0; i < bytes; i++)
{
arr[i] = 0;
}

for (i = 0; i < bytes; i++)
{
printf("%02x", arr[i]);
if (i == bytes - 1)
{
printf("\n");
}
else
{
printf(" ");
}
}

free(arr);
return (0);
}

