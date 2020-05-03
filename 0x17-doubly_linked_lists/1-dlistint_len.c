#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len -returns the number of elements in a linked list .
 * @h: head
 * Return: num of nodes.
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	int nodes = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
