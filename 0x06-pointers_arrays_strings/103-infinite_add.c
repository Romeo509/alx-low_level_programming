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
int len_n1, len_n2, carry = 0;
int i, j, k, result_digit, digit_sum;
for (len_n1 = 0; n1[len_n1]; len_n1++)
;
for (len_n2 = 0; n2[len_n2]; len_n2++)
;
if (len_n1 > size_r || len_n2 > size_r)
return (0);
carry = 0;
for (i = len_n1 - 1, j = len_n2 - 1, k = 0; k < size_r - 1; i--, j--, k++)
{
result_digit = carry;
if (i >= 0)
result_digit += n1[i] - '0';
if (j >= 0)
result_digit += n2[j] - '0';
if (i < 0 && j < 0 && result_digit == 0)
{
break;
}
carry = result_digit / 10;
r[k] = result_digit % 10 + '0';
}
r[k] = '\0';
if (i >= 0 || j >= 0 || carry)
return (0);
for (k -= 1, i = 0; i < k; k--, i++)
{
result_digit = r[k];
r[k] = r[i];
r[i] = result_digit;
}
return (r);
}
