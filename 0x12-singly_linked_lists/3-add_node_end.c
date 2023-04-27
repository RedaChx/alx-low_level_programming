#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: a pointer to a pointer to the head node of the list
 * @str: the string to be stored in the new node
 *
 * Return: if memory allocation fails or head is NULL, returns NULL.
 * otherwise, returns the address of the new node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;

	if (((*head) == NULL) || ((*head)->next == NULL))
	{
		new = malloc(sizeof(list_t));
		if (new == NULL)
			return (NULL);
		new->str = strdup(str);
		new->len = strlen(str);
		new->next = NULL;

		if (*head == NULL)
		{
			*head = new;
		}
		else
		{
			(*head)->next = new;
		}
		return (new);
	}
	return (add_node_end(&(*head)->next, str));
}
