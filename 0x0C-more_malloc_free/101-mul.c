#include <stdio.h>
#include <stdlib.h>

/**
 * is_positive_number - Check if a string is a positive number.
 * @str: The input string to check.
 * Return: 1 if it's a positive number, 0 otherwise.
 */
int is_positive_number(char *str)
{
if (*str == '\0')
return (0);
while (*str)
{
if (*str < '0' || *str > '9')
return (0);
str++;
}
return (1);
}

/**
* multiply - Multiply two positive numbers.
* @num1: The first positive number.
* @num2: The second positive number.
* Return: The product of num1 and num2.
*/
int multiply(int num1, int num2)
{
return (num1 * num2);
}

/**
* main - Entry point of the program.
* @argc: The number of command-line arguments.
* @argv: An array of command-line arguments.
* Return: 0 on success, 98 on error.
*/
int main(int argc, char *argv[])
{
int result, num1, num2;
if (argc != 3)
{
printf("Error\n");
return (98);
}
if (!is_positive_number(argv[1]) || !is_positive_number(argv[2]))
{
printf("Error\n");
return (98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = multiply(num1, num2);
printf("%d\n", result);
return (0);
}

