#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at a given index
 * @head: pointer to head pointer
 * @index: index of node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int count;

	count = 0;

	if (head == NULL || *head == NULL)
	return (-1);

	if (index == 0)
	{
		*head = tmp->next;

		if (tmp->next != NULL)
			tmp->next->prev = NULL;

		free(tmp);
		return (1);
	}

	while (tmp != NULL && count < index)
	{
		tmp = tmp->next;
		count++;
	}

	if (tmp == NULL)
		return (-1);

	if (tmp->prev != NULL)
		tmp->prev->next = tmp->next;

	if (tmp->next != NULL)
		tmp->next->prev = tmp->prev;

	free(tmp);
	return (1);
}
