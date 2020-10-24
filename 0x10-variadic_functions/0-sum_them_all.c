#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * sum_them_all - find the sum of the parameters
 * @n:first parameter
 * @...: next parameters
 *
 * Return: sum of the operation
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sum_list;
	unsigned int i, sum = 0;
	/* Intialize the argument list*/

	if (n == 0)
		return (0);
	va_start(sum_list, n);
	/* intilialize the va_list*/
	for (i = 0; i < n; i++)
	{
		sum += va_arg(sum_list, int);
	}
	va_end(sum_list);
	return (sum);
}
