#include "3-calc.h"
#include <stddef.h>

/**
* get_op_func - function to perform the operation.
* @s: the operator as a string.
*
* Return: a pointer.
*/
int (*get_op_func(char *s))(int, int)
{
int i = 0;
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
while (ops[i].op != NULL)
{
if (*s == *(ops[i].op))
{
return (ops[i].f);
}
i++;
}

return (NULL);
}

