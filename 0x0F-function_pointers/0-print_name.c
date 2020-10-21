#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - funtion that prints name
 * @name: pointer to the character
 * @f: pointer to the function
 */
void print_name(char *name, void(*f)(char *))
{
if (name == NULL || f == NULL)
return;
(*f)(name);
}
