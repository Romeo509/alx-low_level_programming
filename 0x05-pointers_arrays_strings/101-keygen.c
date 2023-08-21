#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{
char password[84];
int i, sum, random;
srand(time(0));
sum = 0;
for (i = 0; i < 4; i++)
{
random = rand() % 10;
password[i] = '0' + random;
sum += random;
}
password[i++] = 2772 - sum;   
for (; i < 84; i++)
{
random = rand() % 62;
if (random < 10)
password[i] = '0' + random;
else if (random < 36)
password[i] = 'a' + random - 10;
else
password[i] = 'A' + random - 36;
}
password[i] = '\0';
printf("%s\n", password);  
return (0);
}
