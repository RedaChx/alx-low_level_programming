#include "lists.h"

/**
 * find_listint_loop -finds the loop in a linked list
 * @head: a pointer to the head of the linked list
 *
 * Return: the address of the node where the loop starts,
 *         or NULL if there is no loop.
 */
listint *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	slow = fast = head
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			slow = head;
			break;
		}
	}
	if (!slow || !fast || !fast->next)
		return (NULL);
	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}
	return (fast)
}
