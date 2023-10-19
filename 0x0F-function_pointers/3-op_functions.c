#include "3-calc.h"


/**
* op_sub - subctracts two digits.
* @a: num 1
* @b: num 2
*
* Return: difference.
*/
int op_sub(int a, int b)
{
return (a - b);
}

/**
* op_add - adds two digits
* @a: num 1
* @b: num 2
*
* Return: add
*/
int op_add(int a, int b)
{
return (a + b);
}

/**
* op_mul - multiplies two digits.
* @a: num 1
* @b: num 2
*
* Return: multiply
*/
int op_mul(int a, int b)
{
return (a * b);
}

/**
* op_div - divition of two numbers.
* @a: num 1.
* @b: num 2.
*
* Return: division.
*/
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
* op_mod - module of two numbers.
* @a: num 1.
* @b: num 2.
*
* Return: remainder.
*/
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
