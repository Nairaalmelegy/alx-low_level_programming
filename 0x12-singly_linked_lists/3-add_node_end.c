#include "lists.h"
/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new, *tempor;
    size_t charnumber;

    new = malloc(sizeof(list_t));
    if (new == NULL)
        return (NULL);

    new->str = strdup(str);
    for (charnumber = 0; ; charnumber++)
    {
        if (str[charnumber] == '\0')
        {
            break;
        }
    }
    new->len = charnumber;
    new->next = NULL;
    tempor = *head;

    if (tempor == NULL)
        *head = new;
    else
    {
        while (tempor->next != NULL)
            tempor = tempor->next;
        tempor->next = new;
    }

    return (*head);
}
