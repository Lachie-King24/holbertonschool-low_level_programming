#include "lists.h"

/**
 * add_node - add a node at the beginning of list_t
 * @head: - pointer to a pointer of a node
 * @str: pointer to string/node to add
 * Return: address of new element. NULL if fail
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *carrier;
	unsigned int len;

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

	for (len = 0; str[len] != '\0'; len++)
	;
	carrier->len = len;

	carrier->next = *head;
	*head = carrier;

	return (carrier);
}
