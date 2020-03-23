#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * add_nodeint - add node
 * @head: head
 * @n: int
 *
 * Return: new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *i = malloc(sizeof(listint_t));

	if (i == NULL)
		return (NULL);
	i->n = n;
	i->next = *head;
	*head = i;
	return (*head);
}
