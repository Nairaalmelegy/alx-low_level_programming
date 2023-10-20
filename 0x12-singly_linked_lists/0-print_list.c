#include "lists.h"
/**
 * File: lists.h
 * Author: Naira almelegy
 * 
 * Description: project to print list
 */

#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The list_t list.
 *
 * Return: The number of nodes in h.
 */

size_t print_list(const list_t *h)
{
	size_t nodcount = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		nodcount++;
		h = h->next;
	}

	return (nodcount);
}
