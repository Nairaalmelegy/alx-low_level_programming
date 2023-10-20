#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
/**
 * struct list_single_list - singly linked list
 * @str: string
 * @nodelen: string length
 * @next: points to the next node
 *
 * Description: structure for single node
 */
typedef struct list_single_list
{
	char *str;
	unsigned int nodelen;
	struct list_single_list *next;
} list_t;
int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
