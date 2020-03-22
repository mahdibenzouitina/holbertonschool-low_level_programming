#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * add_node_end - add node
 * @head: head
 * @str: str
 *
 * Return: node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *n, *b;
	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);
	if (!str)
	{
		n->str = NULL;
		n->len = 0;
	}
	else
	{
		n->str = strdup(str);
		while (str && str[i])
			i++;
		n->len = i;
	}
	n->next = NULL;
	if (*head == NULL)
	{
		*head = n;
		return (n);
	}
	b = *head;
	while (b->next != NULL)
		b = b->next;
	b->next = n;
	return (n);
}
