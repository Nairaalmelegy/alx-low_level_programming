#include "main.h"
/**
 * binary_to_uint - converts binary to decimal int
 * @b: address of binary value
 *
 * Return: value of decimal or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	int length = 0, base_of_two;

	if (!b)
		return (0);

	while (b[length] != '\0')
	{
		length++;
	}

	for (length--, base_of_two = 1; length >= 0; length--, base_of_two *= 2)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}
		if (b[length] & 1)
		{
			value += base_of_two;
		}
	}
	return (value);
}
