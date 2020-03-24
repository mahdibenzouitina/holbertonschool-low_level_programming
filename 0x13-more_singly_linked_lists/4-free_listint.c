#include "lists.h"
/**
 * free_listint - free list
 * @head: head
 *
 */
void free_listint(listint_t *head)
{
	listint_t *i;

	while (head != NULL)
	{
		i = head;
		head = head->next;
		free(i);
	}
}
