#include "holberton.h"
#include <stdio.h>
/**
 * _memset - fills memory with constant byte
 * @s: pointer to a block of memory
 * @b: character to full the memory area with
 * @n: unsigned interger to hold any array index
 *
 * Return: a pointer to the filled memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int x = 0;
for (; x < n; x++)
{
s[x] = b;
}
return (s);
}
