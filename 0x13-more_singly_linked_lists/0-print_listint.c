#include "lists.h"
/**
 * print_listint - print the contint of h list
 * and return number of nodes
 * @h: begining of list
 * 
 * Return: nodes number
 */
size_t print_listint(const listint_t *h)
{
    size_t nodenum;
    
    while (*h != NULL)
    {
        printf("%d\n",h->n);
        nodenum++;
        h = h->next;
    }
    return (nodenum);
}
