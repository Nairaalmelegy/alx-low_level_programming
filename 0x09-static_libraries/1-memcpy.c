#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: the place where the memory will be copied to
 * @src: the place where the memory is copied from
 * @n: number of bytes
 *
 * Return: copied memory with n bytes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i;

	for (i = n; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
