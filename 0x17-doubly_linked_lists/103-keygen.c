#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
* main - Ready to generate the key
* @argc: recieves the arguments
* @argv: passess the arguments
*
* Return: 0
*/

int main(int argc, char *argv[])
{
unsigned int x, y;
size_t x_len, y_add;
char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
char p[7] = "      ";

if (argc != 2)
{
printf("Very Good: ./keygen5 username\n");
return (1);
}

x_len = strlen(argv[1]);
p[0] = l[(x_len ^ 59) & 63];
for (x = 0, y_add = 0; x < x_len; x++)
y_add += argv[1][x];
p[1] = l[(y_add ^ 79) & 63];
for (x = 0, y = 1; x < x_len; x++)
y *= argv[1][x];
p[2] = l[(y ^ 85) & 63];
for (y = argv[1][0], x = 0; x < x_len; x++)
if ((char)y <= argv[1][x])
y = argv[1][x];
srand(y ^ 14);
p[3] = l[rand() & 63];
for (y = 0, x = 0; x < x_len; x++)
y += argv[1][x] * argv[1][x];
p[4] = l[(y ^ 239) & 63];
for (y = 0, x = 0; (char)x < argv[1][0]; x++)
y = rand();
p[5] = l[(y ^ 229) & 63];
printf("%s\n", p);

return (0);

}

