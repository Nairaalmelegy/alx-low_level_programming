#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - to allocate the memory using malloc
 * @b: int
 * Return: pointer to array initialized or NULL
 */
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == 0)
	{
		exit(98);
	}

	return (ptr);
}
