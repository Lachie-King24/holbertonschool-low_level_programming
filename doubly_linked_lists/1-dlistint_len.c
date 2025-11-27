#include "lists.h"

/**
 * dlistint_len - returns a number of elements in list
 * @h: pointer to head of list
 * Return: Number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
