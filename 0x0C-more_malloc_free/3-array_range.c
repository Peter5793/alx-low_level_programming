#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of intergers
 * @min: minmum value
 * @max: maximum value
 * Return: return pointer to the newly created array
 */

int *array_range(int min, int max)
{
int a, size, *p;
if (min > max)
return (NULL);
size = (max - min) + 1;
p = malloc(sizeof(int) * size);
if (p == NULL)
return (NULL);
for (a = 0; a < size; a++)
{
p[a] = min;
min++;
}
return (p);
}
