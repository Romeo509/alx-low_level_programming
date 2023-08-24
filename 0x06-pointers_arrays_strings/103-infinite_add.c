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
int len1 = 0, len2 = 0, carry = 0, sum;
char *tmp_r = r;
while (n1[len1] != '\0')
len1++;
while (n2[len2] != '\0')
len2++;
if (len1 > size_r - 1 || len2 > size_r - 1)
return 0;
n1 += len1 - 1;
n2 += len2 - 1;
r += size_r - 1;
*r = '\0';
len1--;
len2--;
while (len1 >= 0 || len2 >= 0 || carry)
{
sum = carry;
if (len1 >= 0)
{
sum += *n1 - '0';
n1--;
}
if (len2 >= 0)
{
sum += *n2 - '0';
n2--;
}
carry = sum / 10;
*--r = sum % 10 + '0';
if ((carry && r == tmp_r) || r < tmp_r)
return 0;
}
return r;
}
