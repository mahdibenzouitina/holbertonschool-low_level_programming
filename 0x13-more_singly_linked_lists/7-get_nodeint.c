#include "lists.h"
#include <stdio.h>
/**
 * get_nodeint_at_index - return the nth node
 * @head: head
 * @index: index
 *
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; head != NULL; i++)
	{
		if (index == i)
			return (head);
		head = head->next;
	}
	return (NULL);
}
