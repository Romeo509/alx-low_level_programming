#include "main.h"

/**
*swap_int - swaps the value of two numbers
*@a: represents the int a
*@b: represents the pointer b
*/
void swap_int(int *a, int *b)
{
int temp =*a;
*a = *b;
*b = temp;
}
