#include "lists.h"

/**
 * print_listint - print the contint of h list
 * @h: begining of list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t nodenum = 0;

	while (ptr != NULL)
	{
		nodenum += 1;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (nodenum);
}
