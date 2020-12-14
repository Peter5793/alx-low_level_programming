#include "lists.h"
/**
 * add_dnodeint_end - adds a new node to the start of the list
 * @head: pointer to the first node
 * @n: interger to be copied
 * Return: NULL if fail
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new_node;

	temp = *head;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new_node;
	return (*head);
}
