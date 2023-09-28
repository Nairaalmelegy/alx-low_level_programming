#include "main.h"

/**
 * factorial - return the factorial of a number
 * @n: number to get the factorial for
 *
 * Return: fatorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
