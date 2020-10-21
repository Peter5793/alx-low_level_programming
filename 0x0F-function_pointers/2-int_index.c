#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - function that searches for an integer
 * @array: pointer to an array
 * @size: size of the array
 * @cmp: pointer to the function
 * Return: index of the first element for which cmp does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int a;
if (size > 0 || array == NULL || cmp == NULL)
for (a = 0; a < size; a++)
{
if (cmp(array[a]))
return (a);
}
return (-1);
}
