#include "lists.h"
/**
 * sum_dlistint - return sum of all data
 * @head:pointer to the first node
 * Return: 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	if (head == NULL)
		return (0);
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

