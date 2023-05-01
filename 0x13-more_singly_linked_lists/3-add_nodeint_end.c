#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of listint_t list.
 * @head: a pointer to a pointer to the head node of the list.
 * @n: the integer to be stored in the new node.
 *
 * Return: if memory allocation fails or head is NULL, returns NULL.
 *         Otherwise, returns the address of the new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	if (((*head) == NULL) || ((*head)->next == NULL))
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		new->next = NULL;

		if (*head == NULL)
			*head = new;
		else
			(*head)->next = new;
		return (new);
	}
	return (add_nodeint_end(&(*head)->next, n));
}
