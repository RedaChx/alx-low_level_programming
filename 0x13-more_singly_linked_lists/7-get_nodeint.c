#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the head node of the list
 * @index: index of the node to return, starting from 0
 *
 * Return: pointer to the nth node of the list, or NULL if the node does
 * not exist
 */
listint *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (head == index)
			return (head);
		i++;
		head = head->next;
	}

	return (NULL);
}
