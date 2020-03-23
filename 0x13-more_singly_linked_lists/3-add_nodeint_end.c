#include "lists.h"
#include <string.h>
/**
 * add_nodeint_end - add node at the end
 * @head: head
 * @n: node
 *
 * Return: node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *i = malloc(sizeof(*i));
	listint_t *j;

	if (i == NULL)
		return (NULL);
	i->n = n;
	i->next = NULL;
	if(*head == NULL)
	{
		*head = i;
		return (i);
	}
	j = *head;
	while (j->next)
		j = j->next;
	j->next = i;
	return (i);
}
