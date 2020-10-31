#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the list
 *
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
