include "main.h"
/**
 *powB - lets raises the number base to power power
 *@base : the base
 *@power : the power
 *Return: return the answer
 */
int powB(int base, int power)
{
	int i, prod = 1;

	for (i = 0; i < power; i++)
	{
		prod = prod * base;
	}
	return (prod);
}

/**
 *xxxxxxxxx


 
