#include "lists.h"
#include <stdio.h>
/**
 * free_listint2 - free list
 * @head: head
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *i;

	if (head == NULL || *head == NULL)
		return;
	i = *head;
	while (i != NULL)
	{
		free(i);
		i = i->next;
	}
	*head = NULL;
}
