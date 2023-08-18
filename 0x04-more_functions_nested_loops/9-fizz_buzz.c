#include <stdio.h>

/**
*main - entry point
*
*Return: 0
*/
int main(void)
{
int a;
for (a =; a <= 99; a++)
{
if (a % 15 == 0)
printf("FizzBuzz ");
else if (a % 3 == 0)
printf("Fizz ");
else if (a % 5 == 0)
printf("Buzz ");
else
printf("%a ", a);
}
printf("Buzz\n");
return (0);
}
