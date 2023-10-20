#include "lists.h"
#include <stdio.h>
/**
 * print_list - to print the content of list_t
 * @h: the content of list_t
 * 
 * Return: counter number of nodes
 */
size_t print_list(const list_t *h)
{
    int counter = 0;
    
    while (h)
    {
        if (h->str == NULL)
        {
            printf("[0] (nil)\n");
        }
        else
        {
            printf("[%d] %s\n", h->nodelen, h->str);
        }
        counter++;
        h = h->next;
    }
    return (counter);
}

