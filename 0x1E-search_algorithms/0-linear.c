#include "search_algos.h"
/**
 * linear_search - searches for a value using linear algorithms
 * @array : pointer to the first element
 * @size: number of elements in array
 * @value: value to search for
 * Return: not present return NULL or -1
 * Description: print the index of the value
 **/

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
