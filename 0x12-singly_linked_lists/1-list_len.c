#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * list_len - num of elements
 * @h: list
 *
 * Return: list
 */
size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		h = h->next;
		size++;
	}
	return (size);
}
