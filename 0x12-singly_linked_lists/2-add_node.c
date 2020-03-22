#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * add_node - add node
 * @head: head
 * @str: str
 *
 * Return: node
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *n;

	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);
	if (!str)
	{
		n->str = NULL;
	}
	else
	{
		n->str = strdup(str);
		while (str && str[i])
			i++;
			n->len = i;
	}
	n->next = *head;
	*head = n;
	return (n);
}
