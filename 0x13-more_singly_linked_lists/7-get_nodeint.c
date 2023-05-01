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
	unsigned int i;
	listint_t *node = head;

	for (i = 0; node && i < index; i++)
		node = node->next;

	return (node ? node : NULL);
}
