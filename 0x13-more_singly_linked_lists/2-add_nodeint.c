#include "lists.h"
/**
 * add_nodeint - return the number of elements in had element to begin list
 * @head: begining of list
 * @n: value to add
 *
 * Return: address of head or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptv;

	ptv = malloc(sizeof(listint_t));
	if(ptv == NULL)
	{
		return (NULL);
	}
	else
	{
		ptv->n = n;
		ptv->next = *head;
		*head = ptv;
	}
	return (*head);
}
