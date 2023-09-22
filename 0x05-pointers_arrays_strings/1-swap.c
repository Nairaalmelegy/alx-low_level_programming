#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first integer value
 * @b: second integer value
 *
 * Return: 1 or 0
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
