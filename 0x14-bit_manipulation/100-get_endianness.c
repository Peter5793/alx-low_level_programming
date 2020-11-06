#include "holberton.h"
/**
 * get_endianness - checks the order of bytes of a word
 * Return: 1 if little endian, 0 if big endian
 **/
int get_endianness(void)
{
	unsigned int num_check = 1;
	char *ptr = (char *)&num_check; /*gets the address of the number*/

	if (*ptr)
		return (1);
	else
		return (0);
}
