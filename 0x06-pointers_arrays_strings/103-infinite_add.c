#include "main.h"

/**
* infinite_add - Adds two numbers.
* @n1: The first number string.
* @n2: The second number string.
* @r: The buffer to store the result.
* @size_r: The size of the result buffer.
*
* Return: A pointer to the result or 0 if the result cannot fit in r.
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = 0, len2 = 0, carry = 0;
int i, sum, digit_sum;
while (n1[len1] != '\0')
len1++;
while (n2[len2] != '\0')
len2++;
if (len1 >= size_r || len2 >= size_r)
return (0);
r[size_r - 1] = '\0';
while (len1 > 0 || len2 > 0)
{
len1--;
len2--;
if (len1 >= 0)
sum = n1[len1] - '0';
else
sum = 0;
if (len2 >= 0)
sum += n2[len2] - '0';
sum += carry;
digit_sum = sum % 10;
carry = sum / 10;
r[size_r - 2] = digit_sum + '0';
size_r--;
}
if (carry > 0)
{
if (size_r == 1)
return (0);
r[size_r - 2] = carry + '0';
}
return (r + size_r - 1);
}

