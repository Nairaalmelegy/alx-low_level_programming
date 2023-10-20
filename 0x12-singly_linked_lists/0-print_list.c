#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The list pointer.
 *
 * Return: The number of node
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;
	const list_t *ptr = h;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", ptr->len, ptr->str);

		nodes++;
		ptr = ptr->next;
	}

	return (nodes);
}
