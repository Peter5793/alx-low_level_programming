#include "lists.h"
/**
 * add_nodeint - Add anew node to the list
 * @head: pointer to the firt element of the list
 * @n: number to fill the list
 * Return: address of the new node
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
