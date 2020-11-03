#include "lists.h"
/**
 * print_listint - print all the elements in a list
 *  @h: pointer to the start of the list
 *  Return: number of elements in the list
 **/
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
