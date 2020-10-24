#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_strings - print numbers follwoed by a newline
 * @separator: the string to be printed
 * @n: the number of strings passed to the function
 * @...: number of parameters
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list nlist;
	unsigned int i;
	char *p;
	va_start(nlist, n);	

	for (i = 0; i < n; i++)
	{
		p = va_arg(nlist, char*);
		if (p == NULL)
			printf("(nil)");
		else
			printf("%s", p);
		if (separator == NULL || i == n - 1)
			continue;
		else
			printf("%s", separator);
	}
	va_end (nlist);
	printf("\n");
}
