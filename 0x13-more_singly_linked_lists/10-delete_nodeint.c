#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: pointer to the head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *prev;
	unsigned int i;

	if (*head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	prev = *head;
	for (i = 0; prev != NULL && i < index - 1; i++)
		prev = prev->next;

	if (prev == NULL || prev->next == NULL)
		return (-1);

	tmp = prev->next;
	prev->next = tmp->next;
	free(tmp);

	return (1);
}
