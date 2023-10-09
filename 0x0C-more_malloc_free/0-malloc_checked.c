#include "main.h"
/**
 * *malloc_checked - to allocate the memory using malloc
 * @b: the variable address
 *
 * Return: pointer to arrsy or NULL
 */
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == 0)
		exit(98);
	return (ptr);
}
