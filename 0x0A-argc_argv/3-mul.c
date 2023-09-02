#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*main - print the multiple of two numbers
*@argc: argument
*@argv: argument
*Return: 0
*/
int main(int argc, char *argv[])
{
int a1, b1;
if (argc == 3)
{
a1 = atoi(argv[1]);
b1 = atoi(argv[2]);
printf("%d\n", a1 *b1);
return (0);
}
printf("Error\n");
return (1);
}
