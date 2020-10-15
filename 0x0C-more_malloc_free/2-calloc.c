#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory to  array
 * @nmemb: elements in a  array
 * @size: size of element
 * Return: returns pointer to allocated memory space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int arrsize, a;
char *p;
if (nmemb == 0 || size == 0)
return (NULL);
p = malloc(size * nmemb);
if (p == NULL)
return (NULL);
arrsize = size * nmemb;
for (a = 0; a < arrsize; a++)
{
p[a] = 0;
}
return (p);
}
