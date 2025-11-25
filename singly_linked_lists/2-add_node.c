#include "lists.h"

/**
 * add_node - add a node at the beginning of list_t
 * @head - pointer to a pointer of a node
 * @str: pointer to string/node to add
 * Return: address of new element. NULL if fail
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *carrier;

	if (head == NULL)
		return (NULL);

	carrier = malloc(sizeof(list_t));
	if (carrier == NULL)
		return (NULL);

	carrier->str = strdup(str);
	if (carrier->str == NULL)
	{
		free(carrier);
		return (NULL);
	}

	carrier->len = strlen(str);
	carrier->next = *head;
	*head = carrier;

	return (carrier);
}
