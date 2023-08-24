#include "main.h"
/**
* infinite_add - adds the numbers
* @n1: num1
* @n2: num2
* @r: result
* @size_r: size
*
* Return: address of r or 0
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int carry = 0;
int i = 0, j = 0, k = 0;
while (n1[i] != '\0')
{
i++;
}
while (n2[j] != '\0')
{
j++;
}
if (i >= size_r - 1 || j >= size_r - 1)
{
return (0);
}
i--;
j--;
k = size_r - 2;
while (i >= 0 || j >= 0 || carry)
{
int digit1 = i >= 0 ? n1[i] - '0' : 0;
int digit2 = j >= 0 ? n2[j] - '0' : 0;
int sum = digit1 + digit2 + carry;
carry = sum / 10;
r[k] = (sum % 10) + '0';
i--;
j--;
k--;
}
if (carry)
{
r[k] = carry + '0';
}
else
{
k++;
}
return (&r[k]);
}

