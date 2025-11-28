#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at given position
 * @h: pointer to head of list
 * @idx: count of spot to insert node
 * @n: data
 * Return: address of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *carrier;
	dlistint_t *temp;

	unsigned int count;
	count = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	temp = *h;

	while (temp != NULL && count < idx - 1)
	{
		temp = temp->next;
		count++;
	}

	if (temp == NULL)
		return (NULL);

	if (temp->next == NULL && idx == count + 1)
		return (add_dnodeint_end(h, n));

	carrier = malloc(sizeof(dlistint_t));
	if (carrier == NULL)
		return (NULL);

	carrier->n = n;
	carrier->prev = temp;
	carrier->next = temp->next;

	temp->next->prev = carrier;
	temp->next = carrier;

	return (carrier);
}
