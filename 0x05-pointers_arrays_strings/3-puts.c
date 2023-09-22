#include "main.h"

/**
 * _puts - function that prints a string tha is followed by a new line
 * to stdout
 * @str: char adress
 *
 * Return:  1 or 0
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
