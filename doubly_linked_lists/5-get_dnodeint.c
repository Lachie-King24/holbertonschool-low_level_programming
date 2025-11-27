#include "lists.h"

/**
 * get_dnodeint_at_index - return the nth node of the list
 * @head: head of the list
 * @index: index of node in list
 * Return: node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;
	dlistint_t *temp;

	count = 0;
	temp = head;

	while (temp != NULL)
	{
		if (count == index)
			return (temp);

		temp = temp->next;
		count++;
	}
	return (NULL);
}
