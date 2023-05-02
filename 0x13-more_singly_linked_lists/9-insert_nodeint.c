#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: pointer to a pointer to the first element of the list
 * @idx: index where the new node should be added
 * @n: value to store in the new node
 *
 * Return: address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t *head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new, *temp;

	if (*head == NULL && idx != 0)
		return (NULL);
	if (idx != 0)
	{
		temp = *head;
		for (; i < idx - 1 && teemp != NULL; i++)
			temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
