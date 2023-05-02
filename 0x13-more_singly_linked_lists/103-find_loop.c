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
	listint_t *tortoise = head;
	listint_t *hare = head;

	while (hare && hare->next)
	{
		hare = hare->next->next;
		tortoise = tortoise->next;
		if (hare == tortoise)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			return (tortoise);
		}
	}
	return (NULL);
}
