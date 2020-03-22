#include "lists.h"
#include <stdio.h>
/**
 * free_list - free list
 * @head: head
 *
 */
void free_list(list_t *head)
{
	list_t *n;
	while (!head)
	{
		n = head;
		free(head->str);
		head = head->next;
		free(n);
	}
}
