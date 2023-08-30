#include "main.h"

int find_sqrt(int n, int guess);

/**
* _sqrt_recursion - Returns the natural square root of a number.
* @n: The number for which square root is to be calculated.
* Return: The natural square root of the number, or -1 for error.
*/
int _sqrt_recursion(int n)
{
return (find_sqrt(n, 1));
}

/**
* find_sqrt - Helper function to find the square root using recursion.
* @n: The number for which square root is to be calculated.
* @guess: The current guess for the square root.
* Return: The square root of the number, or -1 for error.
*/
int find_sqrt(int n, int guess)
{
if (guess * guess == n)
{
return (guess);
}
else if (guess * guess > n)
{
return (-1);
}
return (find_sqrt(n, guess + 1));
}
