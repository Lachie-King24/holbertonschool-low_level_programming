#include "lists.h"

/**
 * print_list - prints list of the nodes
 * @list_t: list of nodes
 * @h: pointer to list node
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		count++;
		h = h->next;
	}
	return (count);
}
