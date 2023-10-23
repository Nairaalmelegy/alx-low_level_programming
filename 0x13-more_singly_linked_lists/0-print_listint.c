#include "lists.h"
#include <stdio.h>
/**
 * print_listint - print the contint of h list
 * @h: begining of list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodenum = 0;

	while (h != NULL)
	{
		nodenum++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodenum);
}
