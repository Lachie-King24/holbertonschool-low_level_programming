#include "lists.h"

/**
 * list_len - returns the elements of list_t
 * @h: pointer to nodes within the list
 * Return: Number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
