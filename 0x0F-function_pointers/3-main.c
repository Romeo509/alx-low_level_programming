#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
*main - Entry point
*@argc: The number of command-line arguments
*@argv: An array of command-line argument strings
*
*Return: 0 on success, or exit with status 98, 99, or 100 on error
*/
int main(int argc, char *argv[])
{
int num1, num2;
int (*operators)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

if (argv[2][1])
{
printf("Error\n");
exit(99);
}

operators = get_op_func(argv[2]);

if (operators == NULL)
{
printf("Error\n");
exit(99);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
printf("%d\n", operators(a, b));
return (0);
}

