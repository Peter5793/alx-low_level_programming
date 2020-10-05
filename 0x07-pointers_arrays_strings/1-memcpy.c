#include "holberton.h"
#include <stdio.h>

/**
 *  _memcpy - copies memory area
 * @dest: first parameter
 * @src: second parameter
 * @n: unsigned interger
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int x;
x = 0;
while (x < n)
{
dest[x] = src[x];
x++;
}
return (dest);
}
