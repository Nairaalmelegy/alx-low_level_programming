#include "main.h"

/**
 * print_rev - function that prints a string in reverse form foollowed by 
 * a new line
 * @s: char address
 *
 * Return: 1 or 0
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
