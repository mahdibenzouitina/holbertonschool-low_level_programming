#include "lists.h"
#include <stdio.h>
/**
 * print_listint - print nodes
 * @h: node
 *
 * Return: node
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
