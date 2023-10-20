#include <stdio.h>

/**
 * bmain - function that must be executed before main
 * Return: no return as it's void
 */

void __attribute__ ((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
