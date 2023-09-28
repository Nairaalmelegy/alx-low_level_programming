#include "main.h"

/**
 * _pow_recursion - returns nmber with power the other
 * @x: number to be multip
 * @y: the power value
 *
 * Return: results of the function
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
