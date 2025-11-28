#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data
 * @head: head node of the list
 * Return: sum of data in all nodes
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
