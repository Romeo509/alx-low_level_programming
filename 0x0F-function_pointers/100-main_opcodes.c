#include <stdio.h>
#include <stdlib.h>

/**
*main - Entry point
*@argc: The number of command-line arguments
*@argv: An array of command-line argument strings
*
*Return: 0 on success, or exit with status 1 or 2 on error
*/
int main(int argc, char *argv[])
{
int bytes, i = 0;
char *arr;
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
arr = (char *)main;
while (i < bytes)
{
if (i == bytes - 1)
{
printf("%02hhx\n", arr[i]);
}
else
{
printf("%02hhx ", arr[i]);
}
i++;
}
return (0);
}

