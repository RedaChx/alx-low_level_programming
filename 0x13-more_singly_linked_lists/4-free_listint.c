#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: pointer to the head node of the list.
 *
 * Returns: void.
 */
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		if (head->next != NULL)
			free_listint(head->next);
		free(head);
	}
}
