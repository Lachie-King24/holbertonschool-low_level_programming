#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of the list
 * @n: node within the list
 * @head: head of the list
 * Return: address of new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *carrier;
	dlistint_t *current;

	if (head == NULL)
		return (NULL);

	carrier = malloc(sizeof(dlistint_t));
	if (carrier == NULL)
		return (NULL);

	carrier->n = n;
	carrier->next = NULL;
	carrier->prev = NULL;

	if (*head == NULL)
	{
		*head = carrier;
		return (carrier);
	}

	current = *head;
	while (current->next != NULL)
		current = current->next;

	current->next = carrier;
	carrier->prev = current;

	return (carrier);
}
