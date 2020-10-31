#include "lists.h"
/**
 * add_node_end - add new node to the end of the list
 * @head: pointer to the  start of node
 * @str: pointer to where the string will be stored
 * Return: pointer to the address of the new element NULL if
 *  it failed
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *new;

	temp = *head;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (*head);
}
/**
 * _strlen - determinates the lenght of a string
 * @s: pointer to string
 * Return: the length
 **/
int _strlen(const char *s)
{
	int a;
	int len;

	for (a = 0; s[a] != '\0'; a++)
	{
		len++;
	}
	return (a);
}
