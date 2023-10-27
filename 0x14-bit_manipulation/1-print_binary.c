#include "main.h"

/**
 * print_binary - print the binary number
 * @n: value in decimal
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		printf("0");
	}

	while (n != 0)
	{
		printf("%ld", n % 2);
		n /= 2;
	}
}
