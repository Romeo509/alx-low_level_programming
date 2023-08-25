#include "main.h"

/**
* infinite_add - adding two numbers
* @n1: num1
* @n2: num2
* @r: result
* @size_r: buffer size
*
* Return: 0
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int l1, l2, carry = 0;
int a, b, c, digit_sum, result_digit;
for (l1 = 0; n1[l1]; l1++)
;
for (l2 = 0; n2[l2]; l2++)
;
if (l1 > size_r || l2 > size_r)
return (0);
carry = 0;
for (a = l1 - 1, b = l2 - 1, c = 0; c < size_r - 1; a--, b--, c++)
{
result_digit = carry;
if (a >= 0)
result_digit += n1[a] - '0';
if (b >= 0)
result_digit += n2[b] - '0';
if (a < 0 && b < 0 && result_digit == 0)
{
break;
}
carry = result_digit / 10;
r[c] = result_digit % 10 + '0';
}
r[c] = '\0';
if (a >= 0 || b >= 0 || carry)
return (0);
for (c -= 1, a = 0; a < c; c--, a++)
{
result_digit = r[c];
r[c] = r[a];
r[a] = result_digit;
}
return (r);
}
