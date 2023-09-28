#include "main.h"

/**
 * _puts_recursion - prints a string followed by new line
 * @s: address of array
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		_put_recursion(s + 1);
	}
}

