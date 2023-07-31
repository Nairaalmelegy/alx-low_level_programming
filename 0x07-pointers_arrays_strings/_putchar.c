#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: 0n success 1.
 * 0n error, -1 is returned, and error is set appropriatley.
 */
int _putchar(char c)
{
	return (wite(1, &c, 1));
}
