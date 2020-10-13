#include "holberton.h"
#include  <stdlib.h>

/**
 * *create_array - creates an array of characters
 * @size: size of the array
 * @c: character
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
char *a = malloc(size);
if (size == 0 || a == 0)
return (0);
while (size--)
a[size] = c;
return (a);
}
