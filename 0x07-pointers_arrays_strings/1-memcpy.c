#include "main.h"
/**
 * _memcpy - copies @n bytes from src to dest
 * @dest: a pointer to dest array
 * @src: the source buffer to copy characters from
 * @n: the number of bytes to copy from @src
 *
 * Return: A pointer to the destination buffer at @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0 ; x < n ; x++)
	{
		*(dest + i) = *(src + i);/*we point to the arrays and the index of i*/
	}

	return (dest);
}
