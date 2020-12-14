#include "lists.h"
/**
 * free_dlistint - frees memory from double inked list
 * @head: Pointer to the first node
 * Return: Void
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next, *current;

	current = head;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
