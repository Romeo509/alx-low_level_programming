#include "main.h"

int check_prime(int n, int divisor);

/**
*is_prime_number - Checks if the input integer is a prime number.
*@n: The number to be checked.
*Return: 1 if the number is prime, 0 otherwise.
*/
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (check_prime(n, 2));
}

/**
*check_prime - Helper function to check if a number is prime using recursion.
*@n: The number to be checked.
*@divisor: The current divisor to check for divisibility.
*Return: 1 if the number is prime, 0 otherwise.
*/
int check_prime(int n, int divisor)
{
if (divisor > n / 2)
{
return (1);
}
if (n % divisor == 0)
{
return (0);
}
return (check_prime(n, divisor + 1));
}
