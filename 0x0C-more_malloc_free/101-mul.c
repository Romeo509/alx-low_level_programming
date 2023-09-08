#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point for the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the arguments
 * Return: 0 for success, 98 for errors
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (98);
}
char *num1 = argv[1];
char *num2 = argv[2];
for (int i = 0; num1[i] != '\0'; i++)
{
if (num1[i] < '0' || num1[i] > '9')
{
printf("Error\n");
return (98);
}
}
for (int i = 0; num2[i] != '\0'; i++)
{
if (num2[i] < '0' || num2[i] > '9')
{
printf("Error\n");
return (98);
}
}
long result = atol(num1) * atol(num2);
printf("%ld\n", result);
return (0);
}
