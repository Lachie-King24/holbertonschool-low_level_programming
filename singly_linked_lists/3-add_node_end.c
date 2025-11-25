#include "lists.h"

/**
 * add_node_end - adds a new node to the end of list
 * @head: pointer to pointer of a node
 * @str: pointer to string to add to list
 * Return: Address of new element. NULL if fail
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *carrier;
	list_t *temp;
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

	carrier->next = NULL;

	if (*head == NULL)
	{
		*head = carrier;
		return (carrier);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = carrier;
	return (carrier);
}
