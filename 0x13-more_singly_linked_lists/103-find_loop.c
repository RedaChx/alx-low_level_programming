#include "lists.h"

/**
 * find_listint_loop -finds the loop in a linked list
 * @head: a pointer to the head of the linked list
 *
 * Return: the address of the node where the loop starts,
 *         or NULL if there is no loop.
 */
listint *find_listint_loop(listint *head)
{
	listint_t *temp;

	while (temp != NULL)
	{
		temp = head;
		head = head->next;
		if ( temp < head)
			return (head);
	}
	return (NULL);
}
