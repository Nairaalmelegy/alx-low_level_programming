#include "main.h"

/**
  * print_alphabet - Entry point
  * Return: 0 Always (success)
  */

void print_alphabet(void)
{
	char A = 'a';

	while (A <= 'z')
	{
		_putchar(A);
		A++;

	}
	_putchar('\n');

}
