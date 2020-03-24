#include "lists.h"
#include <stdio.h>
/**
 * pop_listint - delete the head
 * @head: head
 *
 * Return: n
 */
int pop_listint(listint_t **head)
{
	listint_t *i;
	int n;

	i = *head;
	if (i != NULL || !head)
		return (0);
	n = i->n;
	*head = i->next;
	free(i);
	return (n);
}
