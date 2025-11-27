#include "lists.h"

/**
 * add_dnodeint - add a new node at beginning of list
 * @n: node within list
 * Return: address of new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *carrier;

	if (head == NULL)
		return (NULL);

	carrier = malloc(sizeof(dlistint_t));
	if (carrier == NULL)
		return (NULL);

	carrier->n = n;
	carrier->prev = NULL;
	carrier->next = *head;

	if (*head != NULL)
		(*head)->prev = carrier;

	*head = carrier;

	return (carrier);
}
