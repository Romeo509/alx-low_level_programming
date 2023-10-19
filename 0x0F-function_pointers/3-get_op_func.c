#include "3-calc.h"

/**
*get_op_func - function to perform the operation.
*@s: the operator as a string.
*
*Return: a pointer.
*/
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
while (i < 10)
{
if (s[0] == ops->op[i])
break;
i++;
}
return (ops[i / 2].f);
}
