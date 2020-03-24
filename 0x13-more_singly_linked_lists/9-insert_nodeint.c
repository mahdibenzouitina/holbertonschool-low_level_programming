#include "lists.h"
#include <stdio.h>
/**
 * insert_nodeint_at_index - insert a new node
 * @head: head
 * @idx: int
 * @n: int
 *
 * Return: node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *a, *b;
	unsigned int i = 0;

	b = malloc(sizeof(listint_t));
	a = *head;
	if (head == NULL && idx != 0)
		return (NULL);
	if (b == NULL)
		return (NULL);
	b->n = n;
	if (idx == 0)
	{
		b->next = *head;
		*head = b;
		return (b);
	}
	for (; i < idx - 1; i++)
	{
		a = a->next;
		if (a == NULL)
			free(b);
		return (NULL);
	}
	b->next = a->next;
	a->next = b;
	return (b);
}
