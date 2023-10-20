#include "main.h"
/**
 * free_list - free the list of head
 * @head: head of the list_t
 *
 * Return: no return as it's void
 */
void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
