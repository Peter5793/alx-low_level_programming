#include "holberton.h"
/**
 *  get_bit - function that returns the value of a bit
 *  @n: interger
 *  @index: index to look for
 *  Return:  value of the bit
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long) * 8)
		return (-1);
	else
		return ((n >> index) & 1);
}
