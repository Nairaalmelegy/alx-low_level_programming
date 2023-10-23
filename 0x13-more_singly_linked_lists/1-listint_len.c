#include "lists.h"
/**
 * listint_len - return the number of elements in h
 * @h: begining of list
 *
 * Return: nodes number
 */
size_t listint_len(const listint_t *h)
{
	size_t nodenum = 0;

	while (h != NULL)
	{
		nodenum++;
		h = h->next;
	}
	return (nodenum);
}
