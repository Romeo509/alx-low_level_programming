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
int num_bytes = atoi(argv[1]);
if (argc != 2)
{
printf("Error\n");
return (1);
}
if (num_bytes < 0)
{
printf("Error\n");
return (2);
}
return (0);
}
