#include "main.h"
#include <stdio.h>

/**
*print_diagsums - Prints the sum of the two diagonals of a square matrix
*@a: Pointer to the start of the square matrix
*@size: Size of the square matrix
*Return: void
*/
void print_diagsums(int *a, int size)
{
int i;
int sumA = 0, sumb = 0;
for (i = 0; i < size; i++)
{
sumA += *(a + i * size + i);
sumb += *(a + i * size + size - i - 1);
}
printf("%d, %d\n", sumA, sumb);
}

