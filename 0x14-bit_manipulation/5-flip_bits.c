#include "holberton.h"
/**
 * flip_bits - counts the number of bits to change
 * to get ine number to another
 * @n: number to start
 * @m: numbers to go through
 * Return: the numbers of flips
 **/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int index, flip;

	flip = 0;
	for (index = 0; index < 64; index++)
	{
		if ((m >> index & 1) ^ (n >> index & 1))
			flip++;
	}
	return (flip);
}
