#include "holberton.h"
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: the converted number, 0 if ther is one or more
 * chars in the string b thats is not 0 or 1
 * b is NULL
 **/
unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] == '0' || b[i] == '1')
	{
		val <<= 1;
		val += b[i] - '0';
		i++;
	}
	return (val);
}

