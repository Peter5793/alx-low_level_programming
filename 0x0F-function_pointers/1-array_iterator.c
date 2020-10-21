#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - function executes a given a parameter on each element array
 * @array: pointer to the array
 * @action: pointer to the function
 * @size: size of the array
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int a;
if (action == NULL || array == NULL || size <= 0)
return;
a = 0;
while (a < size)
{
action(array[a]);
a++;
}
}
