#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - prints coins
* make adassssss
* @argc: argument
* @argv: argument
* Return: 0
*/
int main(int argc, char *argv[])
{
int sum = 0;
if (argc < 2)
{
printf("0\n");
return (0);
}
for (int i = 1; i < argc; i++)
{
int num = atoi(argv[i]);
if (num == 0 && argv[i][0] != '0')
{
printf("Error\n");
return (1);
}
if (num > 0)
{
sum += num;
}
}
printf("%d\n", sum);
return (0);
}

