#include "lists.h"
#include <stdio.h>
/**
 * listint_len - num of elements
 * @h: node
 *
 * Return: node
 */
size_t listint_len(const listint_t *h)
{
	int size = 0;

	if (h == NULL)
	return (0);
	while (h != NULL)
	{
		h = h->next;
		size++;
	}
	return (size);
}
